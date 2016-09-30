/* File: crelib.cpp
 * Author: CRE
 * Last Edited: Fri Sep 30 15:15:17 2016
 */

#include "crelib.h"
#include <stdlib.h>
#include <sys/time.h>

void die(const char * Message)
{
	fprintf(stderr,"%s\n", Message);
	exit(1);
}

unsigned long long LastTime=0;

void updateTime(const char * What, const char * OtherMessage, FILE* LogFile)
{
	unsigned long long ThisTime;
	if (LastTime==0)
	{
		LastTime=getTimeInMuse();
		fprintf(LogFile, "Performed time initial.\n");
	}
	ThisTime=getTimeInMuse();
	fprintf(LogFile,"%s cost %lld ms.",What, ThisTime-LastTime);
	LastTime=ThisTime;
	if (OtherMessage!=NULL) fprintf(LogFile," %s",OtherMessage);
	fprintf(LogFile,"\n");
}

unsigned long long getTimeInMuse()
{
	timeval VTime;
	gettimeofday(&VTime, NULL);
	return VTime.tv_sec*1000000ull+VTime.tv_usec;
}

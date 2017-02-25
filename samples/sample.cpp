/* File: sample.cpp
 * Author: CRE
 * Last Edited: Sat Feb 25 14:32:56 2017
 */

#include "../crelib.h"
#include <iostream>
using namespace cre;
using namespace std;

int main ()
{
	warn("You are using a sample!");
	uint64 In=0;
	uint64 *Out=myalloc(1,uint64);
	updateTime("Initial", "This is a sample for crelib. Please enter 1:");
	cin>>In;
	*Out=In;
	cout<<"The time now in microseconds is "<<getTimeInMuse()<<endl;
	if (*Out!=1) die("You must input 1! Instead you inputed %u!", *Out);
	updateTime("The sample");
	free(Out);
	printf("This is a " toCString(2));
	return 0;
}

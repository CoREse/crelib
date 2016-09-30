#pragma once
#ifndef CRELIB_H
#define CRELIB_H
#include <stdio.h>
#include "defines.h"
namespace crelib
{
	void die(const char * Message=NULL);
	void updateTime(const char * What, const char * OtherMessage=NULL, FILE * LogFile=stderr);
	unsigned long long getTimeInMuse();//get time in microseconds. Muse no minasan, daisuki!^.^
}
#endif

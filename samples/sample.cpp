/* File: sample.cpp
 * Author: CRE
 * Last Edited: Mon Oct 17 16:41:55 2016
 */

#include "../crelib.h"
#include <iostream>
using namespace cre;
using namespace std;

int main ()
{
	uint64 In=0;
	uint64 *Out=myalloc(1,uint64);
	updateTime("Initial", "This is a sample for crelib. Please enter 1:");
	cin>>In;
	*Out=In;
	cout<<"The time now in microseconds is "<<getTimeInMuse()<<endl;
	if (*Out!=1) die("You must input 1!");
	updateTime("The sample");
	return 0;
}

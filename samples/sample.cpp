/* File: sample.cpp
 * Author: CRE
 * Last Edited: Sat Oct  1 14:10:21 2016
 */

#include "../crelib.h"
#include <iostream>
using namespace cre;
using namespace std;

int main ()
{
	uint64 In=0;
	updateTime("Initial", "This is a sample for crelib. Please enter 1:");
	cin>>In;
	cout<<"The time now in microseconds is "<<getTimeInMuse()<<endl;
	if (In!=1) die("You must input 1!");
	updateTime("The sample");
	return 0;
}

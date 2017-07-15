// 99Bottles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int bottles = 99;
	

	while (bottles > 0 && bottles != 1)
	{
		cout << bottles << " bottles of beer on the wall," << bottles << " bottles of beer." << endl;
		cout << "Take one down pass it around," << bottles << " bottles of beer on the wall." << endl;
		bottles = bottles - 1;
	}
	if  (bottles == 1)
	{
		cout << bottles << " bottle of beer on the wall, " << bottles << " bottle of beer" << endl;
		cout << "Take one down pass it around, ";
		bottles = bottles - 1;
	
	}
	cout << "no more bottles of beer on the wall" << endl;

	cin.get();


    return 0;
}


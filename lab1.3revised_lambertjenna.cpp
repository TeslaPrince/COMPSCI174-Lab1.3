// Jenna Lambert
//2-13-19
//2.3 revision
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std; //1.missing namespace

int main()
{
	int num = 0;//2.missing data type
	int square;//5.pt2
	cout << "Input a number: ";//3.missing semicolon
	cin >> num;//4.arrows going the wrong direction
	square = num * num;//5.square variable never defined
	cout << "The square of " << num << " is " << square << "."<<endl; //6.incorrect syntax
} 
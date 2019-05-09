/*Programmer: Adam Lyons
  Date: 5/9/2019
  Purpose: header file to implement the division by zero function*/

#pragma once
// User-defined exception class.

#include <iostream>                     //Line 1
#include <string>                       //Line 2

using namespace std;                    //Line 3

class divisionByZero                    //Line 4
{                                       //Line 5
public:                                 //Line 6
	divisionByZero()                    //Line 7
	{                                   //Line 8
		message = "Division by zero";   //Line 9
	}                                   //Line 10

	divisionByZero(string str)          //Line 11
	{                                   //Line 12
		message = str;                  //Line 13
	}                                   //Line 14

	string what()                       //Line 15
	{                                   //Line 16
		return message;                 //Line 17
	}                                   //Line 18

private:                                //Line 19
	string message;                     //Line 20
};                                      //Line 21

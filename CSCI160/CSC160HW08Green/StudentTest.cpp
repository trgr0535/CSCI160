// Section CSC160 - Computer Science I: C++
// File Name: StudentTest.cpp
// Student: Trevor Green
// Homework Number: 8
// Description: handle student enrollment exceptions
// Last Changed: 3/28/2019

#include <string>
#include <iostream>
#include "Student.h"
#include "StudentException.h"
using namespace std;

int main()
{

	Student testone("S0000001"), testtwo("S0000002"), testthree("S0000003");
	
	try
	{
		testone.enroll("CSC160");
	}
	catch (StudentException e)
	{
		cout << e.errorMessage() << endl;
	}
	try 
	{
		testtwo.enroll("CSC170");
	}
	catch (StudentException e)
	{
		cout << e.errorMessage() << endl;
	}
	try
	{
		testthree.enroll("CSC180");
	} 
	catch (StudentException e)
	{
		cout << e.errorMessage() << endl;
	}
	
	system("pause");
	return 0;
}
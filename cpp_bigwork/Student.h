#pragma once
#include<iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student();
	void in_student();
	void out_student();
	void avg_student();

private:
	int number;
	string name;
	char sex;
	double math, english, politics, sum;
};


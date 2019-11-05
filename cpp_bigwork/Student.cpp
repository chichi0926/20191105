#include "Student.h"

Student::Student()//set default
{
	number = 0;
	name = "unknown";
	sex = 'm';
	math = 0;
	english = 0;
	politics = 0;
	sum = 0;
}

void Student:: in_student()
{
	cout << "请依次输入学生的学号，姓名，性别（m/f)";
	cin >> number >> name >> sex;
	cout << "请依次输入数学，英语，政治成绩";
	cin >> math >> english >> politics;
}

void Student::out_student()
{
	cout << "数学：" << math << "英语：" << english << "政治：" << politics;
}

void  Student::avg_student()
{
	cout << (math + english + politics) / 3;
}
////////////////////////////////////////////////////
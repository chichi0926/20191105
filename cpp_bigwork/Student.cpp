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
	cout << "����������ѧ����ѧ�ţ��������Ա�m/f)";
	cin >> number >> name >> sex;
	cout << "������������ѧ��Ӣ����γɼ�";
	cin >> math >> english >> politics;
}

void Student::out_student()
{
	cout << "��ѧ��" << math << "Ӣ�" << english << "���Σ�" << politics;
}

void  Student::avg_student()
{
	cout << (math + english + politics) / 3;
}
////////////////////////////////////////////////////
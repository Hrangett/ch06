#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Human
{
private:
	char name[20];
	int age;

public:
	void viewHuman()
	{
		cout << "�̸� : " << name << '\n' << "���� : " << age << endl;
	}

	Human(const char* name, int age)
	{
		strcpy(this->name, name);
		this->age = age;
		cout << "������ ȣ��\n" << endl;
	}
	

};

int main()
{
	/*
		int num = 10;
		int& rnum = num;	//lvalue����
	
		int&& rrnum = 100;	//rvalue���� :: new����! �ӽð�ü�� ������ �ʰ� ������ ���������ϵ���

		cout << rnum << endl;
		cout << rrnum << endl;
	*/

	Human h1("ȫ�浿", 30);
	h1.viewHuman();

	return 0;
}
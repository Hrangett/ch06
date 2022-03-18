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
		cout << "������ ȣ��" << endl;
	}

	Human(const Human& other)
	{//��������� :: Lvalue �����̹Ƿ� &
		cout << "\n��������� ȣ��" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;

	}

	Human(Human&& other) noexcept
	{//�̵������� ȣ�� :: Rvalue �����̹Ƿ� &&
		cout << "\n�̵������� ȣ��" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;
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

	Human h2(h1);
	h2.viewHuman();

	Human h3(move(h1));//lvalue type�� h1�� rvalue���·� �ٲ㼭 return
	h3.viewHuman();

	return 0;
}
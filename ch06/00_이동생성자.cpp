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
		cout << "이름 : " << name << '\n' << "나이 : " << age << endl;
	}

	Human(const char* name, int age)
	{
		strcpy(this->name, name);
		this->age = age;
		cout << "생성자 호출\n" << endl;
	}
	

};

int main()
{
	/*
		int num = 10;
		int& rnum = num;	//lvalue참조
	
		int&& rrnum = 100;	//rvalue참조 :: new문법! 임시객체를 만들지 않고도 변수가 참조가능하도록

		cout << rnum << endl;
		cout << rrnum << endl;
	*/

	Human h1("홍길동", 30);
	h1.viewHuman();

	return 0;
}
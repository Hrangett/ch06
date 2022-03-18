#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "생성ㅇ자" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;//포인터 객체 반환?
	}

	void SimpleFunc() {
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}


};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main()
{

	SoSimple obj1(2);
	const SoSimple obj2(7);

	

	obj1.SimpleFunc();
	obj2.SimpleFunc();
	SoSimple obj3 = obj1.AddNum(3);
	obj3.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);
	YourFunc(obj3);

	return 0;
}
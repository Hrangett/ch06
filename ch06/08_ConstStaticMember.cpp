#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class CountryArea
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;

};

int main()
{
	cout << "���þ� ���� : " << CountryArea::RUSSIA << "km" << endl;
	cout << "ĳ���� ���� : " << CountryArea::CANADA << "km" << endl;
	cout << "��  �� ���� : " << CountryArea::CHINA << "km" << endl;
	cout << "��  �� ���� : " << CountryArea::SOUTH_KOREA << "km" << endl;
	return 0;
}
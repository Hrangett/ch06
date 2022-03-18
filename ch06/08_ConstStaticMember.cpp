#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

//클래스 내에서의 변수초기화는 원칙적으론 불가능이지만,
//const static은 클래스가 정의될 때 지정된 값이 유지되는 상수이기 떄문에
//const static으로 맴버변수를 선언함으로써 초기화가 가능하도록 문법으로 정의
//가급적 사용하지 않는다.

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
	cout << "러시아 면적 : " << CountryArea::RUSSIA << "km" << endl;
	cout << "캐나다 면적 : " << CountryArea::CANADA << "km" << endl;
	cout << "중  국 면적 : " << CountryArea::CHINA << "km" << endl;
	cout << "한  국 면적 : " << CountryArea::SOUTH_KOREA << "km" << endl;
	return 0;
}
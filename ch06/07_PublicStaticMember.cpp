#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;

public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;

int main()
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimpel��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimpel��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimpel��ü" << endl;

	return 0;
}
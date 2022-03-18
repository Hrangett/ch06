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
	cout << SoSimple::simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "¹øÂ° SoSimpel°´Ã¼" << endl;
	cout << sim1.simObjCnt << "¹øÂ° SoSimpel°´Ã¼" << endl;
	cout << sim2.simObjCnt << "¹øÂ° SoSimpel°´Ã¼" << endl;

	return 0;
}
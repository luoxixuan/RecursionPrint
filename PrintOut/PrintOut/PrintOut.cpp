// PrintOut.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

using namespace std;

void printOut(int n)
{
	if (n >= 10){
		printOut(n / 10);
		cout << endl;
	}
		
	cout << n % 10;
}

int _tmain(int argc, _TCHAR* argv[])
{
	printOut(789654);
	getchar();
	return 0;
}




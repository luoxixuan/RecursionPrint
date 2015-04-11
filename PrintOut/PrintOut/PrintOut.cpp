// PrintOut.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

void printOut(int n)
{
	if (n >= 10){
		printOut(n / 10);
	}

	printf("%d",n%10);
}

int _tmain(int argc, _TCHAR* argv[])
{
	printOut(789654);
	getchar();
	return 0;
}




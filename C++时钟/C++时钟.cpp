// C++ʱ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main(int argc, _TCHAR* argv[])
{
	SYSTEMTIME STime;
	GetLocalTime(&STime);
	int hour = STime.wHour, min = STime.wMinute, sec = STime.wSecond;
	while (true)
	{
		cout << setfill('0') << setw(2) << hour << ":" << setw(2) << min << ":" << setw(2) << sec << "\r";
		Sleep(1000);
		sec++;
		if (sec == 60)
		{
			min++;
			sec = 0;
		}
		if (min == 60)
		{
			hour++;
			min = 0;
		}
		if (hour == 24)
		{
			hour = 0;
		}
	}
	return 0;
}


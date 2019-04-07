// pimashinDLL.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <utility>
#include <limits.h>
#include <windows.h>
#include "pimashin.h"
#include <iostream>

using namespace std;


void __stdcall WHOIAM()
{
	cout << "WHO I AM" << endl;
}
void __stdcall WHOIAMNAME()
{
	cout << "EGOR" << endl;
}
void __stdcall WHOIAMSURNAME()
{
	cout << "Pimashin" << endl;
}
void __stdcall WHOIAMGENDER()
{
	cout << "Male" << endl;
}
void __stdcall WHOIAMDREAM()
{
	cout << "surfing" << endl;
}

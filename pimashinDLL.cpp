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
	cout << "Pimashin Egor \nRI541216" << endl;
}

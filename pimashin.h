#pragma once
#ifdef DLL
#define PIMASHIN __declspec(dllexport)
#else
#define PIMASHIN __declspec(dllimport)
#endif

#include <iostream>
#include <stdio.h>
#include <windows.h>

extern "C" PIMASHIN void __stdcall WHOIAM();
extern "C" PIMASHIN void __stdcall WHOIAMNAME();
extern "C" PIMASHIN void __stdcall WHOIAMSURNAME();

//-------------------------------------------------------------------------------------------------
//	Created:	2015-6-4   15:36
//	File Name:	main.cpp
//	Author:		Eric(沙鹰)
//	PS:			如果发现说明错误，代码风格错误，逻辑错问题，设计问题，请告诉我。谢谢！
//  Email:		frederick.dang@gmail.com
//	Purpose:	
//-------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <windows.h>

#define __FUN_PAUSE() system("pause")

#define IO_PREFIX	"_IO_"
#define IO_INPUT	(IO_PREFIX "input")
#define MAX_SIZE_T	((size_t)~0)

#define SetConsoleAttr(ColorInfo)	CONSOLE_SCREEN_BUFFER_INFO info;\
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info); \
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorInfo)

#define RecoverConsoleAttr()		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), info.wAttributes)



int main()
{
	// WORD ColorInfo = 0;	//black
	// WORD ColorInfo = FOREGROUND_BLUE;	// blue
	// WORD ColorInfo = FOREGROUND_GREEN; // green
	// WORD ColorInfo = FOREGROUND_RED; // red
	// WORD ColorInfo = FOREGROUND_BLUE | FOREGROUND_GREEN;	// cyan
	// WORD ColorInfo = FOREGROUND_GREEN | FOREGROUND_RED; // yellow
	// WORD ColorInfo = FOREGROUND_BLUE | FOREGROUND_RED; // Magenta
	// WORD ColorInfo = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED; // white


	__FUN_PAUSE();

	return 1;
}
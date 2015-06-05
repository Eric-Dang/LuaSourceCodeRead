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


int main()
{
	int  t = MAX_SIZE_T;
	printf("%d\n", MAX_SIZE_T);
	__FUN_PAUSE();
	return 1;
}
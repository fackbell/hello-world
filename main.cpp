/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, HTML, CSS, JS.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

char* strdup_every_other_char(const char* s);
int main()
{
	char str1[] = "hello world!!";
	char* str2;
	
	str2 = strdup_every_other_char(str1);
	std::cout << "str2 = " << str2 << "\n";
	
	return 0;
}

char* strdup_every_other_char(const char* s)
{
 	int length = strlen(s);
 	char* str = (char*) malloc(length / 2);
 	
	for (int i = 0, j = 0; length > j; i++)
	{
		str[i] = s[j];
		j += 2;
	}

    return str;
}




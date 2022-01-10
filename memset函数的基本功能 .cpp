#include<stdio.h>
#include<string.h>
//memset的基本功能 
int main()
{
	char arr[] = "hello word";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}

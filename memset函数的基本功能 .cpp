#include<stdio.h>
#include<string.h>
//memset�Ļ������� 
int main()
{
	char arr[] = "hello word";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}

#include<stdio.h>
#include<string.h>
//strcpy的基本功能 
int main()
{
	char arr1[] = "bit";
	char arr2[20] = "##########";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}


#include<stdio.h>
#include<string.h>
//strcpy�Ļ������� 
int main()
{
	char arr1[] = "bit";
	char arr2[20] = "##########";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}


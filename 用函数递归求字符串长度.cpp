#include<stdio.h>
//�ú����ݹ����ַ������� 
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str)
{
	if(*str != '\0')
	 return 1+my_strlen(str+1);
	else
	  return 0;
} 
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}

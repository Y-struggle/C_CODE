#include<stdio.h>
//用函数每调用一次值加一 
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	Add(&num);
	printf("num = %d\n",num);
	return 0;
}

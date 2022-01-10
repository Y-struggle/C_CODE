#include<stdio.h>
//函数的声明和定义 可以把函数的声明放在.h文件 把函数的实现放在.c文件  
//函数声明   需要用的时候引用.h头文件 放心大胆的用 
int Add(int, int); 
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用 
	sum = Add(a,b);
	printf("%d\n", sum);
	return 0;
}
//函数定义 
int Add(int x, int y)
{
	int z = x+y;
	return z;
}

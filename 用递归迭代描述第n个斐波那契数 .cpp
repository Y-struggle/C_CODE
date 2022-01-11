#include<stdio.h>
//用递归迭代描述第n个斐波那契数 
//斐波那契数列 
//1 1 2 3 5 8 13 21 34 55.... 
//int Fib(int n)
//{ 
//	if(n<=2)
//	  return 1;
//	else
//	  return Fib(n-1)+Fib(n-2);
//}//效率低 
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1 ;
	while(n>2)
	{
		c= a+b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD - 测试函数开发 
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
} 

#include<stdio.h>
//�õݹ����������n��쳲������� 
//쳲��������� 
//1 1 2 3 5 8 13 21 34 55.... 
//int Fib(int n)
//{ 
//	if(n<=2)
//	  return 1;
//	else
//	  return Fib(n-1)+Fib(n-2);
//}//Ч�ʵ� 
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
	//TDD - ���Ժ������� 
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
} 

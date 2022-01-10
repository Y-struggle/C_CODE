#include<stdio.h>
#include<math.h>
//是素数返回1不是素数返回0 
//用函数查找素数 
int is_prime(int n)
{
	//产生2->n-1
	int j = 0;
	for(j=2; j<=sqrt(n); j++)
	{
		if(n%j == 0)
		   return 0;
	}
	return 1;
} 
int main()
{
	int i = 0;
	for(i=100; i<=200; i++)
	{
		//判断i是否为素数
		if(is_prime(i) == 1) 
		   printf("%d ",i);
	}
}

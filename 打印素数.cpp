#include<stdio.h>
#include<math.h>
//打印素数 
int main()
{
	int i = 0; 
	int count = 0;
	//sart - 开平方的数学库函数 
	for(i=101 ; i<=200; i+=2)
	{
		//判断i是否为素数
		//素数判断的规则
		//1. 试除法
		//产生2->i-1
		int j = 0;
		for(j=2; j<=sqrt(i); j++)
		{
			if(i%j == 0)
			{
				break;
			}
		 } 
		if(j>sqrt(i))
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount =%d\n",count);
	return 0;
}

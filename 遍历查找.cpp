#include<stdio.h>
//遍历查找 
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	//写一个代码在arr数组（有序的）中找到7
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<sz; i++)
	{
		if(k == arr[i])
		{
			printf("找到了，下标是: %d\n",i);
			break;
		}
	 } 
	 if(i == sz)
	   printf("找不到\n");
	return  0;
}


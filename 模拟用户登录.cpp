#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20];
	for(i=0; i<3; i++)
	{
		printf("请输入密码:>");
		scanf("%s",password);
		//if(password == "123456")//==不能用来比较两个字符串是否相等，应该使用一个库函数strcmp 
		if(strcmp(password, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if(i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
}

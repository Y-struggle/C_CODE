#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�ػ����� goto��� 
int main()
{
	char input[20] = {0};
	//shutdown -s -t 60
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע����ĵ�����һ�����ڹػ������������������ȡ���ػ�\n������>:");
	scanf("%s",&input);
	if(strcmp(input,"������") == 0)//�Ƚ������ַ���-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}


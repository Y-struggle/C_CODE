#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20];
	for(i=0; i<3; i++)
	{
		printf("����������:>");
		scanf("%s",password);
		//if(password == "123456")//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��strcmp 
		if(strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if(i == 3)
	{
		printf("��������������˳�����\n");
	}
	return 0;
}

#include<stdio.h>
//�����������Ͷ��� ���԰Ѻ�������������.h�ļ� �Ѻ�����ʵ�ַ���.c�ļ�  
//��������   ��Ҫ�õ�ʱ������.hͷ�ļ� ���Ĵ󵨵��� 
int Add(int, int); 
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//�������� 
	sum = Add(a,b);
	printf("%d\n", sum);
	return 0;
}
//�������� 
int Add(int x, int y)
{
	int z = x+y;
	return z;
}

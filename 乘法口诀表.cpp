#include<stdio.h>
//����Ļ�����9*9�˷��ھ��� 
int main()
{
	int i = 0;//ȷ����ӡ9��
	for(i=1; i<=9; i++)
	{
		//��ӡһ��
		 int j = 1;
		 for(j=1; j<=i; j++)
		 {
		    printf("%d*%d=%-2d ",i, j, i*j);
		 }
		 printf("\n");
	}
	return 0;
}



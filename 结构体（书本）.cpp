#include<stdio.h>
//����һ���ṹ������ 
struct Book
{
	char name[20];//C���Գ������
	short price;//55 
};
int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ����� 
	struct Book b1 = {"C���Գ������",55};
	struct Book* pb = &b1;
	//.������ �ṹ���������Ա
	//->������ �ṹ��ָ��->��Ա 
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	//����pb��ӡ���ҵ������ͼ۸�
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("����:%s\n",b1.name);
	printf("�۸�:%dԪ\n",b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�:%d\n",b1.price);
	return 0;
}


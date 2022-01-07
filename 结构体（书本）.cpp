#include<stdio.h>
//构建一个结构体类型 
struct Book
{
	char name[20];//C语言程序设计
	short price;//55 
};
int main()
{
	//利用结构体类型创建一个该类型的结构体变量 
	struct Book b1 = {"C语言程序设计",55};
	struct Book* pb = &b1;
	//.操作符 结构体变量。成员
	//->操作符 结构体指针->成员 
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	//利用pb打印出我的书名和价格
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("书名:%s\n",b1.name);
	printf("价格:%d元\n",b1.price);
	b1.price = 15;
	printf("修改后的价格:%d\n",b1.price);
	return 0;
}


#include<stdio.h>
struct test 
{
	int a,b,c;
}t1;
void show()
{
	printf("enter first no:");
	scanf("%d",&t1.a);
	printf("enter second no:");
	scanf("%d",&t1.b);	
    t1.c=(t1.a+t1.b);
	printf("sum of values=%d",t1.c);
}
main()
{
	show();
}


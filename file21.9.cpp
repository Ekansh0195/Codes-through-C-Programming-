/// difference btw structure structure and union
#include<stdio.h>
struct test
{
	int a,b;
}t1;
union view
{
	int c,d;
}t2;
main()
{
	printf("when structure use\n");
	t1.a=10;
	printf("%d\t%d\n",t1.a,t1.b);
	t1.b=20;
	printf("%d\t%d\n",t1.a,t1.b);
	printf("\nwhen union use\n");
	t2.c=30;
	printf("%d\t%d\n",t2.c,t2.d);
	t2.d=40;
	printf("%d\t%d",t2.c,t2.d);
}

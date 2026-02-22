#include<stdio.h>
#include<string.h>
struct test 
{
	int r,m;
	char n[10],c[10],g[10];
	
};
main()
{
	FILE *fp;
	fp=fopen("now.txt","w");
	struct test t1;
	printf("enter the name:\n");
	scanf("%s",&t1.n);
	printf("enter the course:\n");
	scanf("%s",&t1.c);
	printf("enter the grade:\n");
	scanf("%s",&t1.g);
	printf("enter the roll no:\n");
	scanf("%d",&t1.r);
	printf("enter the marks:\n");
	scanf("%d",&t1.m);
	fprintf(fp,"NAME\tCOURSE\tGRADE\tROLL\tMARKS\n");
	fprintf(fp,"%s\t%s\t%s\t%d\t%d\t",t1.n,t1.c,t1.g,t1.r,t1.m);
	fclose(fp);

	
}

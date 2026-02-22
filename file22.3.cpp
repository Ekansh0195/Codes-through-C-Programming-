#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("show.txt","w");
	char c;
	printf("enter a chacter:");
	scanf("%c",&c);
	putc(c,fp);
	fclose(fp);
}

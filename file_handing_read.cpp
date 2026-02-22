#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("show.txt","r");
	char c;
	
	c=getc(fp);
	printf("%c",c);
	fclose(fp);
}

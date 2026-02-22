#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("display.txt","r");
	char c;
	while((c=getc(fp))!=EOF)//END OF FILE
	{
		printf("%c",c);
	}
	
	fclose(fp);
}

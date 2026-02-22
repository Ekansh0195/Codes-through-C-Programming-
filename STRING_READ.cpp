#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("display.txt","w");
	char c;
	printf("enter a string:");
	while((c=getchar())!=EOF)//END OF FILE
	{
		putc(c,fp);
	}
	
	fclose(fp);
}

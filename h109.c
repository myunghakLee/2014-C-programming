
							
#include<stdio.h>
#include<stdlib.h>

void main()

{
	FILE*file;
	int cases;
	int i;
	int number;

	file=fopen("input.txt","r");

	fscanf(file,"%d",&cases);
	for(i=0;i<cases;i++)
	{
		fscanf(file,"%x",&number);
		printf("%d\n",number);
	}
}

						

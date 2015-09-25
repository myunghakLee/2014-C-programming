
							
#include<stdio.h>
#include<stdlib.h>

void main ()

{
	FILE*in_file;

		int a,b,c,d;
		int i,j;
		int garo, sero;
		

		in_file = fopen("input.txt", "r");
		if(in_file == NULL) exit(1);

		fscanf(in_file, "%d", &i);
		for(a=0; a<i; a++)
		{
			fscanf(in_file, "%d", &garo);
			fscanf(in_file, "%d", &sero);
			
			for(b=0; b<sero; b++)
			{
				d=b+1;

			for(c=0; c<garo; c++)
			{
			
				printf("%d ",d);
				d=d+sero;
				
			}
			printf("\n");
			
			}
	

		}


}

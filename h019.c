
							
#include <stdio.h>
#include <stdlib.h>

void main ()

{
	FILE*in_file;

		int a, b, c, d;
		int i,j;
	
	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file, "%d", &i);
	for(a=0; a<i; a++)
	{
		fscanf(in_file, "%d", &j);
	
		for(b=1; b<j; b++)

		{
			for(c=0; c<b; c++)
			{		
				if(c==0)
				{
				printf("*");
				}
				else if(c==b-1)
				{
				printf("*");
				}
				else
				{
				printf("+");
				}

				}	
			printf("\n");
			
		}
	for(d=0; d<j; d++)
			{	printf("*");
			}
			printf("\n");
	
	
	
	}





}

						
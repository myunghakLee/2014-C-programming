
							
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	FILE*in_file;

	int a;
	int i, j;

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file, "%d",&i);

	for(a=0; a<i; a++)
	{
		fscanf(in_file, "%d", &j);
////////////////////////////////////////////
		if(j%4==0)
		{
			if(j%100==0)
			{
				if(j%400==0)
				{
					printf("1\n");
				}
				else
				{
					printf("0\n");
				}						
			}
			else
			{
				printf("1\n");
			}				
		}
		else
		{
			printf("0\n");
		}
//////////////////////////////////////////////////
	}

}

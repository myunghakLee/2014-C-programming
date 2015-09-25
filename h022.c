						
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
		for(b=0; b<j/2; b++)
		{
			for(c=0;  c<b; c++)
			{printf("-");}

/////////////////////
			for(c=0; c<j-2*b; c++)
			{
				if(c%2==0)
				{printf("*");}
				else
				{printf("+");}
			}

///////////////////////
				for(c=0;  c<b; c++)
			{printf("-");}
			printf("\n");
			
			

///////////////////////
		}
///////////////////////////////////////////////////////////////////////////////
			for(c=0; c<j/2;c++)
			{printf("-");}
			printf("*");
			for(c=0; c<j/2;c++)
			{printf("-");}
			printf("\n");
////////////////////////////////////////////////////////////////////////////////
		for(b=0; b<j/2; b++)
		{
			for(c=1; c<j/2-b; c++)
			{
				printf("-");
			}
			for(c=0; c<2*(b+1)+1; c++)
			{
				if(c%2==0)
				{printf("*");}
				else
				{printf("+");}
			}
				for(c=1; c<j/2-b; c++)
			{
				printf("-");
			}


			printf("\n");
		
		}
	
	
	}
}

						
						
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
			 
		 for(c=0; c<j;c++)
			 {
				printf("+");
			 }
		printf("\n");
		 for(d=2; d<j; d++)
		 {
		 printf("I");
		 
		 for(b=2; b<j; b++)
			 {
				
					if((b+d)%2==0)
					{printf("X");}
					else
					{printf("-");}

			 }
				printf("I\n");
		 }	


	 for(c=0; c<j;c++)
					{
						printf("+");
					}
	 printf("\n");
	
	}





}


							
#include<stdio.h>
#include<stdlib.h>

void main()

{
	FILE*in_file;

	int time;
	int a,b;
	int i, j;
	int number;
	int g;

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		g=1;
		fscanf(in_file,"%d",&number);
		for(j=0; j<5; j)
		{
			if(number == 1)
			{
				break;
				
			}

			else if(number%4==0)
			{
				number=number/4;
			}
			else if(number%2==0)
			{
				number=number/2;
			}
			else 
			{
				number=number*3+1;
			}
		g=g+1;
		
		
		}
		printf("%d\n",g);
	}
	
}

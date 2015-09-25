					
#include<stdio.h>
#include<stdlib.h>

void main ()

{
	
	FILE*in_file;
	int a;
	int time;
	int i, j;
	int p;
	

	in_file = fopen("input.txt","r");
	if(in_file == NULL) exit(1);

	fscanf(in_file,"%d",&time);

	for(i=0; i<time; i++)
	{
	p=1;

		
		fscanf(in_file,"%d",&a);
	
		for(j=2; j<a; j++)
		{
			if(a%j==0)
			{
				p=p-1;
				break;
				
			
			}
		
		}
		printf("%d\n",p);
	
	}

}

						
						
#include <stdio.h>
#include <stdlib.h>


void main ()

{
	FILE*in_file;
	int i, j;
	int a, b;
	int data1, data2;
	

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file, "%d",&i);

	for(a=0; a<i; a++)
	{
		data2=1;

		fscanf(in_file, "%d",&j);
		
		for(b=0; b<j; b++)
		{
			

			fscanf(in_file, "%d",&data1);
			data1=data1%100;
			data2=data1*data2%100;
		}
		printf("%d\n",data2);	
	}



}

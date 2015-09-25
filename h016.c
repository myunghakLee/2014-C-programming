						
#include <stdio.h>
#include <stdlib.h>


void main ()

{
	FILE*in_file;
	int i, j;
	int a, b, c;
	int data1, data2, data3;
	
	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);


	fscanf(in_file, "%d",&i);

	for(a=0; a<i; a++)
	{
		data2=0;
		data3=0;

		fscanf(in_file, "%d",&j);
		
		for(b=0; b<j; b++)
		{
			fscanf(in_file, "%d", &data1);

				for(c=0; c<10; c)
				{
					if(data1%5==0)
				{
					data2 = data2+1;
					data1 = data1/5;
				}
					else if(data1%2==0)
				{
					data3= data3+1;
					data1 = data1/2;
				}
					else
				{
					break;
				}
				}
		}
		printf("%d\n",data2<data3?data2:data3);	
	}



}

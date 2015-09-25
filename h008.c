#include<stdio.h>
#include<stdlib.h>


void main()

{
	FILE*in_file;
	int i,j;
	int no_cases, no_data, data[1000];
	int min, max;
	

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);
	fscanf(in_file, "%d", &no_cases);


	
	for(i=0; i<no_cases; i++)
	{
		fscanf(in_file, "%d", &no_data);

		fscanf(in_file, "%d", &data[1]);
		max=data[1];
		min=data[1];

		for(j=2; j<no_data+1; j++)
		{

			fscanf(in_file, "%d", &data[j]);
			data[1]==data[2];
			
			if(no_data==1)
			{
				max=data[2];
				min=data[2];
				break;
			}
			
			else if(max<=data[j])
				max=data[j];
		
			
			else if(min>=data[j])
				min=data[j];
			
		
		}
		printf("%d %d\n",max, min);
	}
	fclose(in_file);
	
	
	
}

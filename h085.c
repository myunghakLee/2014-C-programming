					
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	FILE*in_file;

	int time;
	int Ntime;
	int number[257];
	int answer;
	int i,j,k;
	int division;

	in_file = fopen("input.txt","r");
	if(in_file ==NULL) exit(1);
	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		fscanf(in_file, "%d", &Ntime);
	
		answer=0;
		for(j=0; j<Ntime; j++)
		{
			fscanf(in_file,"%d",&number[j]);
		}
		fscanf(in_file,"%d",&division);
		j=0;
			printf("%d ",Ntime-(division-1));
		for(j=0;j<Ntime-(division-1);j++)
		{
			for(k=0;k<division;k++)
			{
				answer = answer+number[j+k];
			}
			printf("%d ",answer/division);
			answer=0;
		}
		printf("\n");
	}

	fclose(in_file);
}

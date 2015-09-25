
							
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	FILE*in_file;
	int time;
	int Dtime;//D=dice
	int Dnumber[200];
	int NOC[11]={0,0,0,0,0,0,0,0,0,0,0};//number of cases
	int i,j,k;// i = time
	int sum;


	in_file = fopen("input.txt","r");
	if (in_file == NULL) exit (1);


	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		
		fscanf(in_file,"%d",&Dtime);
		for(j=0;j<Dtime;j++)
		{
			fscanf(in_file,"%d %d",&Dnumber[j],&Dnumber[j+1]);
			
			sum=Dnumber[j]+Dnumber[j+1];
			NOC[sum-2]+=1;
		}
		

		printf("%d %d %d %d %d %d %d %d %d %d %d\n",NOC[0],NOC[1],NOC[2],NOC[3],NOC[4],NOC[5],NOC[6],NOC[7],NOC[8],NOC[9],NOC[10]);
		for(k=0;k<11;k++)
		{
			NOC[k]=0;
		}
		

	}

	fclose(in_file);

}

						
#include<stdio.h>
#include<stdlib.h>

void main ()

{
	FILE*in_file;
	int time;
	int i,j,k;
	int Lotto[6];
	int bonus;
	int number[6];
	int corect;
	int Bcorect;
	int rank;

	in_file= fopen("input.txt","r");
	fscanf(in_file,"%d",&time);

	for(i=0;i<time;i++)
	{	
		rank =0;
		corect = 0;
		Bcorect =0;
		for(j=0;j<6;j++)
		{
			fscanf(in_file,"%d",&Lotto[j]);
		}
		fscanf(in_file,"%d",&bonus);
		for(j=0;j<6;j++)
		{
			fscanf(in_file,"%d",&number[j]);
		}

		for(j=0;j<6;j++)
		{
			for(k=0;k<6;k++)
			{
				if(Lotto[j]==number[k])
				{
					corect = corect +1;
				}

			}

			if(number[j]==bonus)
			{
				Bcorect= Bcorect+1;
			}
		}
		if(corect ==6)
		{
			rank = 1;
		}
		else if(corect == 5)
		{
			if(Bcorect==1)
			{
				rank = 2;
			}
			else
			{
				rank = 3;
			}
		}
		else if (corect==4)
		{
			rank = 4;
		}
		else if (corect ==3)
		{
			rank = 5;
		}
		else
		{
			rank = 0;
		}
		printf("%d\n",rank);
	}

}

						

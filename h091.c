
							
#include <stdio.h>
#include <stdlib.h>

void main ()

{
	FILE*in_file;

	int cases;
	int i,j,k;
	int time;
	int number[100];
	int Cnumber[100];
	int panbul;//����� ���ĵ��ֳ� �Ǻ��ÿ� ���

	in_file = fopen("input.txt","r");

	fscanf(in_file,"%d",&cases);

	for(i=0;i<cases;i++)
	{
		fscanf(in_file,"%d",&time);
		panbul=0;
		for(j=0;j<time;j++)
		{
			fscanf(in_file,"%d",&number[j]);
			Cnumber[j]=number[j];
		}
		for(;;)
		{
			for(j=0;j<time-1;j++)
			{
				if(number[j]>number[j+1])
				{
					number[j]=Cnumber[j+1];
					number[j+1]=Cnumber[j];
					break;
				}
			}
			for(j=0;j<time;j++)
			{
				Cnumber[j]=number[j];
			}
			
			
			
			
			
			////////////////���⼭ ���ʹ� �³� �Ǻ�
			for(j=0;j<time-1;j++)
			{
				if((number[j]-number[j+1])<=0)
				{
					panbul = panbul+1;
				}

			}
			if(panbul==time-1)
			{
				break;
			}
			panbul=0;

		}
		for(j=0;j<time;j++)
		{
			printf("%d ",number[j]);
		}
		printf("\n");

	}


}

						

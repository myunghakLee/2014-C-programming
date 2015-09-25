
							
#include <stdio.h>
#include <stdlib.h>

void main ()

{
	FILE*in_file;

	int cases;
	int i,j,k;
	int magic[100][100];
	int sum1[2]={0,0};//행의 합들을 저장할 공간
	int sum2[2]={0,0};//열의 합들을 저장할 공간
	int check1,check2;
	int sum=0;
	int volum=0;
	int panbul1=0, panbul2=0, panbul3=0;
	int sum4=0 , sum5=0;//sum1=대각선 sum2 는 반대쪽 대가각선
	int pan1=0, pan2=0, pan3=0;

	in_file = fopen("input.txt","r");

	fscanf(in_file,"%d",&cases);
	for(i=0;i<cases;i++)
	{
		fscanf(in_file,"%d",&volum);
		for(j=0;j<volum;j++)//j가 열 k가 행(가로)
		{
			for(k=0;k<volum;k++)
			{
				fscanf(in_file,"%d",&magic[j][k]);
			}
		}
		sum=0;
		panbul1=0;
		panbul2=0;
		panbul3=0;

		check1=0;
		for(j=0;j<volum;j++)//열의합
		{
			for(k=0;k<volum;k++)
			{
				sum=sum+magic[j][k];
			}
			if(j==0)
			{
				sum2[0]=sum;
			}
			else
			{
				sum2[1]=sum;
			}
			sum=0;
			if(j>0)
			{
				if(sum2[0]!=sum2[1])
				{
					check1=1;
					break;
				}
			}
		}
		pan2=0;
		if(check1 != 1)
		{
			pan2=1;
		}
		sum=0;
		check2 =0;

		if(check1 !=1)
		{
			for(j=0;j<volum;j++)// 행의 합
			{

				for(k=0;k<volum;k++)
				{
					sum=sum+magic[k][j];
				}
				if(j==0)
				{
					sum1[0]=sum;
				}
				else
				{
					sum1[1]=sum;
				}
				sum=0;
				if(j>0)
				{
					if(sum1[0]==sum1[1])
					{
						check2 =1;
						break;
					}
				}
			}

			pan1=0;
			if(check2==1)
			{
				pan1=1;
			}
			sum4=0;

			for(j=0;j<volum;j++)//대각선의 합
			{
				sum4=sum4+magic[j][j];

			}
			sum5=0;

			for(j=0;j<volum;j++)//대각선의 합
			{
				sum5=sum5+magic[j][volum-j-1];
			}
			pan3=0;
			if(sum1[0]==sum2[0]&&sum2[0]==sum4&&sum4==sum5)
			{
				pan3 = 1;
			}
		}
		if(volum==1)
		{
			printf("%d\n",magic[0][0]);
		}
		else
		{
		printf("%d\n",(pan1+pan2+pan3)==3?sum1[0]:-1);
		}




	}

}
						
#include <stdio.h>
#include <stdlib.h>

void main ()

{
	FILE*in_file;

	int cases;
	int i,j,k;
	int volum;//격자판의 크기
	int time;//단위시간 후에
	int teria[100];
	int tteria[100];

	in_file = fopen("input.txt","r");

	fscanf(in_file,"%d",&cases);

	for(i=0;i<cases;i++)
	{
		fscanf(in_file,"%d",&volum);
		fscanf(in_file,"%d",&time);
		for(j=0;j<volum;j++)
		{
			fscanf(in_file,"%d",&teria[j]);
			tteria[j]=teria[j];
		}
		for(j=0;j<time;j++)
		{

			for(k=0;k<volum;k++)
			{
				if((k<volum-1)&&(k>0))
				{
					if(teria[k-1]+teria[k+1]==3)
					{}
					else if((teria[k-1]+teria[k+1]<3)||(teria[k-1]+teria[k+1]>7))
					{
						tteria[k]=tteria[k]-1;
					}
					else if(((teria[k-1]+teria[k+1])>3)&&((teria[k-1]+teria[k+1])<8))
					{
						tteria[k]=tteria[k]+1;
					}

					if(tteria[k]<0)
					{
						tteria[k]=tteria[k]+1;
					}
					else if (tteria[k]>9)
					{
						tteria[k]=tteria[k]-1;
					}
				}
				else if((k==0))
				{
					if(teria[k+1]==3)
					{}

					else if((teria[k+1]<3)||(teria[k+1]>7))
					{
						tteria[k]=tteria[k]-1;
					}
					else if((teria[k+1]>3)&&(teria[k+1]<8))
					{
						tteria[k]=tteria[k]+1;
					}
					if(tteria[k]<0)
					{
						tteria[k]=tteria[k]+1;
					}
					else if (tteria[k]>9)
					{
						tteria[k]=tteria[k]-1;
					}
				}
				else if(k==volum-1)
				{
					if(teria[k-1]==3)
					{}

					else if((teria[k-1]<3)||(teria[k-1]>7))
					{
						tteria[k]=tteria[k]-1;
					}
					else if((teria[k-1]>3)&&(teria[k-1]<8))
					{
						tteria[k]=tteria[k]+1;
					}
					if(tteria[k]<0)
					{
						tteria[k]=tteria[k]+1;
					}
					else if (tteria[k]>9)
					{
						tteria[k]=tteria[k]-1;
					}
				}
			}
			for(k=0;k<volum;k++)
			{
				teria[k]=tteria[k];
			}


		}

		for(j=0;j<volum;j++)
		{
			printf("%d ",teria[j]);
		}
		printf("\n");


	}






}
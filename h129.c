						
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	FILE * in_file;
	int i,j,k;
	int cases;
	char garo[8];
	char space[8];
	int sero[8];
	int answer;
	char c;

	in_file = fopen("input.txt","r");

	fscanf(in_file,"%d",&cases);
	for (i=0;i<cases;i++)
	{
		///////////////////////입력 파트
		for(j=0;j<8;j++)
		{

			fscanf(in_file,"%c",&garo[j]);
			if((garo[j]==32)||(garo[j]==10))
			{
				for(;;)
				{
					fscanf(in_file,"%c",&garo[j]);
					if((garo[j]!=32)&&(garo[j]!=10))
					{
						break;
					}
				}
			}
			fscanf(in_file,"%d",&sero[j]);
		}
		//////////////////////////////여기서부터 메인파트
		answer=1;
		for(j=0;j<8;j++)
		{
			for(k=j+1;k<8;k++)
			{
				if((garo[j]==garo[k])||(sero[j]==sero[k])||(garo[j]-sero[j]==garo[k]-sero[k])||(garo[j]-sero[j]==sero[k]-garo[k])||(garo[j]+sero[j]==garo[k]+sero[k]))
				{
					answer=0;
				}
			}
		}
		printf("%d\n",answer);
	}	 
}

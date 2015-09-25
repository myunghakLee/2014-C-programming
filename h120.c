					
#include<stdio.h>
#include<stdlib.h>

void main()

{
	FILE*file;
	int cases;
	int i,j,k;
	unsigned int pv[4];
	int garage[3];
	int pan;//1인지2인지 판단
	unsigned int answer;
	int knife=255;//나중에 &연산을 하기 위해 11111111을 지정해줌

	file=fopen("input.txt","r");
	fscanf(file,"%d",&cases);
	for(i=0;i<cases;i++)
	{
		answer=0;
		fscanf(file,"%d",&pan);
		if(pan==1)
		{
			fscanf(file,"%d%c%d%c%d%c%d",&pv[0],&garage[0],&pv[1],&garage[1],&pv[2],&garage[2],&pv[3]);
			pv[0]=pv[0]<<24;
			pv[1]=pv[1]<<16;
			pv[2]=pv[2]<<8;
			answer=pv[3]+pv[2]+pv[1]+pv[0];
			printf("%u\n",answer);
		}
		else
		{
			fscanf(file,"%u",&answer);
				
			pv[3] =answer>>24;
			pv[2] =answer>>16&knife;
			pv[1] =answer>>8&knife;
			pv[0] =answer&knife;
			printf("%d.%d.%d.%d\n",pv[3],pv[2],pv[1],pv[0]);
		}
	}
}

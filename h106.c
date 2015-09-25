
Source file.
homework106.c

							
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	FILE*file;

	int cases;
	int i,j,k;
	int edong;
	char tense[1000];
	char test;
	int a;

	file=fopen("input.txt","r");

	fscanf(file,"%d",&cases);
	for(i=0;i<cases;i++)
	{
		fscanf(file,"%d",&edong);
		fscanf(file,"%s",&tense);//입력

		

		for(j=0;j<1000;j++)
		{
			if((tense[j]<91)&&(tense[j]>64))//대문자인 경우
			{
				tense[j]+=edong;
				if(tense[j]>90)//문자가 범위를 넘어가는 경우
				{
					tense[j]-=26;
				}
			}
			else if((tense[j]<123)&&(tense[j]>96))//소문자인 경우
			{
				
				if(tense[j]+edong>122)//문자가 범위를 넘어가는 경우
				{
					tense[j]=tense[j]-26+edong;
				}
				else
				{
					tense[j]+=edong;
				}
			}
			else if(tense[j]==NULL)
			{
				break;
			}


		}

		for(k=0;k<1000;k++)
		{
			if(tense[k]==NULL)
			{break;}
				printf("%c",tense[k]);
			
		}
		printf("\n");
	}
}
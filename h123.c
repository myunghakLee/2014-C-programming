						
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{

	FILE*file;
	int cases;
	int i,j,k,l,m,x,y;
	char string[5000];
	int count;//0A�����Ͷ�����
	int pan=0;//�������Ұ��� ������ Ǯ���� �Ǵ��϶�
	int pan2;//�����͵� �������� �˻�
	int number[5000]={0};
	int number2[5000];
	int number3;
	int a=0;
	char munja[5000];

	int volum;//���� �� ũ��
	int Rvolum;//����ũ��
	int len;//���ڿ��� ���� ���





	file=fopen("input.txt","r");
	fscanf(file,"%d",&cases);

	for(i=0;i<cases;i++)
	{

		fscanf(file,"%d",&pan);


		volum=0,Rvolum=0;
		fscanf(file,"%s",&string);
		len = strlen(string);
		number3=0;//������ 33��
		if(pan==0)//��������  �갡 ������ 0��
		{
			x=0,count=1;
			for(j=0;j<len;j++)//volum�� ã��
			{	
				if(string[j]!=string[j+1])
				{
					volum+=2;
					number[x]=count;
					count=1;
					munja[x]=string[j];
					x++;

				}
				else if(string[j]==string[j+1])
				{
					count++;

				}
				if(count>255)
				{
					count-=256;	
					munja[x]=string[j];
					number[x]=0;
					x++;
					volum+=2;
					if(j==len-2)
					{
						break;
					}
					else if(string[j+1]==string[j+2])
					{
					}
					else if(string[j+1]!=string[j+2])
					{
						x--;
						volum-=2;
					}

				}
			}
			printf("%d %d ",len, volum);
			for(m=0; m<volum/2;m++)
			{
				if(munja[m]==-52)
				{
					break;
				}
				printf("%d%c",number[m],munja[m]);
			}
			printf("\n");
		}
		if(pan==1)//����Ǯ��              �갡 ������26��
		{
			x=0;
			y=0;
			pan2=1;
			for(j=0;j<len;j++)
			{
				if(string[j] >= '0' && string[j] <= '9')//�����϶�
				{

					number[x]=string[j]-48;

					for(k=1;k<pan2;k++)
					{
						number[x-k]*=10;
					}

					if(number[x]==0&&k==1)
					{
						number[x]=256;
					}
					pan2++;
					x++;
				}
				else if(string[j] >= 'A' && string[j] <= 'Z')
				{

					number2[y]=0;
					for(k=0;k<pan2-1;k++)
					{
						number2[y]+=number[x-k-1];
					}
					number3+=number2[y];		
					munja[y]=string[j];
					y++;
					pan2=1;
					Rvolum+=2;
				}
			}
			printf("%d %d ",number3,Rvolum);
			for(k=0;k<Rvolum/2;k++)
			{
				for(l=0;l<number2[k];l++)
				{
					printf("%c",munja[k]);
				}

			}
			printf("\n");		
		}
	}

}
//76��
//79��

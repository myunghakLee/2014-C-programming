						
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	FILE*in_file;
	int time;
	int Npeople;//numble_people
	int score[101];
	int Pscore[100];//number of cases
	int i,j,k,z;// i = time z= �������������ִ���
	int ttime;//2��° time
	int Rscore[100];// Rscore�� �������� ���� �ִ���


	in_file = fopen("input.txt","r");
	if (in_file == NULL) exit (1);


	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		
		z=0;
		fscanf(in_file,"%d",&Npeople);
		for(j=0; j<101;j++)//score�ʱ�ȭ
		{
			score[j]=0;
		}


		for(j=0; j<Npeople;j++)
		{
			fscanf(in_file,"%d",&Pscore[j]);//Pscore[j]�� j��° ����� ���� �¾Ҵ���
			score[Pscore[j]] +=1;//������ �Ѹ� ��������[]�ȿ��� ����[]���� 0~100
		}
		for(j=0;j<101;j++)
		{
			if(score[j] != 0)
			{
				printf("%d %d ",j, score[j]);

			}

		}
		printf("\n");


	}

	fclose(in_file);

}

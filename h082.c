						
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	FILE*in_file;
	int time;
	int Npeople;//numble_people
	int score[101];
	int Pscore[100];//number of cases
	int i,j,k,z;// i = time z= 몇점몇점들이있느냐
	int ttime;//2번째 time
	int Rscore[100];// Rscore은 몇점몇점 들이 있느냐


	in_file = fopen("input.txt","r");
	if (in_file == NULL) exit (1);


	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		
		z=0;
		fscanf(in_file,"%d",&Npeople);
		for(j=0; j<101;j++)//score초기화
		{
			score[j]=0;
		}


		for(j=0; j<Npeople;j++)
		{
			fscanf(in_file,"%d",&Pscore[j]);//Pscore[j]는 j번째 사람이 몇점 맞았는지
			score[Pscore[j]] +=1;//점수에 한명 더해주자[]안에는 점수[]안은 0~100
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

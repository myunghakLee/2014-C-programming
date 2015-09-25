						
#include<stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct Team{
	int win, draw, lose;
	char name[120];
	int score;
}TEAM;

int int_compare(const void *a , const void *b);

void main()
{
	FILE*file;

	int cases;
	int i,j,k;

	int Tnumber;//ÆÀÀÇ °¹¼ö

	struct Team tm[120];
	struct Team *TEAM1;

	TEAM1=tm;

	file=fopen("input.txt","r");

	fscanf(file,"%d",&cases);

	for(i=0;i<cases;i++)
	{
		fscanf(file,"%d",&Tnumber);
		for(j=0;j<Tnumber;j++)
		{
			fscanf(file,"%s",TEAM1->name);
			fscanf(file,"%d %d %d",&TEAM1->win,&TEAM1->draw,&TEAM1->lose);
			TEAM1->score=TEAM1->win*2+TEAM1->draw;
			TEAM1++;
		}
		TEAM1-=Tnumber;

		qsort(TEAM1,Tnumber,sizeof(TEAM),int_compare);


		for(j=0;j<Tnumber;j++)
		{
			printf("%s %d\n",TEAM1->name, TEAM1 ->score);
			TEAM1++;
		}
		TEAM1-=Tnumber;
	}
	fclose(file);
}




int int_compare(const void *a, const void *b)
{
	int i;

	struct Team*m,*n;
	m=(struct Team *)a;
	n=(struct Team *)b;

	if(n->score-m->score!=0)
	{
		return (n->score-m->score);
	}
	else
	{
		if(n->win-m->win!=0)
		{
			return (n->win-m->win);
		}
		else
		{

			if(m->lose-n->lose!=0)
			{
				return (m->lose-n->lose);
			}
			else
			{
				return  strcmp((m->name),(n->name));
			}

		}
	}


}

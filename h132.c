
							
#include<stdio.h>
#include<stdlib.h>

void main()

{
	FILE*in_file;
	int i,j,k,l,m,n;
	int cases;
	int r,s,t;//ù��° ����� ũ���r*s �ι�° ����� ũ���s*t
	int cell1[100][100];
	int cell2[100][100];
	int answer[100][100];
	int Ranswer;
	in_file=fopen("input.txt","r");

	fscanf(in_file,"%d",&cases);
	for(i=0;i<cases;i++)
	{
		//////////////////////////////////////////////////�Է���Ʈ////////////////////////////////////
		fscanf(in_file,"%d %d %d", &r, &s,&t);
		for(j=0;j<r;j++)
		{
			for(k=0;k<s;k++)
			{
				fscanf(in_file,"%d",&cell1[j][k]);
			}
		}
		for(j=0;j<s;j++)
		{
			for(k=0;k<t;k++)
			{
				fscanf(in_file,"%d",&cell2[j][k]);
			}
		}
		///////////////////////////////////////������Ʈ/////////////////////////////////////////////////

		for(l=0;l<r;l++)
		{
			for(m=0;m<t;m++)
			{
				Ranswer=0;
				for(n=0;n<s;n++)
				{
					Ranswer=Ranswer+cell1[l][n]*cell2[n][m];
				}
				answer[l][m]=Ranswer;
			}
		}


		answer[j][k]=cell1[j][k]*cell2[k][j];

		////////////////////////////////////�����Ʈ///////////////////////////////////////////////////
		for(j=0;j<r;j++)
		{
			for(k=0;k<t;k++)
			{
				printf("%d ",answer[j][k]);
			}
			printf("\n");
		}
	}
}

						
						
#include<stdio.h>
#include<stdlib.h>

void main()

{
	FILE*in_file;
	int i,j,k,l;
	int cases;
	int matrix[100][100];//���
	int volume;//����� ũ��
	int range1, range2;//��������
	int answer;
	in_file = fopen("input.txt","r");
	fscanf(in_file,"%d",&cases);

	for(i=0;i<cases;i++)
	{	/////////////////////////////////////�Է� ��Ʈ///////////////////////////////////
		fscanf(in_file,"%d",&volume);

		for(j=0;j<volume;j++)
		{
			for(k=0;k<volume;k++)
			{
				fscanf(in_file,"%d",&matrix[j][k]);
			}
		}
		fscanf(in_file,"%d %d",&range1, &range2);
		///////////////////////////////////////���� ��Ʈ/////////////////////////////////////
//		for(j=0;j<volume;j++)
	//	{
	//		for(k=0;k<volume;k++)
	//		{
	//			printf("%d ",matrix[j][k]);
	//		}
	//		printf("\n");
	//	}



		answer=0;

		for(j=0;j<volume;j++)
		{
			for(k=0;k<volume;k++)
			{
				if((k-j>range1-1)&&(k-j<range2+1))
				{
				answer=answer+matrix[j][k];
				}
			}
		}
		printf("%d\n",answer);




	}

}

						

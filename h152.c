
							
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(void *number1 ,void *number2);

void main ()
{
	FILE*file;
	int cases;
	int i,j,k;
	int count;//number �� ����
	int number[110];//���ĵ� ����
	file=fopen("input.txt","r");
	fscanf(file,"%d",&cases);
	for(i=0;i<cases;i++)
	{
		fscanf(file,"%d",&count);
		///////////////////////////////////////////////////////////////////////number�� �Է¹���//////////////////////////////////////////////////////////
		for(j=0;j<count;j++)
		{
			fscanf(file,"%d",&number[j]);
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		qsort(number,count,sizeof(number[0]),compare);
			for(j=0;j<count;j++)
			{
				printf("%d ",number[j]);
			}
			printf("\n");
	}

}

int compare(void *number1 ,void *number2)
{
	return ( *(int*)number1 - *(int*)number2 );
}

						
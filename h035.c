						
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	FILE*in_file;

	int a, j, i;
	int eha, esang, case1;

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file, "%d",&i);

	for(a=0; a<i; a++)
	{
		fscanf(in_file, "%d", &eha);
		fscanf(in_file, "%d", &esang);
		fscanf(in_file, "%d", &case1);
////////////////////////////////////////////
		if(eha<=case1 && case1<= esang)
		{
				printf("1\n");
		}
		else
		{
				printf("0\n");
		}


//////////////////////////////////////////////////
	}

}

						
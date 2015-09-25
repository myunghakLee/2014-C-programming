						
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	FILE*in_file;

	int a;
	int j, i;
	int case1, case2, case3, case4;

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file, "%d",&i);

	for(a=0; a<i; a++)
	{
		fscanf(in_file, "%d", &case1);
		fscanf(in_file, "%d", &case2);
		fscanf(in_file, "%d", &case3);
		fscanf(in_file, "%d", &case4);
////////////////////////////////////////////
		if(case2<case3 | case1> case4)
		{
				printf("0\n");
		}
		else
		{
				printf("1\n");
		}


//////////////////////////////////////////////////
	}

}

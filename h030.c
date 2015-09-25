						
#include<stdio.h>
#include<stdlib.h>

void main ()

	{
	FILE*in_file;

		int a,b,c,d;
		int i,j;
		int case1, case2, case3;
		
		

		in_file = fopen("input.txt", "r");
		if(in_file == NULL) exit(1);

		fscanf(in_file, "%d", &i);
		for(a=0; a<i; a++)
		{

			fscanf(in_file, "%d", &case1);
			fscanf(in_file, "%d", &case2);
			fscanf(in_file, "%d", &case3);
			
			if(case1>=case2 &&case2>=case3)
			{
				printf("%d\n",case2);
			}
			else if(case3>=case2 && case2>=case1)
			{
				printf("%d\n",case2);
			}
			else if(case2>=case3 && case3>=case1)
			{
				printf("%d\n",case3);
			}
			else if(case1>=case3&&case3 >= case2)
			{
				printf("%d\n",case3);
			}
			else
			{
				printf("%d\n",case1);
			}

		}


}

						
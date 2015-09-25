							
#include <stdio.h>
#include <stdlib.h>

void main()

{

	FILE* in_file;

	int time;
	int x1,y1,x2,y2,x3,y3;
	int i, j;


		in_file = fopen("input.txt", "r");
		if(in_file == NULL) exit(1);

		fscanf(in_file ,"%d", &time);
	

		for(i = 0; i<time; i++)
		{	
			fscanf(in_file, "%d", &x1);
			fscanf(in_file, "%d", &y1);
			fscanf(in_file, "%d", &x2);
			fscanf(in_file, "%d", &y2);
			fscanf(in_file, "%d", &x3);
			fscanf(in_file, "%d", &y3);

			if((x1==x2 && x2==x3)&&((y1<y3&& y3<y2) || (y2<y3 && y3<y1)))
			{
				
				printf("1\n");
			}

			else if(x1==x2&&x2==x3&&(y3==y1 || y3==y2))
			{printf("2\n");}

			else if((y1==y2&&y2==y3) && ((x1<x3&& x3<x2) || (x2<x3 && x3<x1)))
			{
				
				printf("1\n");
			}
			else if((y1==y2&&y2==y3) && (x1==x3 || x2==x3))
				{printf("2\n");}

				
		
			else
			{
				printf("0\n");
			}

		}

}

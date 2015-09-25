					
#include <stdio.h>
#include <stdlib.h>

void main()

{
	FILE*in_file;

		int i;
		int time;
		int x1, x2, y1, y2;
		int a,b;

		in_file = fopen("input.txt", "r");
		if(in_file == NULL) exit(1);

		fscanf(in_file, "%d", &time);
		for(i=0; i<time; i++)
		{
			fscanf(in_file,"%d %d %d %d %d %d",&x1,&y1,&x2, &y2, &a, &b);

			if(((x1<=a && a<=x2)||(x2<=a&& a<=x1))&&((y1<=b&&b<=y2)||(y2<=b && b<=y1)))
			{
				if((a==x2 && b==y2)||(a==x2 && b==y1)||(a==x1 && b==y1)||(a==x1 && b==y2))
					printf("3\n");
				else if(((x1<a && a<x2)||(x2<a&& a<x1))&&((y1<b&&b<y2)||(y2<b && b<y1)))
					printf("0\n");
				else
					printf("2\n");
						
			}
			else
				printf("1\n");
		}





}

						
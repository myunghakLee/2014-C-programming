						
#include <stdio.h>
#include <stdlib.h>




void main()


{
	FILE*in_file;

	int a, b, c, d, e;
		int hol;
		int ggag;
		hol =0;
		ggag=0;

		in_file = fopen("input.txt", "r");
		if(in_file == NULL) exit(1);

		fscanf(in_file, "%d", &a);

			for(b=0; b<a; b++)
			{
				
				fscanf(in_file, "%d",&c);
				for(d=0; d<c; d++)
				{
					fscanf(in_file, "%d",&e);
					if(e%2==0)
					{
						ggag=ggag+1;
					}
					else
					{
						hol = hol+1;
					}
				
				}
				printf("%d %d\n",hol, ggag);
				hol=0;
				ggag=0;
			
			}



		
		
}

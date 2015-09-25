#include <stdio.h>
#include <stdlib.h>


void main()


{
	FILE*in_file;

	int a, b, c, d, e[1000],f,g,h,i,j;
	f=0;//1
	g=0;//2
	h=0;//3
	i=0;//4
	j=0;//



		in_file = fopen("input.txt", "r");
		if(in_file == NULL) exit(1);

		fscanf(in_file,"%d", &a);
	

		for(b=0; b<a; b++)
		{
			
			fscanf(in_file, "%d", &c);

			for(d=1; d<c+1; d++)
			{
				fscanf(in_file,"%d",&e[d]);
			
				if(d>=2)
				{
					
					if(e[d-1]==e[d])
					{
						h=h+1;
						f=f+1;
						g=g+1;
						j=j+1;
					}
				
				
					else if(e[d-1]>=e[d])
					{
						f=f+1;
						if(e[d-1]>e[d]+5)
						{
							i=i+1;
						if(e[d-1]%e[d]==0)
						{
						j=j+1;
						}
						
						}
						else if(e[d-1]%e[d]==0)
						{
						j=j+1;
						}
					}
				
					else if(e[d-1]<=e[d])

					{
						g=g+1;
						if(e[d-1]+5<e[d])
						{
							i=i+1;
							if(e[d]%e[d-1]==0)
							{
							j=j+1;
							}
						
						}
						else if(e[d]%e[d-1]==0)
						{
							j=j+1;
							
						}
					}

				}
			
			
			}
		
		
		printf("%d %d %d %d %d\n",f,g,h,i,j);
			f=0;//1
		g=0;//2
		h=0;//3
		i=0;//4
		j=0;//
		
		}
		fclose(in_file);

}

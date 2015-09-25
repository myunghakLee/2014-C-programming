
							
#include<stdio.h>
#include<stdlib.h>

void main ()

{
	
	FILE*in_file;
	int a;
	int time;
	int i, j;
	int p,q;
	

	in_file = fopen("input.txt","r");
	if(in_file == NULL) exit(1);

	fscanf(in_file,"%d",&time);

	for(i=0; i<time; i++)
	{
	p=1;
	q=1;
		
		fscanf(in_file,"%d",&a);
	
		for(j=2; j*j<a+1; j++)
		{
			if(a%j==0)
			{
				p=p+2;
				q=q+j+a/j;
				if(a==j*j)
				{
					q=q-j;
					p=p-1;
				}
			
			}
		
		}
		printf("%d %d\n",p, q);
	
	}
}

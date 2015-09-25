#include<stdio.h>
#include<stdlib.h>

void main()
{

	FILE *in_file;
	int i;
	int no_cases, start, end;
	int a,b;

		in_file = fopen("input.txt","r");
		if(in_file == NULL) exit(1);

		fscanf(in_file, "%d", &no_cases);

		for(i=0; i<no_cases; i++)

		{
			fscanf(in_file, "%d %d",&a,&b);

			printf("%d %d %d %d %d %d %d %d\n", a+b, a-b, a-b>0?a-b:b-a, a*b, a/b, a%b, a<b?b:a, a==b?1:0);
			}

		fclose(in_file);
}

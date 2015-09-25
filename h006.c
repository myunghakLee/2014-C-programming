#include <stdio.h>
#include <stdlib.h>

int sum_numbers(int s, int t);

void main()
{
	FILE*in_file;
	int i;
	int no_cases, start, end;

	in_file = fopen("input.txt", "r");
	fscanf(in_file, "%d", &no_cases);

	for(i = 0; i<no_cases; i++)
	{
		fscanf(in_file, "%d %d", &start , &end);
		printf("%d\n", sum_numbers(start, end));		
	}

	fclose(in_file);
}

int sum_numbers(int s, int t)
{
	int i;
	int sum;
	sum=0;

	for (i=s; i<=t; i++)
	{
		sum = sum+i;
	}
	return sum;

}
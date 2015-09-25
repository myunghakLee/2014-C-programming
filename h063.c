
							
#include <stdio.h>
#include <stdlib.h>


unsigned int hamming (int);

void main ()

{
	FILE*in_file;
	unsigned int number1, number2;
	int i, j;
	int time;
	int weight1, weight2;
	int m, n;
	int distance;
	int and;
	int or;

	in_file = fopen("input.txt","r");

	fscanf(in_file,"%d",&time);

	for(i=0;i<time;i++)
	{
	fscanf(in_file,"%u %u",&number1,&number2);
	and = number1&number2;
	or = number1|number2;
	printf("%u %u %u\n", hamming(number1), hamming(number2), hamming(or)-hamming(and));

	
	
	}
	

}

unsigned int hamming(int number)
{
	int weight = 0;
	int p;
	
	for(p=0; p<2; p)
	{
	if(number%2==1)
	{
		number=number/2;
		weight = weight+1;
	}
	else if(number==0)
	{
		break;
	}
	else
	{
		number=number/2;
	}
	}

	return weight;

}

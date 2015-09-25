
							
#include<stdio.h>
#include<stdlib.h>

unsigned int check_sum(unsigned int);


void main ()
{
	FILE*in_file;
	int i;
	int time;
	unsigned int number;
	int result;
	int check;

	in_file = fopen("input.txt","r");
	if(in_file ==NULL) exit(1);

	fscanf(in_file,"%d",&time);
		for(i=0;i<time;i++)
		{
			fscanf(in_file,"%u",&number);
			
			check=number&255;

			result= check_sum(number);
			
			printf("%d\n",result==check?1:0);
		
		}
		fclose(in_file);

}

unsigned int check_sum(unsigned int number)
{
	int number1,number2,number3;
	int knife = 255;
	int sum=0;
	int j;

	number1=number>>24;
	number2=(number>>16)&knife;
	number3=(number>>8)&knife;
;
	
	sum = number1+number2+number3;	
	for(j=0; j<2;j++)
	{
		if(sum>=256)
		{
			sum=sum-256;
		}
		else
		{
			break;
		}
	
	
	}
	
	return 255-sum;

}

						
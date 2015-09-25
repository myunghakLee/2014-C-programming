						
#include<stdio.h>
#include<stdlib.h>


int leap_year(int);

void main ()
{
	FILE*in_file;

	int time;
	int i,j;
	int year;
	int week;


	in_file=fopen("input.txt","r");

	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		fscanf(in_file,"%d",&year);
		week = 5;
		for(year; year>1582; year--)
		{
			week=week+1+leap_year(year-1);
		}

		week=week%7;
		printf("%d\n",week);
	
	}




}

int leap_year(int year)
{
	int leap;
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				leap=1;
			}
			else
			{
			leap=0;
			}
		}
		else
		{
			leap=1;
		}
	
	}
	else 
	{
	leap = 0;
	}
	
	return leap;




}

						
						
#include<stdio.h>
#include<stdlib.h>


int leap_year(int);

void main ()
{
	FILE*in_file;

	int time;
	int i,j,k;
	int year, month, day,Rmonth,Ryear;
	int first;


	in_file=fopen("input.txt","r");

	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		fscanf(in_file,"%d %d %d",&year,&month,&day);
		first = 5;
		Ryear=year;
		for(year; year>1582; year--)
		{
			first=first+1+leap_year(year-1);
		}
	
		

		first=first%7;
		first=first + day-1;
			Rmonth=0;
		for(k=1;k<month;k++)
		{
		if(k==1)
		{
			Rmonth=Rmonth+31;
		}


		else if(k==2)
		{
			Rmonth=Rmonth+28+leap_year(Ryear);
		}
		
		else if(k==3)
		{
			Rmonth=Rmonth+31;
		}
		else if(k==4)
		{
			Rmonth=Rmonth+30;
		}
		else if(k==5)
		{
			Rmonth=Rmonth+31;
		}
		else if(k==6)
		{
			Rmonth=Rmonth+30;
		}
		else if(k==7)
		{	
			Rmonth=Rmonth+31;
		}
		else if(k==8)
		{
			Rmonth=Rmonth+31;
		}
		else if(k==9)
		{
			Rmonth=Rmonth+30;
		}
		else if(k==10)
		{
			Rmonth=Rmonth+31;
		}
		else if(k==11)
		{
			Rmonth=Rmonth+30;
		}
		else if(k==12)
		{
			Rmonth=Rmonth+31;
		}



		}

		first=first+Rmonth;
		first=first%7;
		printf("%d\n", first);

	
	
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
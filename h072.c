
							
#include<stdio.h>
#include<stdlib.h>


int leap_year(int);
int day_number(int, int, int);

void main ()
{
	FILE*in_file;

	int time;
	int i,j,k;
	int year1, month1, day1,year2,month2,day2,Ryear1;
	int result;
	int day_number1, day_number2;


	in_file=fopen("input.txt","r");

	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		fscanf(in_file,"%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
		
		day_number1= day_number(year1, month1, day1);
		day_number2= day_number(year2, month2, day2);

		printf("%d\n", day_number2-day_number1+1);



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

int day_number (int year, int month, int day)


{
	int Yfirst,Mfirst,Dfirst;
	int y,m;
	y=m=0;

	for(Yfirst=1582;Yfirst<year;Yfirst++)
	{
		y=y+365+leap_year(Yfirst);
	}
	for(Mfirst=1;Mfirst<month;Mfirst++)
	{
	
				if(Mfirst==1)
				{
					m=m+31;
				}
				else if(Mfirst==2)
				{
					m=m+28+leap_year(year);
				}
				else if(Mfirst==3)
				{
					m=m+31;
				}
				else if(Mfirst==4)
				{
					m=m+30;
				}
				else if(Mfirst==5)
				{
					m=m+31;
				}
				else if(Mfirst==6)
				{
					m=m+30;
				}
				else if(Mfirst==7)
				{
					m=m+31;
				}
				else if(Mfirst==8)
				{
					m=m+31;
				}
				else if(Mfirst==9)
				{
					m=m+30;
				}
				else if(Mfirst==10)
				{
					m=m+31;
				}
				else if(Mfirst==11)
				{
					m=m+30;
				}
				else if(Mfirst==12)
				{
					m=m+31;
				}
				

	}
	return m+y+day;

}

						
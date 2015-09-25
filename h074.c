
							
#include<stdio.h>
#include<stdlib.h>


int leap_year(int);
int day_number(int, int);
int month_number(int, int);

void main ()
{
	FILE*in_file;

	int time;
	int i,j,k;
	int year, month, day;
	int result;
	int day_number1, day_number2;
	int start0,start1;
	int n_calender;

	in_file=fopen("input.txt","r");

	fscanf(in_file,"%d",&time);
	for(i=0; i<time; i++)
	{
		fscanf(in_file,"%d %d",&year,&month);

		start0=(day_number(year, month)+5)%7;
		start1= month_number(year,month);
		n_calender= start1+start0;
		
		for(k=0; k<2; k)
		{
			if(n_calender%7==0)
			{
				break;
			}
			else
			{
				n_calender=n_calender+1;
			}
		}

		printf("%d %d\n",year,month);
		for(j=1;j<n_calender+1;j++)
		{

			if(j<start0+1)
			{
				if(j%7==0)
					printf("0\n");
				else
					printf("0 ");
			}

			else if(j>start1+start0)
			{
				if(j%7==0)
					printf("0\n");
				else
					printf("0 ");
			}
			else
			{
				if(j%7==0)
					printf("%d\n",j-start0);
				else
					printf("%d ",j-start0);
			}
		}


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
int day_number (int year, int month)

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
	return m+y;

}
int month_number (int year, int month)
{
	if(month==1)
	{
		month=31;
	}
	else if(month==2)
	{
		month=28+leap_year(year);
	}
	else if(month==3)
	{
		month=31;
	}
	else if(month==4)
	{
		month=30;
	}
	else if(month==5)
	{
		month=31;
	}
	else if(month==6)
	{
		month=30;
	}
	else if(month==7)
	{
		month=31;
	}
	else if(month==8)
	{
		month=31;
	}
	else if(month==9)
	{
		month=30;
	}
	else if(month==10)
	{
		month=31;
	}
	else if(month==11)
	{
		month=30;
	}
	else if(month==12)
	{
		month=31;
	}

	return month;
}

						
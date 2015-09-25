							
#include <stdio.h>
#include <stdlib.h>

int function1(int a, int b, int c);
int function2(int a, int b, int c);
int function3(int a, int b, int c);
int function4(int a, int b, int c);
int function5(int a, int b, int c);

void main()


{
	FILE*in_file;


	int d, e, f, g, h[1000];
	int num1, num2, num3, num4, num5;
	num1=0;
	num2=0;
	num3=0;
	num4=0;
	num5=0;


		in_file = fopen("input.txt", "r");
		if(in_file == NULL) exit(1);
		
		
		d = function1(1,2,3);
		
		fscanf(in_file, "%d",&d);
			for(e=0; e<d; e++)
			{
				fscanf(in_file, "%d", &f);
				for(g=1; g<f+1; g++)

				{

					fscanf(in_file, "%d", &h[g]);
					if(g>2)
					{
				num1 += function1(h[g], h[g-1], h[g-2]);
				num2 += function2(h[g], h[g-1], h[g-2]);
				num3 += function3(h[g], h[g-1], h[g-2]);
				num4 += function4(h[g], h[g-1], h[g-2]);
				num5 += function5(h[g], h[g-1], h[g-2]);
				
					}
				}
				printf("%d %d %d %d %d\n",num2,num1,num3,num4,num5);

				num1=0;
				num2=0;
				num3=0;
				num4=0;
				num5=0;
			}

		



		fclose(in_file);

}

int function1(int a, int b, int c)
{
	if (a<=b && b<=c)
		return 1;
	else
		return 0;
}
int function2(int a, int b, int c)
{
	if(a>=b && b>=c)
		return 1;
	else
		return 0;
}
int function3(int a, int b, int c)
{
	if(a==b &&a==c)
		return 1;
	else
		return 0;
}
int function4(int a, int b, int c)
{
	if((a==b && a!=c) || (a==c && c!=b) || (b==c && c!=a) )
		{return 1;}

		return 0;
}
int function5(int a, int b, int c)
{
	if(a!=b && a!=c && b!=c)
		return 1;
	else
		return 0;


}
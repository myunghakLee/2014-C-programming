#include <stdio.h>
#include <stdlib.h>

void compute_easter(int y);

void main(void)
{
FILE *in_file;
int i;
int no_cases, start, end;
int year;

 in_file = fopen("input.txt", "r");
 if(in_file ==NULL) exit(1);
 fscanf(in_file, "%d", &no_cases);

 for(i=0; i<no_cases; i++)
 {
  fscanf(in_file, "%d", &year);
  compute_easter(year);
 }
 fclose(in_file); 
}

void compute_easter(int y)
{
 int c, n, t, i, j, k, l, p, q, num1, num2, num3, num4, num5, num6, num7;
 int month, day;

 c = y /100;
 n = y-y/19*19;
 t = (c-17)/25;
 num1 = c-c/4-(c-t)/3;
 num2 = n*19+15;
 i = num1+num2;
 j = i-i/30*30;
 num3 = j/28;
 num4 = 1-j/28;
 num5 = 29/(j+1);
 num6 = (21-n)/11;
 k = j-num3*num4*num5*num6; 
 num7 = y+y/4+j+2; 
 l = num7-c+c/4;
 p = l-l/7*7;
 q = k-p;
 month = (q+40)/44+3; 
 day = q+28-(month/4*31);
 printf("%d %d\n", month, day);

 

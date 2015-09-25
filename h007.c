/*
  Problem 5: *
  주어진 정수의 합 구하기 *

국민대학교 전자정보통신대학 컴퓨터공학부 1 학년
20143086 이명학
*/
#include <stdio.h>
#include <stdlib.h>
void main(void)
{
FILE *in_file;
int i, j;
int no_cases, no_data;
int sum, data;
in_file = fopen("input.txt", "r"); /* open input file */
if(in_file == NULL) exit(1);
fscanf(in_file, "%d", &no_cases); /* read the number of test cases */
for(i=0; i<no_cases; i++)
{
fscanf(in_file, "%d", &no_data);
sum = 0;
for (j=0; j<no_data; j++)
{
fscanf(in_file, "%d", &data);
sum += data;
}
printf("%d\n", sum); /* print out the sum of numbers */
}
fclose(in_file); /* close input file */
}

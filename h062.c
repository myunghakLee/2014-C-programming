
							
#include <stdio.h>
#include <stdlib.h>

unsigned long int byte (int, int a[4]);


void main ()
{
	FILE * in_file;
	unsigned long int t;
	unsigned long int i;
	unsigned long int number;
	int a[4];
	in_file=fopen("input.txt","r");

	fscanf(in_file,"%d",&t);
	for(i=0;i<t;i++)
	{
		fscanf(in_file,"%u %d %d %d %d",&number, &a[0], &a[1],&a[2],&a[3]);
		
		printf("%u\n",byte (number,a));
	
	
	}
	




}
unsigned long int byte (int number, int a[4])
{
	unsigned long int bytes[4];
	
	unsigned long int knife=255;
	unsigned long int result=0;

	
	bytes[0] = knife&number;
	bytes[1] = ((knife<<8)&number)>>8;
	bytes[2] = ((knife<<16)&number)>>16;
	bytes[3] = ((knife<<24)&number)>>24;

	result|=((bytes[a[0]-1])<<24);
	result|=((bytes[a[1]-1])<<16);
	result|=((bytes[a[2]-1])<<8);
	result|=((bytes[a[3]-1]));

	return  result;

}



						
					
#include <stdio.h>
#include<stdlib.h>

void main ()

{
 FILE*in_file;
 int a,b;
 int i,j;
 int number, Rnumber,number1,number2;
 int m;
 int count;
 

  in_file = fopen("input.txt", "r");

  
  fscanf(in_file,"%d",&a);
  for(i=0; i<a; i++)

  {
   fscanf(in_file,"%d",&number);
   
   
   Rnumber=number;
   count =0;
    for(m=0; m<2; m)
    {
 
     if(number==0)
     {
      break;
     }
     else if(number%2==1)
     {
     count= count+1;
     }
     number = number/2;
    }

    if(count%2==1)
    {
     Rnumber=Rnumber+2147483648;
		
		
		printf("%u\n",Rnumber);
    }

	else
	{
		
		
		printf("%u\n",Rnumber);
		
 
	}
  
  
  }

  fclose(in_file);
}

						

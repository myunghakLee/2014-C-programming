
							
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE*file;
	int i,j,k;
	int cases;
	char number[1000];
	int pan=0;
	int len;


	file= fopen("input.txt","r");

	fscanf(file,"%d",&cases);
	{
		for(i=0;i<cases;i++)
		{
			pan=0;
			fscanf(file,"%s",number);
			len=strlen(number);

			if(number[0]=='0')//8진수 혹은 16진수
			{
				if(number[1]=='x'||number[1]=='X')//16진수인 경우
				{

					for(j=2;j<len;j++)
					{
						if((number[j]>='0'&&number[j]<='9')||(number[j]>='a'&&number[j]<='f')||(number[j]>='A'&&number[j]<='F'))
							pan++;
					}
					if(pan==0)
					{
						printf("0\n");
					}
					else if(pan==len-2)
						printf("16\n");
					else
						printf("0\n");
				}
				else//8진수인 경우
				{
					for(j=1;j<len;j++)
					{
						if(number[j]>='0'&&number[j]<'8')
							pan++;
					}

					if(pan==len-1)
						printf("8\n");
					else
						printf("0\n");

				}
			}
			else//10진수인 경우
			{
				for(j=0;j<len;j++)
				{
					if(number[j]>='0'&&number[j]<='9')
					{
						pan++;
					}
				}
				if(pan==len)
				{
					printf("10\n");
				}
				else
				{
					printf("0\n");
				}

			}
		}

	}
}

						


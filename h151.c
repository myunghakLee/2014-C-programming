						
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int two(char number[110], int k);
int three(char number[110], int k);
int four(char number[110], int k);
int five(char number[110], int k);
int six(char number[110], int k);
int seven(char number[110], int k);
int eight(char number[110], int k);
int nine(char number[110], int k);
int ten(char number[110], int k);
int eleven(char number[110], int k);


void main()

{
	FILE*file;

	int cases;
	int i,j,k;
	char number[110];

	file=fopen("input.txt","r");

	fscanf(file,"%d",&cases);

	for(i=0;i<cases;i++)
	{
		fscanf(file,"%s",number);
		k=strlen(number);
		for(j=0;j<k;j++)
		{
			number[j]-='0';
		}
		printf("%d %d %d %d %d %d %d %d %d %d\n",two(number,k),three(number,k),four(number,k),five(number,k),six(number,k),seven(number,k),eight(number,k),nine(number,k),ten(number,k),eleven(number,k));
	}
}

int two(char number[110], int k)
{
	

	if(number[k-1]%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int three(char number[110], int k)
{
	int i,j;
	int plus=0;
	

	for(j=0;j<k;j++)
	{
		plus+=number[j];
	}
	if(plus%3==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int four(char number[110], int k)
{
	if(k<2)
	{
		if(number[k-1]%4==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if((number[k-1]+(number[k-2]*10))%4==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

}
int five(char number[110], int k)
{

	if((number[k-1]==0)||(number[k-1]==5))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int six(char number[110], int k)
{

	if(three(number,k)+two(number,k)==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int seven(char number[110], int k)
{
	int i,j,m;
	int save=0;//Àá½Ã °è»êÇÑ ¼ö¸¦ ÀúÀåÇØµÒ
	char Rnumber[110];

	for(i=0;i<110;i++)
	{
		Rnumber[i]=number[i];
	}



	if(k<2)
	{
		if(Rnumber[0]%7==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	else
	{

		for(j=0;j<k-1;j++)
		{
			save = Rnumber[j]*3+Rnumber[j+1];
			if(save>9)
			{
				save = Rnumber[j]*3+Rnumber[j+1];
				Rnumber[j]=save/10;
				Rnumber[j+1]=save%10;
				j--;
			}
			else
			{
				Rnumber[j+1]=save;
			}
		}
		
		if(save%7==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}

	}

}
int eight(char number[110], int k)
{

	if(k<3)
	{	
		if(k==2)
		{
			if((number[0]*10+number[1])%8==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}	
		}
		else if(k==1)
		{
			if((number[0]%8)==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}				
		}
	}
	else
	{
		if((number[k-1]+number[k-2]*10+number[k-3]*100)%8==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

}
int nine(char number[110], int k)
{
	int j;
	int plus=0;
	

	for(j=0;j<k;j++)
	{
		plus+=number[j];
	}
	if(plus%9==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
int ten(char number[110], int k)
{


	if(number[k-1]==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int eleven(char number[110], int k)
{
		int j;
	int plus1=0;//Â¦¼ö
	int plus2=0;//È¦¼ö


	for(j=0;j<k;j++)
	{
		if(j%2==0)
		{
			plus2+=number[j];
		}
		else
		{
			plus1+=number[j];
		}
	}
	if((plus2-plus1)%11==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

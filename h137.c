						
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int find(char cell[110][110],int a, int b);//������ ���ڰ� � �ֳ�
int open(char cell[110][110],int a, int b);//�ֺ��� ��� �ǳ�













void main()

{
	/////////////////////////////////////////////////���Ժ�//////////////////////////////////////////////////
	FILE*file;
	int cases;
	int i,j,k,l,m,n,x,y;
	int Ng,Ns;//Ng=������ ĭ�� Ns= ������ ĭ��
	char cell[110][110];
	char Ccell[110][110];
	int mine =0;// ������ ���ڰ� ��� �ֳ�
	int teria =0;//���Ŀ� ��Ƴ��� ���׸��Ƽ�
	char number = '0';

	file=fopen ("input.txt","r");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////


	fscanf(file,"%d",&cases);

	for(x=0;x<cases;x++)
	{
		fscanf(file,"%d %d",&Ng,&Ns);
		////////////////////////////////////////////////cell �ȿ�input�� �Է�//////////////////////////////////////////////



		for(i=0;i<Ns;i++)/////(1,1)����(Ns+1,Ng+1���� �Է�)
		{
			fscanf(file,"%s",&cell[i+1][+1]);
		}
		///////////////////////////�������� + �� ä��///////////////////////

		for(i=0;i<Ns+2;i++)
		{
			cell[i][0]='+';

			cell[Ns+1][i]='+';

		}
		for(i=0;i<Ng+2;i++)
		{
			cell[0][i]='+';
			cell[i][Ng+1]='+';
		}

		////////////////////////////////////////////////////////////////////

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		for(y=0;y<2;y++)
		{
			for(j=1;j<Ns+1;j++)
			{
				for(k=1;k<Ng+1;k++)
				{
					if((cell[j][k]=='?')||((cell[j][k]>='0')&&(cell[j][k]<'9')))
					{
						cell[j][k]=find(cell,j,k);
						for(l=j;l<Ns+1;l++)
						{
							for(m=k;m<Ng+1;m++)
							{
								if((open(cell,l,m)=='0'))
								{
									cell[l][m]= find(cell,l,m);
									cell[l+1][m]= find(cell,l+1,m);
									cell[l+1][m+1]= find(cell,l+1,m+1);
									cell[l+1][m-1]= find(cell,l+1,m-1);
									cell[l-1][m+1]= find(cell,l-1,m+1);
									cell[l-1][m-1]= find(cell,l-1,m-1);
									cell[l-1][m]= find(cell,l-1,m);
									cell[l][m-1]= find(cell,l,m-1);
									cell[l][m+1]= find(cell,l,m+1);

								}
								else
								{
									l=Ns;
									break;
								}

							}
						}


					}


				}
			}
			for(k=Ng+2;k>0;k--)
			{
				for(j=Ns+2;j>0;j--)
				{
					if((cell[j][k]=='?')||((cell[j][k]>='0')&&(cell[j][k]<'10')))
					{
						cell[j][k]=find(cell,j,k);
						for(l=j;l<Ns+1;l++)
						{
							for(m=k;m<Ng+1;m++)
							{
								if(open(cell,l,m)=='0')
								{
									cell[l][m]= find(cell,l,m);
									cell[l+1][m]= find(cell,l+1,m);
									cell[l+1][m+1]= find(cell,l+1,m+1);
									cell[l+1][m-1]= find(cell,l+1,m-1);
									cell[l-1][m+1]= find(cell,l-1,m+1);
									cell[l-1][m-1]= find(cell,l-1,m-1);
									cell[l-1][m]= find(cell,l-1,m);
									cell[l][m-1]= find(cell,l,m-1);
									cell[l][m+1]= find(cell,l,m+1);

								}
								else
								{
									l=Ns;
									break;
								}

							}
						}				
					}
				}
			}
			for(k=1;k<Ng+1;k++)
			{
				for(j=1;j<Ns+1;j++)
				{
					if((cell[j][k]=='?')||((cell[j][k]>='0')&&(cell[j][k]<'9')))
					{
						cell[j][k]=find(cell,j,k);
						for(l=j;l<Ns+1;l++)
						{
							for(m=k;m<Ng+1;m++)
							{
								if((open(cell,l,m)=='0'))
								{
									cell[l][m]= find(cell,l,m);
									cell[l+1][m]= find(cell,l+1,m);
									cell[l+1][m+1]= find(cell,l+1,m+1);
									cell[l+1][m-1]= find(cell,l+1,m-1);
									cell[l-1][m+1]= find(cell,l-1,m+1);
									cell[l-1][m-1]= find(cell,l-1,m-1);
									cell[l-1][m]= find(cell,l-1,m);
									cell[l][m-1]= find(cell,l,m-1);
									cell[l][m+1]= find(cell,l,m+1);

								}
								else
								{
									l=Ns;
									break;
								}

							}
						}


					}


				}
			}

			for(j=Ns+2;j>0;j--)
			{
				for(k=Ng+2;k>0;k--)
				{
					if((cell[j][k]=='?')||((cell[j][k]>='0')&&(cell[j][k]<'10')))
					{
						cell[j][k]=find(cell,j,k);
						for(l=j;l<Ns+1;l++)
						{
							for(m=k;m<Ng+1;m++)
							{
								if(open(cell,l,m)=='0')
								{
									cell[l][m]= find(cell,l,m);
									cell[l+1][m]= find(cell,l+1,m);
									cell[l+1][m+1]= find(cell,l+1,m+1);
									cell[l+1][m-1]= find(cell,l+1,m-1);
									cell[l-1][m+1]= find(cell,l-1,m+1);
									cell[l-1][m-1]= find(cell,l-1,m-1);
									cell[l-1][m]= find(cell,l-1,m);
									cell[l][m-1]= find(cell,l,m-1);
									cell[l][m+1]= find(cell,l,m+1);

								}
								else
								{
									l=Ns;
									break;
								}

							}
						}				
					}
				}
			}
		}
		for(j=1;j<Ns+1;j++)
		{
			for(k=1;k<Ng+1;k++)
			{
				if(cell[j][k]=='*')
				{	
					cell[j][k]='+';
				}
				printf("%c",cell[j][k]);
			}
			printf("\n");
		}
	}
}

int find(char cell[110][110],int a, int b)
{
	char number = '0';//number �� ������ ����

	if(cell[a+1][b+1]=='*')
	{
		number++;
	}
	if(cell[a][b+1]=='*')
	{
		number++;
	}
	if(cell[a-1][b+1]=='*')
	{
		number++;
	}
	if(cell[a+1][b]=='*')
	{
		number++;
	}
	if(cell[a-1][b]=='*')
	{
		number++;
	}
	if(cell[a+1][b-1]=='*')
	{
		number++;
	}
	if(cell[a][b-1]=='*')
	{
		number++;
	}
	if(cell[a-1][b-1]=='*')
	{
		number++;
	}
	return number;

}
int open(char cell[110][110],int a, int b)
{
	char number = '0';//number �� ������ ����

	if(cell[a+1][b+1]=='*')
	{
		number++;
	}
	else if(cell[a][b+1]=='*')
	{
		number++;
	}
	else if(cell[a-1][b+1]=='*')
	{
		number++;
	}
	else if(cell[a+1][b]=='*')
	{
		number++;
	}
	else if(cell[a-1][b]=='*')
	{
		number++;
	}
	else if(cell[a+1][b-1]=='*')
	{
		number++;
	}
	else if(cell[a][b-1]=='*')
	{
		number++;
	}
	else if(cell[a-1][b-1]=='*')
	{
		number++;
	}
	return number;

}


















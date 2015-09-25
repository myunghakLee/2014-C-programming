						
#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE * in_file;
	int cases;
	int i,j,k,l,m,n;
	int Ng,Ns;//Ng=가로의 칸수 Ns= 세로의 칸수
	char cell[102][102];
	char Ccell[102][102];
	int time;//time은 세대가 얼마나 지났는지
	int alive =0;// 조건검사에서 이웃이 얼마나 살아남았나
	int teria =0;//최후에 살아남은 박테리아수
	in_file=fopen ("input.txt","r");

	fscanf(in_file,"%d",&cases);

	for(i=0;i<cases;i++)
	{	
		fscanf(in_file,"%d %d %d",&Ns,&Ng,&time);
		for(j=0;j<Ns+2;j++)///////////////////////////cell 안에input값 입력////////////////
		{
			for(k=0;k<Ng+2;k++)
			{
				if((j==0)||(k==0)||(j==Ns+1)||(k==Ng+1))
				{
					cell[j][k]='X';
				}
				/////////////////////////////////////////////////
				else
				{
					fscanf(in_file,"%c",&cell[j][k]);
					if((cell[j][k]==32)||(cell[j][k]==10))
					{
						for(;;)
						{
							fscanf(in_file,"%c",&cell[j][k]);
							if((cell[j][k]!=32)&&(cell[j][k]!=10))
							{
								break;
							}
						}
					}
				}
			}
		}
		///////////////////////////////////////////////////////////////////////////////
		for(m=1;m<Ns+1;m++)
		{
			for(n=1;n<Ng+1;n++)
			{
				Ccell[m][n]=cell[m][n];
			}
		}

		
		for(l=0;l<time;l++)
		{
			////////////////////////////살아있는 이웃 수 판단/////////////
			for(j=1;j<Ns+1;j++)
			{
				for(k=1;k<Ng+1;k++)
				{
					alive=0;
					for(m=-1;m<2;m++)
					{
						for(n=-1;n<2;n++)
						{
							if((n==0)&&(m==0))
							{}
							else
							{
								if(cell[j+m][k+n]==79)
								{
									alive=alive+1;
								}
							}
						}
					}
					/////////////////////////////////////////////////
					if((alive<2)&&(cell[j][k]==79))
					{
						Ccell[j][k]=Ccell[j][k]+9;
					}
					else if((cell[j][k]==79)&&(alive>1)&&(alive<4))
					{}
					else if((cell[j][k]==88)&&(alive==3))
					{
						Ccell[j][k]=Ccell[j][k]-9;
					}
					else if((cell[j][k]==79)&&(alive>3))
					{
						Ccell[j][k]=Ccell[j][k]+9;
					}


				}

			}
			for(m=1;m<Ns+1;m++)
			{
				for(n=1;n<Ng+1;n++)
				{
					cell[m][n]=Ccell[m][n];
				}
			}
		}
		teria=0;
		for(m=1;m<Ns+1;m++)
		{
			for(n=1;n<Ng+1;n++)
			{
				if(cell[m][n]==79)
				{
					teria=teria+1;
				}
			}
		}

		printf("%d\n",teria);
		for(m=1;m<Ns+1;m++)
		{
			for(n=1;n<Ng+1;n++)
			{
				printf("%c",cell[m][n]);
			}
			printf("\n");
		}


	}



}

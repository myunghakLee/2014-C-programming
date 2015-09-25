							
#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *file;
	int i,j,k,l,m,n;
	int cases;
	int time;
	int g;
	int s;
	int othello[9][9];
	int check;
	int pan;
	int change;
	int a,b;
	int c, d, e, f;
	int o,x;
	
	
	file= fopen("input.txt","r");
	
	fscanf(file,"%d",&cases);
	
	
	for(i=0;i<cases;i++)
	{ 
		fscanf(file,"%d",&time);
		
		for(j=1;j<9;j++)
		{
			for(k=1;k<9;k++)
			{
				othello[j][k] = 43;
			}
		}
	
		othello[4][4]=79;
		othello[5][5]=79;
		othello[4][5]=88;
		othello[5][4]=88;

		for(j=0;j<time;j++)
		{  


			fscanf(file,"%d",&s);
			fscanf(file,"%d",&g);

			if(j%2==0)
			{
				othello[s][g]=88;
			}
			else
			{
				othello[s][g]=79;
			}




			for(k=s-1;k>0;k--)
			{
				if(othello[k][g]==43)
				{
					break;
				}
				else if(othello[k][g]==othello[s][g])
				{
					for(l=k;l<s;l++)
					{
						othello[l][g]=othello[s][g];
					}
					break;
				}
			}
			for(k=s+1;k<9;k++)
			{
				if(othello[k][g]==43)
				{
					break;
				}
				else if(othello[k][g]==othello[s][g])
				{
					for(l=s+1;l<k;l++)
					{
						othello[l][g]=othello[s][g];
					}
					break;
				}
			}

			for(k=g-1;k>0;k--)
			{
				if(othello[s][k]==43)
				{
					break;
				}
				else if(othello[s][k]==othello[s][g])
				{
					for(l=k;l<g;l++)
					{
						othello[s][l]=othello[s][g];
					}
					break;
				}
			}
			for(k=g+1;k<9;k++)
			{
				if(othello[s][k]==43)
				{
					break;
				}
				else if(othello[s][k]==othello[s][g])
				{
					for(l=g+1;l<k;l++)
					{
						othello[s][l]=othello[s][g];
					}
					break;
				}
			}
	
			if(s<g)
			{
				c=s;
				e=9-g;
			}
			else
			{
				c=g;
				e=9-s;
			}
			

			if(9-g<s)
			{
				d=9-g;
			}
			else
			{
				d=s;
			}
			if(g<9-s)
			{
				f=g;
			}
			else
			{
				f=9-s;
			}

			for(k=1;k<d;k++)
			{
				if((s-k<1)||(s-k>8)||(g+k<1)||(g+k>8))
				{
					break;
				}


				if(othello[s-k][g+k]==43)
				{
					break;
				}
				else if(othello[s-k][g+k]==othello[s][g])
				{
					for(l=1;l<k;l++)
					{
						othello[s-l][g+l]=othello[s][g];
					}
					break;
				}


			}
			for(k=1;k<e;k++)
			{
				if((s+k<1)||(s+k>8)||(g+k<1)||(g+k>8))
				{
					break;
				}

				if(othello[s+k][g+k]==43)
				{
					break;
				}
				else if(othello[s+k][g+k]==othello[s][g])
				{
					for(l=1;l<k;l++)
					{
						othello[s+l][g+l]=othello[s][g];
					}
					break;
				}
			}

			for(k=1;k<f;k++)
			{
				if((s+k<1)||(s+k>8)||(g-k<1)||(g-k>8))
				{
					break;
				}

				if(othello[s+k][g-k]==43)
				{
					break;
				}
				else if(othello[s+k][g-k]==othello[s][g])
				{
					for(l=1;l<k;l++)
					{
						othello[s+l][g-l]=othello[s][g];
					}
					break;
				}

			}
		
			for(k=1;k<c;k++)
			{
				if((s-k<1)||(s-k>8)||(g-k<1)||(g-k>8))
				{
					break;
				}

				if(othello[s-k][g-k]==43)
				{
					break;
				}
				else if(othello[s-k][g-k]==othello[s][g])
				{
					for(l=1;l<k;l++)
					{
						othello[s-l][g-l]=othello[s][g];
					}
					break;
				}

			}
		}
	
		o=0;
		x=0;


		for(k=1;k<9;k++)
		{
			for(l=1;l<9;l++)
			{
				if(othello[k][l]==79)
				{
					o=o+1;
				}
				else if(othello[k][l]==88)
				{
					x=x+1;
				}
			}
		}




		printf("%d %d\n",x,o);
		for(k=1;k<9;k++)
		{
			for(l=1;l<9;l++)
			{
				printf("%c",othello[k][l]);
			}
			printf("\n");
		}
	

	}
}

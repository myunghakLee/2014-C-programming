					
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()

{
	/////////////////////////////////////////////////���Ժ�//////////////////////////////////////////////////
	FILE*file;
	int cases;
	int i,j,k,l,m,n;
	char word[2010][60];//[�ܾ��� ��][���ڼ�]
	int width;
	int len;//���ڿ��� ����
	int print;//��� ����Ʈ �ؾ��ϴ��� �˾ƺ������Ͽ� ��������
	int Nword;//���ٿ� �ܾ� ������ ���� ���Ͽ�
	int blank;//��ĭ�� ����
	int namuge;
	int RNword=0;
	int pan;
	int len2;//������ ������ �ܾ��� ����



	file=fopen("input.txt","r");

	fscanf(file,"%d",&cases);

	////////////////////////////////////////////////////////////////////////////////////////////////////////



	for(i=0;i<cases;i++)
	{
		len=0;
		print=0;

		fscanf(file,"%d",&width);
		////////////////////////////////////�Է���Ʈ////////////////////////////////////////////////////////
		for(j=0;j<2010;j++)
		{
			fscanf(file,"%s",&word[j]);
			if((word[j][0]=='@')&&(word[j][1]=='@')&&(word[j][2]=='@')&&(word[j][3]=='@')&&(word[j][4]=='@')&&(word[j][5]=='@')&&(strlen(word[j])==6))
			{
				break;
			}
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////


		////////////////////////////////////////////////��� ����////////////////////////////////////////////////////////
		RNword=0;
		for(k=0;k<j;k++)
		{
			len+=strlen(word[k])+1;
			RNword++;
			if(len-1>width)// ���� ĭ ���� �ʰ��Ҷ�(len-1�� �ܾ���� ������ ��)
			{
				len-=2;
				for(m=0;m<(width-len+strlen(word[k]))/2;m++)
				{
					printf("_");
				}
				for(l=print;l<k;l++)
				{
					if(l==k-1)//�� �������϶��� _ �� ������ �ȵȴ�
					{
						printf("%s",word[l]);
					}
					else
					{
						printf("%s_",word[l]);
					}
				}
				for(m=0;m<(width-len+strlen(word[k]))/2;m++)
				{
					printf("_");
				}
				if((width-len+strlen(word[k]))%2==1)
				{
					printf("_");
				}
				printf("\n");
				print=l;
				len=0;//len�ʱ�ȭ
				k--;
				RNword=0;
			}

			else if(k==j-1)//�� ������ ��
			{

				if(RNword==1)
				{
					for(m=0;m<(width-len+1)/2;m++)
					{
						printf("_");
					}
					printf("%s",word[k]);
					for(m=0;m<(width-len+1)/2;m++)
					{
						printf("_");
					}
					if((width-len+1)%2==1)
					{
						printf("_");
					}
				}
				else
				{
					for(m=0;m<(width-len+1)/2;m++)
					{
						printf("_");
					}
					for(l=print;l<k+1;l++)
					{
						if((l==k)&&(print!=k))
						{
							printf("%s",word[l]);
						}
						else 
						{
							printf("%s_",word[l]);
						}
					}
					for(m=0;m<(width-len+1)/2;m++)
					{
						printf("_");
					} 
					if((width-len+1)%2==1)
					{
						printf("_");
					}
				}
				printf("\n");
				RNword=0;
			}
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		l=0;// l �ʱ�ȭ �������Ŀ��� �ٽ� ���� ���Ͽ�
		print=0;
		len=0;
		len2=0;
		Nword=0;
		pan=0;
		////////////////////////////////////////////////���� ����/////////////////////////////////////////////////////////////
		for(k=0;k<j;k++)
		{
			len=len+strlen(word[k])+1;//���ٿ� �(k��)�� �ܾ ������ ã�ƺ�������
			Nword++;//���ٿ� �� �ܾ��� ����
			if(len-1>width)
			{
				if(Nword==2)//�ܾ �ϳ��϶�
				{
					k--;
					printf("%s",word[k]);
					pan=k+1;
					len=0;
					Nword=0;
					len2=0;
					blank=0;
					namuge=0;

					for(n=0;n<(width-strlen(word[k]));n++)
					{
						printf("_");
					}
					printf("\n");
				}
				else
				{
					k--;
					len= len- strlen(word[k+1])-2;
					Nword--;
					len2=len-Nword+1;//�����ܾ�� ����
					blank=width-len2;//������ ����
					namuge=blank%(Nword-1);
					for(m=pan;m<pan+Nword;m++)
					{
						printf("%s",word[m]);//////////////////////////���
						for(n=0;n<blank/(Nword-1);n++)//////////////////////////_���
						{
							if(m!=pan+Nword-1)
							{
								printf("_");
							}
						}
						if((pan+Nword-m<=namuge+1)&&(pan+Nword-m!=1))
						{
							printf("_");
						}
					}
					printf("\n");
					pan=k+1;
					len=0;
					Nword=0;
					len2=0;
					blank=0;
					namuge=0;
				}
				//_���̿� ����
			}
			else if(k==j-1)//������ ��
			{

				for(m=pan;m<j;m++)
				{	
					if(m==j-1)
					{
						printf("%s",word[m]);
					}
					else
					{
						printf("%s_",word[m]);
					}

				}
			}

		}
		printf("\n");




		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	}


}

						

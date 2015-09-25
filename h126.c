					
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()

{
	/////////////////////////////////////////////////도입부//////////////////////////////////////////////////
	FILE*file;
	int cases;
	int i,j,k,l,m,n;
	char word[2010][60];//[단어의 수][글자수]
	int width;
	int len;//문자열의 길이
	int print;//몇개나 프린트 해야하는지 알아보기위하여 지정해줌
	int Nword;//한줄에 단어가몇개 들어가는지 세기 위하여
	int blank;//빈칸의 넓이
	int namuge;
	int RNword=0;
	int pan;
	int len2;//공백을 제외한 단어의 길이



	file=fopen("input.txt","r");

	fscanf(file,"%d",&cases);

	////////////////////////////////////////////////////////////////////////////////////////////////////////



	for(i=0;i<cases;i++)
	{
		len=0;
		print=0;

		fscanf(file,"%d",&width);
		////////////////////////////////////입력파트////////////////////////////////////////////////////////
		for(j=0;j<2010;j++)
		{
			fscanf(file,"%s",&word[j]);
			if((word[j][0]=='@')&&(word[j][1]=='@')&&(word[j][2]=='@')&&(word[j][3]=='@')&&(word[j][4]=='@')&&(word[j][5]=='@')&&(strlen(word[j])==6))
			{
				break;
			}
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////


		////////////////////////////////////////////////가운데 정렬////////////////////////////////////////////////////////
		RNword=0;
		for(k=0;k<j;k++)
		{
			len+=strlen(word[k])+1;
			RNword++;
			if(len-1>width)// 줄의 칸 수를 초과할때(len-1이 단어들의 갯수의 합)
			{
				len-=2;
				for(m=0;m<(width-len+strlen(word[k]))/2;m++)
				{
					printf("_");
				}
				for(l=print;l<k;l++)
				{
					if(l==k-1)//맨 마지막일때는 _ 가 붙으면 안된다
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
				len=0;//len초기화
				k--;
				RNword=0;
			}

			else if(k==j-1)//맨 마지막 줄
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

		l=0;// l 초기화 양쪽정렬에서 다시 쓰기 위하여
		print=0;
		len=0;
		len2=0;
		Nword=0;
		pan=0;
		////////////////////////////////////////////////양쪽 맞춤/////////////////////////////////////////////////////////////
		for(k=0;k<j;k++)
		{
			len=len+strlen(word[k])+1;//한줄에 몇개(k개)의 단어가 들어가는지 찾아보기위해
			Nword++;//한줄에 들어갈 단어의 갯수
			if(len-1>width)
			{
				if(Nword==2)//단어가 하나일때
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
					len2=len-Nword+1;//순수단어만의 길이
					blank=width-len2;//공백의 길이
					namuge=blank%(Nword-1);
					for(m=pan;m<pan+Nword;m++)
					{
						printf("%s",word[m]);//////////////////////////출력
						for(n=0;n<blank/(Nword-1);n++)//////////////////////////_출력
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
				//_사이에 적기
			}
			else if(k==j-1)//마지막 줄
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

						

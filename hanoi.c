#include<stdio.h>




void moveHanoi(char from, char temp, char to, int n)
{
	static int cnt = 0;
	if(n==1)
	{
		++cnt;
		printf("%5d : 말뚝 %c에서 말뚝 %c로 원반 %d을 이동\n",cnt,from,to,1);
	}
	else
	{
		moveHanoi(from,to,temp,n-1);
		++cnt;
		printf("%5d : 말뚝 %c에서 말뚝 %c로 원반 %d을 이동\n",cnt,from,to,n);

		//아래 그림￢의2
		moveHanoi(temp,from,to,n-1);//아래 그림의3
	}


}


void main()
{
	int n;
	char from,temp,to;
	from='A';
	temp='B';
	to='C';

	printf("옮길 원반의 갯수를 선택하시오 : ");
	scanf("%d",&n);

	moveHanoi(from, temp, to, n);



}

#include<stdio.h>




void moveHanoi(char from, char temp, char to, int n)
{
	static int cnt = 0;
	if(n==1)
	{
		++cnt;
		printf("%5d : ���� %c���� ���� %c�� ���� %d�� �̵�\n",cnt,from,to,1);
	}
	else
	{
		moveHanoi(from,to,temp,n-1);
		++cnt;
		printf("%5d : ���� %c���� ���� %c�� ���� %d�� �̵�\n",cnt,from,to,n);

		//�Ʒ� �׸�����2
		moveHanoi(temp,from,to,n-1);//�Ʒ� �׸���3
	}


}


void main()
{
	int n;
	char from,temp,to;
	from='A';
	temp='B';
	to='C';

	printf("�ű� ������ ������ �����Ͻÿ� : ");
	scanf("%d",&n);

	moveHanoi(from, temp, to, n);



}

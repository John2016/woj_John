//QQ军棋
//分析：求得a，b的最大公约数，看是否能整除n
#include<stdio.h>

int commen(int a,int b) //递归求最大公因数
{
	return b==0?a:commen(b,a%b);
}

int main()
{
	int a,b,n;
	while(scanf("%d%d%d",&a,&b,&n)==3)     //scanf的调用返回值为输入成功的个数
	{
		if(a==0&&b==0)
		{
			if(n==0) printf("Possible!\n");
			else printf("Impossible!\n");
		}
		else
		{
			if(n%commen(a,b)==0) printf("Possible!\n");
			else printf("Impossible!\n");
		}
	}
	return 0;
}
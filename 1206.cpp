//QQ����
//���������a��b�����Լ�������Ƿ�������n
#include<stdio.h>

int commen(int a,int b) //�ݹ����������
{
	return b==0?a:commen(b,a%b);
}

int main()
{
	int a,b,n;
	while(scanf("%d%d%d",&a,&b,&n)==3)     //scanf�ĵ��÷���ֵΪ����ɹ��ĸ���
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
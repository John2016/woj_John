#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j=0;            //a����������飬n�Ƕ�����������i��j��������
    while(scanf("%d",&n)==1)
    {
		int a[9][10000];

                                            for(i=1;i<9;i++)                         //��ʼ������
											{
                                            for(j=0;j<n;j++)
                                                            scanf("%d",&a[i][j]);
                                            }

											for(i=0;i<n;i++)              //����һ�и�ֵ
			                                       a[0][i]=a[1][i];


                                            
                            for(i=0;i<n;i++)
                            {
                                            for(j=1;j<9;j++)           //�ҳ�ÿһ�е���Сֵ
                                            {
                                                            if(a[j][i]<a[0][i])
                                                                               a[0][i]=a[j][i];
                                                            else
                                                                               continue;
                                                            }
                                            }
                            j=0;                //��ԭj��ֵ
                            for(i=0;i<n;i++)
                                            j+=a[0][i];
                                            
                            printf("%d\n",j);
    }

    system("PAUSE");
    return 0;
}                                  
                                            
                            

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j=0;            //a用来存放数组，n是动物种类数，i，j用来计数
    while(scanf("%d",&n)==1)
    {
		int a[9][10000];

                                            for(i=1;i<9;i++)                         //初始化数组
											{
                                            for(j=0;j<n;j++)
                                                            scanf("%d",&a[i][j]);
                                            }

											for(i=0;i<n;i++)              //给第一行赋值
			                                       a[0][i]=a[1][i];


                                            
                            for(i=0;i<n;i++)
                            {
                                            for(j=1;j<9;j++)           //找出每一列的最小值
                                            {
                                                            if(a[j][i]<a[0][i])
                                                                               a[0][i]=a[j][i];
                                                            else
                                                                               continue;
                                                            }
                                            }
                            j=0;                //还原j的值
                            for(i=0;i<n;i++)
                                            j+=a[0][i];
                                            
                            printf("%d\n",j);
    }

    system("PAUSE");
    return 0;
}                                  
                                            
                            

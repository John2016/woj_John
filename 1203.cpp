#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,tmp;
    while(scanf("%d",&n) == 1)
    {
                         
     int currentNum=0;
     int currentAxis=0;
     for(i=0;i<n;i++)
                        {
                                            scanf("%d",&tmp);
                                            if(currentNum==0)
                                            {
                                                             currentAxis=tmp;
                                                             currentNum=1;
                                                             }
                                            else
                                           {
                                                if(currentAxis==tmp)
                                                             currentNum++;
                                                else
                                                                                   currentNum--;
                                                }
                            }
printf("%d\n",currentAxis);
}
return 0;

}

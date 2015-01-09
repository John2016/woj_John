//first line is n(n¡Ü100)¡£following N lines contains X,Y, the vertexs show as counter-clockwise. -200¡Üx,y¡Ü200¡£
//print the total area.
#include<stdlib.h>
#include<stdio.h>

int Jueduizhi(int a);
int Juzhen(int a[],int b[]);

int main()
{
	int edge,i;
	int area=0;
	int location[100][2];

	scanf("%d",&edge);
	for(i=0;i<edge;i++)
		scanf("%d %d",&location[i][0],&location[i][1]);

	for(i=0;i<edge-1;i++)
		area=area+Juzhen(location[i],location[i+1]);
 

	area=area+Juzhen(location[edge-1],location[0]);

	area=area/2;

	area=Jueduizhi(area);
	
	printf("%d",area);

	system("PAUSE");

	return 0;
}

int Jueduizhi(int a)
{
	if(a<0)
		return (-a);
	else
		return a;
}

int Juzhen(int a[],int b[])
{
	return (a[0]*b[1]-a[1]*b[0]);
}




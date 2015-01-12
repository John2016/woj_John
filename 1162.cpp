/*
 * 1056:1000位整数加
 * JohnLi
 * 2014-3-27
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void long_add()
{
	char a[1001], b[1001];
	scanf("%s", a);
	scanf("%s", b);
	int len_1 = strlen(a);
	int len_2 = strlen(b);
	//printf("%s %d\n%s %d\n", a, len_1, b,len_2);
	if (len_1 > len_2){
		for (int i = 1; i<= len_2; i++){
			b[len_1 - i] = b[len_2 - i];
		}
		for (int i = 0; i<len_1 - len_2; i++){
			b[i] = '0';
		}
		len_2 = len_1;
	}
	else if (len_1<len_2){
		for (int i = 1; i <= len_1; i++){
			a[len_2 - i] = a[len_1 - i];
		}
		for (int i = 0; i<len_2 - len_1; i++){
			a[i] = '0';
		}
		len_1 = len_2;
	}
	//printf("%s %s", a, b);
	char *c = (char *)malloc(sizeof(char)*len_1 + 1);
	//int i;
	int signal=0;		//进位标志	
	for (int i = len_1-1; i >= 0;i--){
		//printf("in round\n");
		int tmp = (int)(a[i] - 48) + (int)(b[i] - 48);
		if (signal == 1)
			tmp++;
		//printf("%d\n", tmp);
		if (tmp < 10){
			c[i + 1] = (char)(tmp + 48);
			signal = 0;
			continue;
		}
		else{
			c[i + 1] = (char)(tmp % 10 + 48);
			signal = 1;
		}
	}

	if (signal == 1){
		c[0] = '1';
		printf("1");
	}
	for (int i = 1; i < len_1+1; i++){
		printf("%c", c[i]);
	}
	printf("\n");
	return ;
}
int main()
{
	int nCase;
	scanf("%d", &nCase);
	while (nCase-- > 0){
		long_add();
	}
	system("PAUSE");
	return 0;
}
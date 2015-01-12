/*
 * 1319
 * JohnLi
 * 2015-1-12
 * -1/0/1
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t_num;
	scanf("%d",&t_num);
	for(int ii = 0; ii < t_num; ii++){
		int num;
		scanf("%d",&num);
		char seq[64];
		int length = 0;
		do{
			if(num > 0){
				switch(num%3){
					case 0: seq[length++]='0'; num=num/3; 	 break;
		            case 1: seq[length++]='1'; num=(num-1)/3; break;
		            case 2: seq[length++]='-'; num=(num+1)/3; break;    
				}
			}
			else{
				switch(-num%3){
		            case 0: seq[length++]='0'; num=num/3; 	 break;
		            case 1: seq[length++]='-'; num=(num+1)/3; break;
		            case 2: seq[length++]='1'; num=(num-1)/3; break;
		        }
			}
		} while (num != 0);

		while(--length >= 0){
			printf("%c", seq[length]);
		}
		printf("\n");
	}
	return 0;
}
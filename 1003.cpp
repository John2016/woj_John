/*
 * 1003
 * JohnLi
 * 2014-6-12
 * Success
 * Wrong Answer
 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct person
{
	char name[16];
	int life;
	int level;
};

person people[13] = {
	"Adam", 930, 1,
	"Seth", 912, 2,
	"Enoth", 905, 3,
	"Kenan", 910, 4,
	"Mahalalel", 895, 5,
	"Jared", 962, 6,
	"Enoch", 365, 7,
	"Methuselah", 969, 8,
	"Lamech", 777, 9,
	"Noah", 0, 10,
	"Shem", 0, 11,
	"Ham", 0, 11,
	"Japheth", 0, 11
};

int main()
{
	char name_1[16],name_2[16];
	while (scanf("%s %s", name_1,name_2) == 2){
		//char name_2[16];
		//scanf("%s", name_2);
		int num_1 = -1, num_2 = -1;
		for (int i = 0; i < 13; i++){
			if (strcmp(name_1, people[i].name) == 0){
				num_1 = i;
				break;
			}
		}
		for (int i = 0; i < 13; i++){
			if (strcmp(name_2, people[i].name) == 0){
				num_2 = i;
				break;
			}
		}

		if (num_1 != -1 && num_2 != -1){
			if (people[num_1].level < people[num_2].level)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
			printf("No enough information\n");

		if (people[num_1].life != 0 && people[num_2].life != 0 && num_1 != -1 && num_2 != -1){
			if (people[num_1].life > people[num_2].life)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
			printf("No enough information\n");

	}
	system("PAUSE");
	return 0;
}
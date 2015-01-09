/*
* 1004
* JohnLi
* 2014-6-12
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	double length, width, height;
	char unit_input[3][16];
	char units[5][16] = { "meters", "centimeters", "inches", "cubits", "feet" };
	double ratio[] = { 1.0, 0.01, 45.72 / 18 / 100, 0.4572, 13.716 / 45 };

	while (scanf("%lf %s %lf %s %lf %s", &length, unit_input[0], &width, unit_input[1], &height, unit_input[2]) == 6){
		printf("%s %s %s\n", unit_input[0], unit_input[1], unit_input[2]);
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 5; j++){
				if (strcmp(unit_input[i], units[j]) == 0){
					switch (i)
					{
					case 0:		length *= ratio[j];		break;
					case 1:		width *= ratio[j];		break;
					case 2:		height *= ratio[j];		break;
					default:
						break;
					}
				}
			}
		}

		if (length - width < 0.00000001 && length - width > -0.00000001)
			printf("Spin\n\n");
		else if (length - width * 6 < 0.00000001 && length - width * 6 > -0.00000001)
			printf("Excellent\n\n");
		else
			printf("Neither\n\n");
	}

	system("PAUSE");
	return 0;
}
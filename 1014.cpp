/*
 * 1014
 * @JohnLi
 * 2015-1-11
 * the value of matrix
 * maybe the describe is complicated, but i didn't hae time to read it
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int matrix[9];
	while (scanf("%d", &matrix[0]) != EOF){
		for (int ii = 1; ii < 9; ii++){
			scanf("%d", &matrix[ii]);
		}
		
		int result = 0;
		result += matrix[0] * (matrix[4] * matrix[8] - matrix[5] * matrix[7]);
		//printf("%d\n", result);
		result -= matrix[1] * (matrix[3] * matrix[8] - matrix[5] * matrix[6]);
		//printf("%d\n", result);
		result += matrix[2] * (matrix[3] * matrix[7] - matrix[4] * matrix[6]);
		//printf("%d\n", result);
		float result_f = (float)abs(result);
		printf("%.2f\n", result_f);
	}
	return 0;
}
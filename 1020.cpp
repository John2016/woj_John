/*
 * 1020
 * @JohnLi
 * 2015-1-11
 * minus and sort
 * ！快速排序应用在包含指针的地方时，应该注意，这里用快排把数字都变了
 * !note the presentation, it's so strict
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void sort(int seq[], int end)
{
	for (int ii = 0; ii < end; ii++)
	{
		for (int jj = ii; jj < end; jj++)
		{
			if (seq[ii] > seq[jj])
			{
				int t = seq[ii];
				seq[ii] = seq[jj];
				seq[jj] = t;
			}
		}
	}
}

int main()
{
	int testcase;
	scanf("%d", &testcase);
	for (int ii = 0; ii < testcase; ii++){
		int num;
		scanf("%d", &num);
		int * sequence = (int *)malloc(sizeof(int) * num);
		for (int jj = 0; jj < num; jj++){
			scanf("%d", &sequence[jj]);
		}
		int * seq_diff = (int *)malloc((sizeof(int)* num));
		seq_diff[0] = sequence[0];
		for (int jj = 1; jj < num; jj++)
			seq_diff[jj] = sequence[jj] - sequence[jj - 1];

		//sort
		//QuickSort(seq_diff, 0, num);
		sort(seq_diff, num);

		printf("Case %d:\n", ii + 1);
		for (int jj = 0; jj < num; jj++){
			printf("%d", seq_diff[jj]);
			if (jj != num - 1)
				printf(" ");
		}
		if (ii != testcase - 1)
			printf("\n\n");
		else
			printf("\n");
	}
	system("PAUSE");
	return 0;
}
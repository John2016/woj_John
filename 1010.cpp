/*
 * WOJ 1010
 * JohnLee
 */
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	while(true){
		cin>>num;
		if (num == 0)
			break;
		//int * numbers = (int *)malloc(sizeof(int)*num);
		//there is no need to sort, just get the max number
		int max, tmp;
		for (int i = 0; i < num; ++i)
		{	
			if (i == 0)
				cin >> max;
			else{
				cin >> tmp;
				if (tmp > max)
					max = tmp;
			}
		}
		//cal
		while (max < 0)
			max += 2006;
		for (int i = 0; i < num - 1; i++){
			max *= 2;
			max %= 2006;
		}
		cout << (max % 2006) << endl;
	}
	return 0;
}
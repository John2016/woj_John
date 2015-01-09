/*
 * 1314
 * easy
 * @JohnLee
 * 2015-1-1
 */
#include <iostream>

using namespace std;

int find_long(int iii, int jjj)
{
	int long_seq = 0;
	for (int i = iii; i <= jjj; i++){
		//cout << i << "\t" << long_seq;
		int seq = 1;
		int current = i;
		while (current != 1){
			if (current % 2 == 1)
				current = (current * 3) + 1;
			else
				current /= 2;
			seq++;
		}
		if (seq > long_seq)
			long_seq = seq;
	}
	return long_seq;
}

int main()
{
	int iii,jjj;
	while(1){
		cin >> iii;
		cin >> jjj;
		if(iii == 0 && jjj == 0)
			break;
		cout<<find_long(iii,jjj)<<endl;
	}
	return 0;
} 


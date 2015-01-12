/*
 * 1315 高级机密
 * @JohnLi
 * 2015-1-11
 * RSA,note the very big number
 * time limit exceeded
 * the c++ is slower than c
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long a,b,c;
	while(cin>>a>>b>>c){
		if(a+b+c == 0)
			break;
		long result = 1;
		//when b is large, the time will be extremely long
		//for(int ii = 0; ii < b; ii++){
			//result = (result * (a % c)) % c;
		//}
		while (b >= 1){
			if (b % 2 == 1){
				//cout << result << endl;
				result = (result * a) % c;
			}
			a = (a % c) * (a % c) % c;
			b = b / 2;
		}
		cout<<result<<endl;
	}
	return 0;
}
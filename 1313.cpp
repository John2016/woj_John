/*
 * 1313
 * @JohnLi
 * 2015-1-11
 * k尾数相等,a little cool
 * i didn't understand the description correctly before, it's easy
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int nature;
	while(1){
		cin>>nature;
		if(nature == 0)
			break;

		int products[1000];
		for(int ii=0;ii<1000;ii++)
			products[ii]=-1;

		//get the minimal exponent
		int pro_1 = 1;
		int jj;
		//the exit-jj is 
		for(jj = 1; ;jj++){
			pro_1 *= nature;
			if (pro_1 >= 1000)
				break;
		}
		pro_1 %= 1000;
		products[pro_1]=jj;
		//cout << "jj " << jj << endl;

		//looking for the ii & new-jj
		for(int ii = jj+1;;ii++)
		{
			pro_1 = pro_1 * ( nature % 1000) % 1000;
			if(products[pro_1] != -1){
				//cout << "ii "<<
				cout << products[pro_1] + ii << endl;
				//printf("%d\n",products[pro_1] + ii+1);
			 	break;
			}
			else{
				products[pro_1] = ii;
			}
		}
	}
	return 0;
}
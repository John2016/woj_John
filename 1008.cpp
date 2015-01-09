/*
 * 1008
 * Feeding animals II
 * the largest flow
 * 2014-12-29
 */
#include <iostream>

using namespace std;

int main()
{
	int n_peop,n_ani;
	while(cin>>n_peop>>n_ani){
		int graph[n_peop][n_ani];
		int sum_per[n_peop];
		float graph_rate[n_peop][n_ani];
		//initiate
		for (int ii = 0; ii < n_peop; ++ii)
		{
			int sum_tmp = 0;
			for (int jj = 0; jj < n_ani; ++jj)
			{
				cin>>graph[ii][jj];
				sum_tmp += graph[ii][jj];
			}
			sum_per[ii] = sum_tmp;
		}

		int max_per;
		cin>>max_per;
		int rest_per[n_peop];
		for (int ii = 0; ii < n_peop; ++ii)
			rest_per[ii] = max_per;

		//get the graph of rate
		for (int ii = 0; ii < n_peop; ++ii)
			for (int jj = 0; jj < count; ++jj)
				graph_rate[ii][jj] = (float)graph[ii][jj]/sum_per[ii];
		
		int sig = 1;
		for(int kk = 0; kk < n_ani && sig;kk++){
			float max_current = 0;
			int max_peop = 0;
			//find the max rate-people for the current animal
			for (int i = 0; i < n_peop; ++i)
			{
				if(graph_rate[i][kk] > max_current && rest_per[i] > 0){
					max_current = graph_rate[i][kk];
					max_peop = i;
				}
			}
			//not found
			if (max_current == 0)
				break;
			rest_per[max_current]--;
		}	 
		if(kk == n_ani)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}

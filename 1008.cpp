/*
 * 1008
 * Feeding animals II
 * the largest flow
 * 2014-12-29
 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int n_peop,n_ani;
	while(cin>>n_peop>>n_ani){
		int** graph = (int **)malloc(sizeof(int *)*n_peop);
		for (int ii = 0; ii < n_peop; ii++){
			graph[ii] = (int *)malloc(sizeof(int)*n_ani);
		}
		//int graph[n_peop][n_ani];
		int * sum_per = (int *)malloc(sizeof(int)*n_peop);
		//int sum_per[n_peop];
		float** graph_rate = (float **)malloc(sizeof(float *)*n_peop);
		for (int ii = 0; ii < n_peop; ii++){
			graph_rate[ii] = (float *)malloc(sizeof(float)*n_ani);
		}
		//float graph_rate[n_peop][n_ani];
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
		
		//int rest_per[n_peop];
		int * rest_per = (int *)malloc(sizeof(int)*n_peop);
		for (int ii = 0; ii < n_peop; ++ii)
			rest_per[ii] = max_per;

		//get the graph of rate
		for (int ii = 0; ii < n_peop; ++ii)
			for (int jj = 0; jj < n_ani; ++jj)
				graph_rate[ii][jj] = (float)graph[ii][jj]/sum_per[ii];
		
		int sig = 1;
		int kk = 0;
		float max_current = 0;
		int max_peop = 0;
		for(kk = 0; kk < n_ani && sig;kk++){
			max_current = max_peop = 0;
			//find the max rate-people for the current animal
			for (int i = 0; i < n_peop; i++)
			{
				//cout << graph[i][kk];
				if(graph_rate[i][kk] > max_current && rest_per[i] > 0){
					max_current = graph_rate[i][kk];
					max_peop = i;
				}
			}
			//not found
			//cout << "max_curr_pop\t" << max_current << " " << max_peop << endl;
			if (max_current == 0)
				break;
			rest_per[max_peop]--;
		}	 
		if(kk == n_ani)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}

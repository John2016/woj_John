/*
 * LeeYuan
 * 2014-12-18
 */
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int nvex, nedge;

int bfs(vector<vector<int> > graph, int from, int to)
{
	if (from == to)
		return 0;
	//deque<int> queue(nvex);
	vector<int> queue(nvex);
	int head = 0, rear = 0;
	vector<int> passed(nvex, -2);
	rear = (rear + 1) % nvex;
	passed[from] = -1;
	//queue.push_back(from);
	queue[rear] = from;
	int sig_succ = 0;
	while (head != rear && sig_succ == 0){
		head = (head + 1) % nvex;
		//note the order of the two movemonts below
		int point = queue[head];

		int psize = graph[point].size();
		for (int j = 0; j < psize; j++){
			int current = graph[point][j];
			//new point, add it to the sequence
			if (passed[current] == -2){
				passed[current] = point;
				//if is the destination
				if (current == to){
					//then calculate the distance
					int distance = 0;
					int pvex = to;
					while (pvex != from){
						distance++;
						pvex = passed[pvex];
					}
					return distance - 1;
					//cout << (distance - 1) << endl;
				}
				rear = (rear + 1) % nvex;
				queue[rear] = current;
			}
		}
	}
	return -1;
}

int main()
{
	cin>>nvex>>nedge;	
	vector< vector <int> > graph(nvex);
	for (int i = 0; i < nedge; i++)
	{
		int front, tail;
		cin>>front>>tail;

		graph[front].push_back(tail);
		graph[tail].push_back(front);
	}

	int num;
	cin>>num;
	for (int i = 0; i < num; i++)
	{
		int from, to;
		cin>>from>>to;
		cout<<bfs(graph,from,to)<<endl;
	}
	return 0;
}





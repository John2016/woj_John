/*
 * 1013 Bracelet
 * @JohnLi
 * 2015-1-11
 * find the minimum value of the clockwise-order string
 */
#include <iostream>
#include <string> 
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

string First(string a){
  string t;
  set<string> s;
  for(unsigned int i = 0; i < a.size(); ++i){
    t = "";
    t.append(a.begin() + i, a.end());
    t.append(a.begin(), a.begin() + i);
    s.insert(t);
  }
  return *(s.begin());
}

string first(string a){
  string t;
  vector<string> s;
  for(int i = 0; i < a.size(); i++){
    t = "";
    t.append(a.begin() + i, a.end());
    t.append(a.begin(), a.begin() + i);
    s.push_back(t);
  }
  sort(s.begin(), s.end());
  return *(s.begin());
}

int main()
{
	char bracelet[101];
	while(cin>>bracelet){
		string tmp = first(bracelet);
		//the <string> rather than <string.h> can make the "<<" run correctly
		cout<<tmp<<endl;
	} 
}
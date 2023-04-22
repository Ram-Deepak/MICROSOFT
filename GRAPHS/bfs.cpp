#include<bits/stdc++.h>

using namespace std;

#define tuplelist vector<pair<int, int>>
#define insert push_back
#define edge make_pair
#define E pair<int,int>
#define map<int, set<int>> AdjList

class Graph{
	public:
		AdjList *alist;
		Graph(){
			alist = new AdjList;
		}
		void initializeAList(edges){
			
};

int main(){
	tuplelist edges;
	int v, e;
	cout << "Enter the number of vertices:"<<endl;
	cin >> v;
	cout << "Enter the number of edges:"<<endl;
	cin >> e;
	cout << "Enter the edges"<<endl;
	for(int i=0; i<e; i++){
		int from, to;
		cin >> from >> to;
		edges.insert(edge(from, to));
	}
	cout << "Edges in the graph are"<<endl;
	for(E e : edges)
		cout << e.first << " " << e.second << endl;
	return 0;
}

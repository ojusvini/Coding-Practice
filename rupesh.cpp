#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <climits>
using namespace std;
int main()
{	int processors;
	string str;
	cin >> str >> processors;
	int tasks;
	cin >> str >> tasks;
	int exec[tasks][processors];
	double avg[tasks];
	int pro[tasks];
	int est[tasks];
	int eft[tasks];
	int graph[tasks][tasks];
	double rank[tasks];
	int next[tasks];
for (int i = 0; i < tasks; i++) {
		//next[i] = 0;
		for (int j = 0; j < tasks; j++) {
			graph[i][j] = 0;
		}
	}
	// Input task-processor exec
	for (int i = 0; i < tasks; i++) {
		cin >> str;
		avg[i] = 0;
		for (int j = 0; j < processors; j++) {
			scanf("%d", &exec[i][j]);
			avg[i] += exec[i][j];
		}
		avg[i] /= processors;
	}
	cout<<"-----------avg---------\n";
	for(int i = 0;i<tasks;i++){
	cout<<"avg of node "<<i <<"is : "<<avg[i]<<"\n";
	}
	// input task precedence list
	while (true) {
		cin >> str;
		int a;
		scanf("%d", &a);
		if (a == -1)
			break;
		++next[a];
		int b, c;
		scanf("%d%d", &b, &c);
		graph[a][b] = c;
	}
	for(int i=0;i<tasks;i++){
				for(int j=0;j<processors;j++){
					printf("%d\t",exec[i][j]);
					//cout<<exec[i][j]<<"\t";
				}
				cout<<"\n";
	}
}

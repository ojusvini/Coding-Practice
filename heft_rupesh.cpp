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
{
	int processors;
	string str;
	cin >> str >> processors;
	int tasks;
	cin >> str >> tasks;
		int matrix[tasks][processors];
	double mean[tasks];
	int pro[tasks];
	int est[tasks];
	int eft[tasks];
	int comp[tasks][tasks];
	double rank[tasks];
	int next[tasks];
	// Initialize arrays to 0
	for (int i = 0; i < tasks; i++) {
		next[i] = 0;
		for (int j = 0; j < tasks; j++) {
			comp[i][j] = 0;
		}
	}
	// Input task-processor matrix
	for (int i = 0; i < tasks; i++) {
		cin >> str;
		mean[i] = 0;
		for (int j = 0; j < processors; j++) {
			scanf("%d", &matrix[i][j]);
			mean[i] += matrix[i][j];
		}
		mean[i] /= processors;
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
		comp[a][b] = c;
	}
/*	int left = tasks;
	// assign ranks
	while (left) {
		for (int i = 0; i < tasks; i++) {
			if (next[i] == 0) {
				next[i] = -1;
				--left;
				for (int j = 0; j < tasks; j++)
					if (comp[j][i])
						--next[j];
				// given implementation
				rank[i] = 0;
				for (int j = 0; j < tasks; j++)
					if (comp[i][j] && comp[i][j] + rank[j] - rank[i] > 0.001)
						rank[i] = comp[i][j] + rank[j];
				rank[i] += mean[i];
	//				cout<<rank[i]<<" : rank of "<<i<<"\n";
			}
		}
	}
	cout<<"----------------RANKS ----------------------------";
	for (int i = 0; i < tasks; i++) {
		cout<<rank[i]<<" : rank of "<<i<<"\n";
	}
	
	vector<pair<int, int> > avail[processors];
	cout<<"----------------AVAILABLE----------------------------";
	for (int i = 0; i < processors; i++)
		avail[i].push_back({ 0, INT_MAX });
		
	/*for(int i = 0;i<processors;i++){
		for(int j = 0;j<50;j++){
			cout<<avail[i][j].first<<"\t"<<avail[i][j].second<<"\n";
		}
	}*/
	/*	int idx[processors];
	for (int i = 0; i < tasks; i++) {
		// choose next task
		int pos = 0;
		for (int j = 1; j < tasks; j++)
			if (rank[j] - rank[pos] > 0.001)
				pos = j;
		rank[pos] = -1;
		cout<<"	Task Scheduled is : "<<pos<<"\n";
		cout<<"For process "<< pos <<"Starting time : \n";
		int arr[processors];
		int j;
		for (j = 0; j < processors; j++) {
			// given implementation
			arr[j] = 0;
			for (int k = 0; k < tasks; k++) {
				if (comp[k][pos]) {
					if (pro[k] == j) {
						if (eft[k] > arr[j])
							arr[j] = eft[k];
					}
					else {
						if (eft[k] + comp[k][pos] > arr[j])
							arr[j] = eft[k] + comp[k][pos];
					}
				}
			}
			cout<<"For Processor : "<<j<<"is : "<<arr[j]<<endl;
		}
	}
			cout<<"For : processor = "<<j;
			for (int k = 0; ; k++) {
				if (avail[j][k].second >= max(avail[j][k].first, arr[j]) + matrix[pos][j]) {
					idx[j] = k;
					arr[j] = max(avail[j][k].first, arr[j]) + matrix[pos][j];
					break;
				}
			}
		}
		
		// min of arr
		int ans = 0;
		for (int l = 1; l < processors; l++) {
			if (arr[l] < arr[ans])
				ans = l;
		}
		
		avail[ans].insert(avail[ans].begin() + idx[ans] + 1, { arr[ans], avail[ans][idx[ans]].second });
		avail[ans][idx[ans]].second = arr[ans] - matrix[pos][ans];
		pro[pos] = ans;
		eft[pos] = arr[ans];
		est[pos] = arr[ans] - matrix[pos][ans];
	}
	cout<<"Available matrix------\n";
	for(int i=0;i<processors;i++){
		cout<<"\n";
		//for(vector<pair<int,int> >::iterator j = avail[i].begin();j<avail[i].end();j++)
		for(int j=0;j<10;j++){
			cout<<"avail[i][j].first : "<<avail[i][j].first<<"avail[i][j].second : "<<avail[i][j].second<<"\n";
		}
		cout<<"\n";
	}
	cout<<"IDX ------\n";
	for(int j=0;j<processors;j++) {
		cout<<idx[j]<<"\t";
	}
	cout<<"\n";
	cout<<"Proc ------\n";
	for(int j=0;j<tasks;j++) {
		cout<<pro[j]<<"\t";
	}
	cout<<"\n";
/*	int span = *max_element(eft, eft + tasks);
	printf("%d\n", span);
	for (int i = 0; i < tasks; i++) {
		for (int j = 0; j < pro[i]; j++)
			puts("0");
		puts("1");
		for (int j = pro[i] + 1; j < processors; j++)
			puts("0");
	}

	for (int i = 0; i < tasks; i++) {
		for (int j = 0; j < pro[i]; j++)
			puts("0");
		printf("%d\n", est[i]);
		for (int j = pro[i] + 1; j < processors; j++)
			puts("0");
	}
	for (int i = 0; i < tasks; i++) {
		for (int j = 0; j < pro[i]; j++)
			puts("0");
		printf("%d\n", eft[i]);
		for (int j = pro[i] + 1; j < processors; j++)
			puts("0");
	}*/
	return 0;
}

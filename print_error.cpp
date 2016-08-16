#include <iostream>
#include <cstdlib>
#include <utility>
#include <vector>
#include <conio.h>
#define MAX_PROC 100
#define MAX_TASK 10000

using namespace std;

int graph[MAX_TASK][MAX_TASK];
int check[MAX_PROC][MAX_TASK];
int proc_endtime[MAX_PROC];
int proc_name[MAX_TASK];
int task_time[MAX_TASK][2];
int exec[MAX_TASK][MAX_PROC];
int cur_hole[MAX_PROC];

class heft{
	public:
		char input_string[1000]; 
		double avg[MAX_TASK];
		double rank[MAX_TASK];
		int s[MAX_TASK];
		int a[MAX_TASK];
		int nodes,np,k;
		vector <int>  start_hole[MAX_PROC];
		vector <int>  end_hole[MAX_PROC];
		
		heft() {
			int i;
			k = 0;
			//sum = 0;
			for(i=0;i<MAX_TASK;i++){
				rank[i]=0;
				avg[i] = 0;
			}
			for (int i = 0; i < MAX_TASK; i++) {
				a[i] = 0;	
				for (int j = 0; j < MAX_TASK; j++) {
					graph[i][j] = -1;
				}
			}
			for (int j = 0; j < MAX_PROC; j++) {
				start_hole[j].push_back(0);
				end_hole[j].push_back(9999999);
			}
		}
		void input(){
		string str;
		cin >> str >> np;
		//int tasks;
		cin >> str >> nodes;
		for (int i = 0; i < nodes; i++) {
		cin >> str;
		avg[i] = 0;
		for (int j = 0; j < np; j++) {
			scanf("%d", &exec[i][j]);
			avg[i] += exec[i][j];
		}
		avg[i] /= np;
		}
		
		cout<<"-----------avg---------\n";
		for(int i = 0;i<nodes;i++){
		cout<<"avg of node "<<i <<"is : "<<avg[i]<<"\n";
		}
	// input task precedence list
		while (true) {
			cin >> str;
			int a;
			scanf("%d", &a);
			if (a == -1)
				break;
		//	++next[a];
			int b, c;
			scanf("%d%d", &b, &c);
			graph[a][b] = c;
		}
		}
/*			int max_nodes = nodes*(nodes-1);
			for (int i = 1; i <= max_nodes; i++) {
				cin>>str;
				scanf("%d",&a);
				if (a == -1) 
					break;
				else {
					scanf("%d%d",&b,&c);
					graph[a][b] = c;
				}	
			
			}
		}
		void comute_avg_exec() {
			int sum;
			for (int i = 0; i < nodes; i++) {
				avg_exec[i] = 0;
				for (int j = 0; j < np; j++) {
						avg_exec[i] = avg_exec[i]+exec[i][j];
				}
				avg_exec[i] = (double)avg_exec[i]/(np*1.0);
				cout<<"task "<<i<<" average: "<<avg_exec[i]<<"\n";
			}
		}*/
		void print(){
			int i,j;
			cout<<"----Execution Matrix------\n";
			for(i=0;i<nodes;i++){
				for(j=0;j<np;j++){
					printf("%d\t",exec[i][j]);
					//cout<<exec[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main(){
	heft h;
	h.input();
	h.print();
	getch();
	getch();
}

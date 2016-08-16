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
			cin >> str >> nodes;
			for (int i = 0; i < nodes; i++) {
			cin >> str;
			avg[i] = 0;
			for (int j = 0; j < np; j++) {
				scanf("%d", &exec[i][j]);
			}
			}
			while (1) {
				cin >> str;
				int a,b,c;
				scanf("%d", &a);
				if (a == -1)
					break;
				scanf("%d%d", &b, &c);
				graph[a][b] = c;
			}
		}
		
		void comute_avg() {
			int sum;
			for (int i = 0; i < nodes; i++) {
				sum = 0;
				for (int j = 0; j < np; j++) {
					sum = sum+exec[i][j];
				}
				cout<<sum;
				avg[i] = (double)sum/(1.0*np);
			}
			cout<<"	MY AVERAGE\n";
			for (int j = 0; j < nodes; j++) {
					printf("%lf\t",avg[j]);
			}
		}
		int find() {
			int f,ctr;
			for (int i = 0; i < nodes; i++) {
				f = 0;
				for (int j = 0; j < nodes; j++) {
					if (graph[i][j] == -1) {
						f++;
					}						
				}
				if(f==nodes){
					rank[i] = avg[i];
					s[k++] = i;
				}
			}	
		}
				
		double max(double a,double b){
			if(a>=b) return a;
			else return b;
		}
		
		int max(int a,int b){
			if(a>=b) return a;
			else return b;
		}
		
		void call_find_rank() {
			for(int i =0;i<k;i++){
				find_rank(s[i]);
			}
		}
		
		void find_rank(int v){
			int i;
			for(i=0;i<nodes;i++){
				if(graph[i][v]!=-1){
					rank[i] = max(rank[i],(avg[i]+graph[i][v] + rank[v]));
					find_rank(i);
				}
			}				
		}
	 int getMax()
	 {
	 	double high = -4;
	 	int hi = -1;
	 	for(int i = 0;i<nodes;i++){
	 		if( a[i]==0 && rank[i]>high ){
	 			high = rank[i];
	 			hi = i;
	 		}
	 	}
	 	a[hi] = 1;
	 	return hi;
	 }
	 
	 int getMin(int a[]){
	 	int min = a[0],min_index = 0;;
	 	for(int i =1;i<np;i++){
	 		if(min>a[i]){
	 			min = a[i];
	 			min_index = i;
	 		}
	 	}
	 	return min_index;
	 }
	 
	 void assign_time(int task){
	 	int e[MAX_PROC] = {0},est,mx = -1,com_gap,proc_id;
	 	int i,p;
	 	for(p = 0;p<np;p++){
	 		for(i = 0;i<nodes;i++){
	 			if(graph[i][task] != -1){
	 				if(check[p][i] == 1) com_gap = 0;
	 				else com_gap = graph[i][task];
	 				
	 				if(com_gap+task_time[i][1]>e[p]){
							e[p] = com_gap+task_time[i][1];
					}
				 }
	 		}
	 		int hole = 0;
	 		while(1){
	 			if( end_hole[p][hole] >= (max(start_hole[p][hole],e[p])+ exec[task][p]) ){
	 				cur_hole[p] = hole;
	 				e[p] = max(start_hole[p][hole],e[p])+ exec[task][p];
	 				break;
	 			}
	 			hole++;
	 		}
	 	}
	 	for(int i = 0;i<np;i++)
		cout<<"Maximum Executing time for task :"<<task<<"for processor :"<<i<<"is :"<<e[i]<<"\n";
	 	proc_id = getMin(e);
//	 	cout<<"Selected Processor :"<<proc_id<<"\n";
	 	check[proc_id][task] = 1;
	 	proc_name[task] = proc_id;
	 	task_time[task][1] = e[proc_id];
	 	task_time[task][0] = e[proc_id]-exec[task][proc_id];
	 	start_hole[proc_id].insert(start_hole[proc_id].begin()+cur_hole[proc_id]+1,e[proc_id]);
	 	end_hole[proc_id].insert(end_hole[proc_id].begin()+cur_hole[proc_id]+1,end_hole[proc_id][cur_hole[proc_id]]);	
	 //		cout<<"New hole : "<<e[proc_id]<<end_hole[proc_id][cur_hole[proc_id]]<<"\n";
	 	end_hole[proc_id][cur_hole[proc_id]] = e[proc_id]-exec[task][proc_id];
	 //	cout<<"OLD hole : "<<start_hole[proc_id][cur_hole[proc_id]]<<end_hole[proc_id][cur_hole[proc_id]]<<"\n";
	 	cout<<"EST OF PROCESS :"<<task<<"is : "<<task_time[task][0]<<"EFT OF PROCESS :"<<task<<"is : "<<task_time[task][1]<<"\n";
	}
		
	void schedule_task(){
		int task;
		for(int i=0;i<nodes;i++){
			task = getMax();
			assign_time(task);		
		}
	}
	 
	  void scheduling_length(){
	 	int max = -1;
	 	for(int i = 0;i<nodes;i++){
	 		if(max<task_time[i][1]) max = task_time[i][1]; 
	 	}
		 	cout<<"Scheduling length : "<<max<<"\n";
	 }
	 void print(){
	 	cout<<"-----------AVERAGE----------\n";
		for(int i = 0;i<nodes;i++){
			cout<<"Average of node "<<i <<"is : "<<avg[i]<<"\n";
		}
		 	cout<<"-----------RANK----------\n";
		for(int i = 0;i<nodes;i++){
			cout<<"Rank of node "<<i <<"is : "<<rank[i]<<"\n";
		}
	 	cout<<"-----------Scheduling----------\n";
			for(int i=0;i<np;i++){
				cout<<"On processor : "<<i<<"\n";
				for(int j=0;j<nodes;j++) cout<<check[i][j]<<"\t";
				cout<<"\n";
			}
	 }
};

int main(){
	heft h;
	h.input();
	h.comute_avg();
	h.find();
	h.call_find_rank();
/*	for(int i=0;i<h.nodes;i++){
		
		cout<<"Now scheduling : "<<h.getMax()<<endl;
	}*/
	h.schedule_task();
	h.scheduling_length();
	h.print();
//	getch();
	return 0;
}

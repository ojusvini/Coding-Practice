#include <iostream>
#include <cstdlib>
#include <utility>
#include <vector>
#include <conio.h>
#define MAX_PROC 100
#define MAX_TASK 10000

using namespace std;
/*struct node {
	int id;
	int st;
	int et;
	struct node *next;
};*/

//@author Ojusvini

int graph[MAX_TASK][MAX_TASK];
int check[MAX_PROC][MAX_TASK];
int proc_endtime[MAX_PROC];
int proc_name[MAX_TASK];
int task_time[MAX_TASK][2];
int exec[MAX_TASK][MAX_PROC];
int cur_hole[MAX_PROC];

class heft{
	public:
		char input_string[10000]; 
		double avg_exec[MAX_TASK];
		double rank[MAX_TASK];
		int s[MAX_TASK];
		int a[MAX_TASK];
		int nodes,np,k;
		vector <int>  start_hole[MAX_PROC];
		vector <int>  end_hole[MAX_PROC];
//		struct node* proc_list[MAX] = {NULL};
	//	int exec[6][3]= {{1,4,1},{10,1,10},{10,1,10},{5,5,5},{4,4,4},{1,5,1}};
		
		heft() {
			int i;
			k = 0;
			//sum = 0;
			for(i=0;i<MAX_TASK;i++){
				rank[i]=0;
				avg_exec[i] = 0;
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
		
	/*	void initialize() {
			cout<<"----------------INITIALIZE!!!----------------------\n";
			vector<int>::iterator j;
			cout<<"----------------INITIALIZE Processors!!!----------------------\n";
			for(int i = 0;i<10;i++)
			for (j = holes_start[i].begin(); j < holes_start[i].end() ; j++) {
				cout<<"' '" << *j<<"\t";
			}
		}*/
		
		void input(){
				int a, b, c;
				for (int i = 0; i < nodes; i++) {
					for (int j = 0; j < np; j++) {
						cin >>input_string;//>>exec[i][j];
						scanf("%d",&exec[i][j]);
					}	
				}
				int max_nodes = nodes*(nodes-1);
				for (int i = 1; i <= max_nodes; i++) {
					cin>>input_string;
					scanf("%d",&a);
					//cin >> a;
					if (a == -1) 
						break;
					else {
						scanf("%d%d",&a);
						//cin >> b >> c;
						graph[a][b] = c;
					}	
				
				}
				
		}
		
		void comute_avg_exec() {
			int sum;
			for (int i = 0; i < nodes; i++) {
				sum = 0;
				for (int j = 0; j < np; j++) {
					sum = sum+exec[i][j];
				}
				avg_exec[i] = (double)sum/(np*1.0);
				cout<<"task "<<i<<" average: "<<avg_exec[i]<<"\n";
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
					rank[i] = avg_exec[i];
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
				//	cout<<"Inside IF\n";
					rank[i] = max(rank[i],(avg_exec[i]+graph[i][v] + rank[v]));
				//	cout<<"Calling find rank for node "<<i;
					find_rank(i);
				}
			}				
		}		 
		 int getMax()
		 {	double high = -4;
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
		 			if( end_hole[p][hole] >= max(start_hole[p][hole],e[p])+ exec[task][p]){
		 				cur_hole[p] = hole;
		 				e[p] = max(start_hole[p][hole],e[p])+ exec[task][p];
		 				break;
		 			}
		 			hole++;
		 		}
		 	}
		 	proc_id = getMin(e);
		 	proc_name[task] = proc_id;
		 	task_time[task][1] = e[proc_id];
		 	task_time[task][0] = e[proc_id]-exec[task][proc_id];
		 	start_hole[proc_id].insert(start_hole[proc_id].begin()+cur_hole[proc_id]+1,e[p]);
		 	end_hole[proc_id].insert(end_hole[proc_id].begin()+cur_hole[proc_id]+1,end_hole[proc_id][cur_hole[proc_id]]);	
		 	end_hole[proc_id][cur_hole[proc_id]] = e[p]-exec[task][p];
		}
//		 	cout<<"----------------Earliest start time of task"<<task<<"on \n";
		 	/*for(i=0;i<np;i++){
		 		cout<<"Processor"<<i<<"is : "<<e[i]<<"and execution time for this processor is : "<<exec[task][i]<<"\n";
		 	}
		 	
		 	
/*			int min = e[0]+exec[task][0];
		 	proc_id = 0;
		 	for(i=1;i<np;i++){
		 		if(e[i]+exec[task][i]<min){
		 			min = e[i]+exec[task][i];
		 			proc_id = i;
		 		}
		 	}
		 	cout<<"for task "<<task<<" Selected processor is :"<<proc_id<<"\n";
		 	check[proc_id][task] = 1;
		 	task_time[task][0] = e[proc_id];
		 	task_time[task][1] = e[proc_id] + exec[task][proc_id];
			proc_name[task] = proc_id;
			proc_endtime[proc_id] = task_time[task][1];*/
		 //}
		 
		 void schedule_task(){
		 		int j,min,p1;
		 		int task = getMax();
		 		if(task == -1){
		 			return;
		 		}
		 		else {
		 			min = exec[task][0];
		 			p1 = 0;		 			
		 			for(j = 1;j< np;j++){
		 				if(min>exec[task][j]){
		 					min = exec[task][j];
		 					p1 = j;
		 				}
		 			}
		 		//	cout<<"Processor :"<<p1<<endl;
		 		}
		 		check[p1][task] = 1;
		 		proc_name[task] = p1;
				task_time[task][0] = 0; task_time[task][1] = exec[task][p1];
		 		proc_endtime[p1] = task_time[task][1];
				for(int i=1;i<nodes;i++){
					task = getMax();
					assign_time(task);
				}
				//cout<<task_time[task][1]; 	
		 }
		 
		 void scheduling_length(){
		 	int max = -1;
		 	for(int i = 0;i<nodes;i++){
		 		if(max<task_time[i][1]) max = task_time[i][1]; 
		 	}
		 	cout<<max<<"\n";
		 }
};

int main()
{
	heft h;
	int nodes, np;
	char input_string[10000];
//	cout << "No_processors\t";
	cin >>input_string>> h.np;
//	cout << "no_of_tasks\t";
	cin >>input_string>> h.nodes;
	
	//h.np = 3;
	//h.nodes = 6;	
//	h.initialize();
	h.input();
	h.comute_avg_exec();
//	h.find();
//	h.call_find_rank();
//	h.schedule_task();
//	h.scheduling_length();
	cout<<"Hello\n";
	getch();
//	h.print();
/*	for(int i=0;i<h.nodes;i++){
		cout<<h.getMax()<<"\n";
	}*/
	return 0;
}

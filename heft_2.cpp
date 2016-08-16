#include <iostream>
#include <cstdlib>
#include <utility>
#define MAX 100

using namespace std;
/*struct node {
	int id;
	int st;
	int et;
	struct node *next;
};*/
int graph[MAX][MAX];
int check[MAX][MAX];
int proc_endtime[MAX];
int proc_name[MAX];
int task_time[MAX][2];

//int exec[MAX][MAX];
class heft{
	public: 
		//int exec[MAX][MAX];
		double avg_exec[MAX];
		double rank[MAX];
		int s[MAX];
		int a[MAX];
		int nodes,np,k;
//		struct node* proc_list[MAX] = {NULL};
		int exec[6][3]= {{1,4,1},{10,1,10},{10,1,10},{5,5,5},{4,4,4},{1,5,1}};
		
		heft() {
			int i;
			k = 0;
			//sum = 0;
			for(i=0;i<MAX;i++){
				rank[i]=0;
				avg_exec[i] = 0;
			}
		}
		void initialize() {
			for (int i = 0; i < nodes; i++) {
				a[i] = 0;
				for (int j = 0; j < nodes; j++) {
					graph[i][j] = -1;
				}
			}
		}
		
		void input(){
			int a, b, c;
			graph[0][1] = 1;
			graph[0][2] = 7;
			graph[0][3] = 5;
			graph[0][4] = 5;
			graph[1][5] = 7;
			graph[2][5] = 2;
			graph[3][5] = 5;
			graph[4][5] = 5;
		}			
		
		void comute_avg_exec() {
			int sum;
			for (int i = 0; i < nodes; i++) {
				sum = 0;
				for (int j = 0; j < np; j++) {
					sum = sum+exec[i][j];
				}
				avg_exec[i] = (double)sum/(np*1.0);
				//cout<<"task "<<i<<" average: "<<avg_exec[i]<<"\n";
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

		void print(){
			cout<<"k = "<<k<<endl;
			int i,j;
			cout<<"-----------Sink Nodes----------\n";
			for(i = 0;i<k;i++){
				cout<<s[i]<<endl;
			}
			cout<<"-----------RANK----------\n";
			for(i = 0;i<nodes;i++){
				cout<<"Rank of node "<<i <<"is : "<<rank[i]<<"\n";
			}
			cout<<"-----------Scheduling----------\n";
			for(i=0;i<np;i++){
				cout<<"On processor : "<<i<<"\n";
				for(j=0;j<nodes;j++) cout<<check[i][j]<<"\t";
				cout<<"\n";
			}
			cout<<"-----------Proc Name----------\n";
			for(i = 0;i<nodes;i++){
				cout<<"Processor of task "<<i <<"is : "<<proc_name[i]<<"\n";
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
		 

		 void assign_time(int task){
		 	int e[MAX] = {0},est,mx = -1,com_gap,proc_id, k = 0;;
		 	int i,p;
		 	for(p = 0;p<np;p++){
		 		mx = -1;
		 		for(i = 0;i<nodes;i++){
		 			if(graph[i][task]!=-1){
		 				if(check[p][i]==1) com_gap = 0;
						else com_gap = graph[i][task];
						est = com_gap+task_time[i][1];	
						if(mx<est){
							mx = est;
						}
					 }
		 		}
		 		mx = max(proc_endtime[p],mx);
		 		e[p] = mx;
		 	}
		 	cout<<"----------------Earliest start time of task"<<task<<"on \n";
		 	for(i=0;i<np;i++){
		 		cout<<"Processor"<<i<<"is : "<<e[i]<<"and execution time for this processor is : "<<exec[task][i]<<"\n";
		 	}
		 	int min = e[0]+exec[task][0];
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
			proc_endtime[proc_id] = task_time[task][1];
		 }
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
		 			cout<<"Processor :"<<p1<<endl;
		 		}
		 		check[p1][task] = 1;
		 		proc_name[task] = p1;
				task_time[task][0] = 0; task_time[task][1] = exec[task][p1];
		 		proc_endtime[p1] = task_time[task][1];
				for(int i=1;i<nodes;i++){
					task = getMax();
					assign_time(task);
				}	 	
		 }
};

int main()
{
	heft h;
	int nodes, np;
	h.np = 3;
	h.nodes = 6;	
	h.initialize();
	h.input();
	h.comute_avg_exec();
	h.find();
	h.call_find_rank();
	h.schedule_task();
	h.print();
/*	for(int i=0;i<h.nodes;i++){
		cout<<h.getMax()<<"\n";
	}*/
	return 0;
}

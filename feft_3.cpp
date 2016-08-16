#include <iostream>
#include <cstdlib>
#include <utility>
#define MAX 100

using namespace std;
int graph[MAX][MAX];
int check[MAX][MAX];
int proc_endtime[MAX];
int proc_name[MAX];
int task_time[MAX][2];

//int exec[MAX][MAX];
class heft{
	public: 
		int exec[MAX][MAX];
		double avg_exec[MAX];
		double rank[MAX];
		int s[MAX];
		int a[MAX];
		int nodes,np,k;
//		struct node* proc_list[MAX] = {NULL};
		//int exec[6][3]= {{1,4,1},{10,1,10},{10,1,10},{5,5,5},{4,4,4},{1,5,1}};
		
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
//					execc[i][j] = -1;
				}
			}
		}
		
		void input(){
			int a, b, c;
			for (int i = 0; i < nodes; i++) {
		//		cout << "st" << i << "\t";
				for (int j = 0; j < np; j++) {
					cin >> exec[i][j];
				}	
			}
			int max_nodes = nodes*(nodes-1);
			for (int i = 1; i <= max_nodes; i++) {
		//		cout << "links" << i << "\t";
				cin >> a;
				if (a == -1) 
					break;
				else {
					cin >> b >> c;
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
		void call_find_rank() {
			for(int i =0;i<k;i++){
				find_rank(s[i]);
			}
		}
		void find_rank(int v){
			int i;
			for(i=0;i<nodes;i++){
				if(graph[i][v]!=-1){
			//		cout<<"Inside IF\n";
					rank[i] = max(rank[i],(avg_exec[i]+graph[i][v] + rank[v]));
			//		cout<<"Calling find rank for node "<<i;
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
		 
		 
	 	pair<int, int> find_min(int task,int pred){
	 			int com_gap,exec_time,min_exec = 9999999,proc_index;
	 			for(int i=0;i<np;i++){
	 				if(check[i][pred]==1)
	 					com_gap = 0;
	 				else
	 					com_gap = graph[pred][task];
	 				exec_time = task_time[pred][1]-task_time[pred][0]+ com_gap+exec[task][i]+proc_endtime[i];
	 				if(exec_time<min_exec){
	 					min_exec = exec_time;
	 					proc_index = i;
	 				}
	 				
	 			}
//	 			cout<<"Minimum time :" <<min_exec<<"proc_index : "<<proc_index<<endl;
	 			return make_pair(min_exec,proc_index);
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
		 		}
		 		check[p1][task] = 1;
		 		proc_name[task] = p1;
				task_time[task][0] = 0; task_time[task][1] = exec[task][p1];;
		 		proc_endtime[p1] = exec[task][p1];
		 		pair<int , int> a;
		 		int min_time = 9999999,proc_index;
				for(int i=1;i<nodes;i++){
					task = getMax();
					for(int j = 0;j<nodes;j++){
						if(graph[j][task]!=-1){
							a = find_min(task,j);
							if(a.first<min_time){
									min_time = a.first;
									proc_index = a.second;	
							}	
						}
					}
					check[proc_index][task] = 1;
					task_time[task][0] = proc_endtime[proc_index];
					task_time[task][1] = proc_endtime[proc_index] + min_time;
					proc_endtime[proc_index] = proc_endtime[proc_index] +min_time;// task_time[task][1]-task_time[task][0];
					proc_name[task] = proc_index;
				}	 	
		 }
};

int main()
{
	heft h;
	int nodes, np;
	cin >> h.np;
	cin >> h.nodes;
	h.initialize();
	h.input();
	h.comute_avg_exec();
	h.find();
	h.call_find_rank();
//		h.print();
/*	for(int i = 0;i<h.nodes;i++){
		cout<<h.getMax()<<"\t";
	}*/
	h.schedule_task();
	h.print();

	return 0;
}

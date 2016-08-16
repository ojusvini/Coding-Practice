#include <iostream>

#define MAX 100

using namespace std;

class heft{
	public: 
		int graph[MAX][MAX];
		int exec[MAX][MAX];
		double avg_exec[MAX];
		double rank[MAX];
		int s[MAX];
		int nodes,np,k;
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
				for (int j = 0; j < np; j++) {
					graph[i][j] = -1;
//					execc[i][j] = -1;
				}
			}
		}
		
		void input(){
			int a, b, c;
			for (int i = 0; i < nodes; i++) {
				cout << "st" << i << "\t";
				for (int j = 0; j < np; j++) {
					cin >> exec[i][j];
				}	
			}
			int max_nodes = nodes*(nodes-1);
			for (int i = 1; i <= max_nodes; i++) {
				cout << "links" << i << "\t";
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
				for (int j = 0; j < np; j++) {
					if (graph[i][j] != -1) {
						f = 1;
						break;
					}						
				}
				if(f==0){
					rank[i] = avg_exec[i];
					s[k++] = i;
					//return i;
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
					rank[i] = max(rank[i],(avg_exec[i]+graph[i][v] + rank[v]));
					find_rank(i);
				}
			}				
		}
		void print(){
			for(int i = 0;i<k;i++){
				cout<<s[i];
				//cout<<"rank of "<<i<<"is : "<<rank[i] <<endl;
			}
		} 
		
};

int main()
{
	heft h;
	int nodes, np;
	cout << "No_processors\t";
	cin >> h.np;
	cout << "no_of_tasks\t";
	cin >> h.nodes;
	
	h.initialize();
	h.input();
	h.comute_avg_exec();
	h.find();
//	h.call_find_rank();
	h.print();
	return 0;
}

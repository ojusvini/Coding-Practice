#include <stdio.h>
#include <vector>
using namespace std;
#define MIN(x, y) ( (x < y) ? x : y)

int abs(int x) {
  return ((x < 0) ? (-1*x) : x);
}

int divide(vector<int> a, int i, int X, int Y) {
  if(i >= a.size()) {
    return abs(X-Y);
  } else {
    int x1 = divide(a, i+1, X+a[i], Y);
    int x2 = divide(a, i+1, X, Y+a[i]);
    return min(x1, x2);
  }
}

int main() {
  int N;
  scanf("%d", &N);
  vector<int> a;
  int N_ = N;
  while(N_--) {
    int x; 
    scanf("%d", &x);
    a.push_back(x);
  } 
  printf("Min diff : %d\n", divide(a, 0, 0, 0));
}

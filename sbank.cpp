#include <iostream>
#include <map>
#include <iterator>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int t;
    for( scanf("%d", &t); t; t--){
        int count;
        char dummy;
        map<string, int> table;
        map<string, int>::iterator it;
        char str[40];
        for( scanf("%d\n", &count); count; count--){
            gets(str);
            table[(string)str]++;
        }
        for( it = table.begin(); it != table.end(); it++){
            printf("%s %d\n", it->first.c_str(), it->second);
        }
        printf("\n");
    }
}

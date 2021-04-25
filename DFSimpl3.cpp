#include<iostream>
using namespace std;
#define n 5
int G[5][5] = {
		 {0,1,1,1,0},
		 {1,0,0,1,1},
		 {1,0,0,0,1},
		 {1,1,0,0,1},
		 {0,1,1,1,0}
		};
		
void print(int sv, int* visited){
	cout<<sv<<endl;
	visited[sv]=1;
	for(int i=0; i<n; i++){
		if(i==sv)
			continue;
		if(G[sv][i]==1){
			if(visited[i]==0){
				print(i,visited);
			}
		}
	}
}

int main() {
	int* visited = new int[n];
	for(int i=0; i<n; i++)
		visited[i]=0;
	print(0, visited);
	return 0;
}
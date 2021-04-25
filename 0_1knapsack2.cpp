#include<iostream>
using namespace std;
int max(int a, int b) {
	if(a>b) return a;
	return b;
}
int knapsack(int cap, int wt[], int val[], int size) {
	int K[size+1][cap+1], i, j;
	for(i=0; i<size+1; i++) {
		for(j=0; j<cap+1; j++) {
			if(i == 0 || j ==0) 
				K[i][j] = 0;
			else if(wt[i-1]<=cap)
				K[i][j] = max(K[i-1][j], K[i-1][j - wt[i-1]] + val[i-1]);
			else K[i][j]=K[i-1][j];
		}
	}
	return K[size][cap];
}

int main() {
	int val[3] = {60,100,120};
	int wt[3] = {10,20,30};
	int cap = 50;
	cout<<knapsack(cap, wt,val, 3);
	return 0;
}
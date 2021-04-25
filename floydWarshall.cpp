#include<bits/stdc++.h>
using namespace std;

int mini(int a, int b) {
	if (a>b) return b;
	else return a;
}

int main() {
	int A[4][4] = {{0,2,6,9999},
				   {6,0,7,10},
				   {5,9,0,6},
				   {9999,10,3,0}};
	for(int h=0; h<4; h++) {
		for(int l=0; l<4; l++)
			std::cout<<A[h][l]<<" ";
		cout<<endl;
	}
	int i, j, k;
	for(k=0; k<4; k++) {
		for(i=0; i<4; i++) {
			for(j=0; j<4; j++) {
				A[i][j] = mini(A[i][j], A[i][k] + A[k][j]);
			}
		}
	}
	for(int h=0; h<4; h++) {
		for(int l=0; l<4; l++)
			std::cout<<A[h][l]<<" ";
		cout<<endl;
	}
	return 0;
} 

#include<iostream>
using namespace std;

int main() {
	int a[5] = {3,4,6,2,1};
	int b[5];
	int c[6], i, j;
	for(i=0; i<6; i++)
		c[i] = 0;
	for(j=0; j<5; j++)
		c[a[j]] = c[a[j]] + 1;
	for(i=0; i<6; i++)
		c[i] = c[i] + c[i-1];
	for(j=5; j>=0; j--){
		b[c[a[j]]] = a[j];
		c[a[j]] = c[a[j]] - 1;
	}
	for(i=0; i<5; i++)
		cout<<"\t"<<b[i];
	return 0;
}

/*
//Viva	
c[max(a)] = {0};
for(i=0; i<c.length; i++)
	c[i] = 0;
for(i=0; i<a.length; i++)
	c[a[i]] = c[a[i]]+1;
for(i=0; i<c.length; i++)
	c[i] = c[i] + c[i-1];
for(j=a.length; i>=0; j--) {
	b[c[a[j]]] = a[j];
	c[a[j]]--;
}
*/
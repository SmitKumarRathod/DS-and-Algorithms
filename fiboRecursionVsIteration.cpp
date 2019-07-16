#include<iostream>
#include<sys/time.h>
#include<stdlib.h>

using namespace std;
// For Iteration
/*
int main() {
	long long int a=0, b=1, c;
	struct timeval t1,t2;
	gettimeofday(&t1, NULL);
	for(int i=0; i<100000; i++){
		c=a+b;
		a=b; b=c;
	}
	gettimeofday(&t2, NULL);
cout<<"\n\n TIME DIFFERENCE IS:- "<<(t2.tv_sec*1000000 + t2.tv_usec) - (t1.tv_sec*1000000 + t1.tv_usec);
return 0;
}
*/
long long int fibo(int number) {
	if (number == 0 || number ==1 ) {return number;}
	else return fibo(number-1) + fibo(number-2); 
}

int main() {
	long long int res;
	struct timeval t1, t2;
	gettimeofday(&t1, NULL);
	res = fibo(50);	
	gettimeofday(&t2, NULL);
	cout<<"\n\n TIME DIFFERENCE IS:- "<<(t2.tv_sec*1000000 + t2.tv_usec) - (t1.tv_sec*1000000 + t1.tv_usec);
	return 0;
}

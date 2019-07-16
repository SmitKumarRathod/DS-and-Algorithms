//Quick Sort Analysis
#include<iostream>
#include<sys/time.h>
#include<stdlib.h>

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];  
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)  
    {  
      
        if (arr[j] <= pivot)  
        {  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    { 
        int pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
int main () {
	int n=1000,i,j,k, low, high;
	struct timeval t1,t2;	
	int a[n];
	for (i=0;i<n; i++) 
	a[i] = i;
	beg=0, high=n;
	gettimeofday(&t1, NULL);	
	quicksort(a,low,high);	
	gettimeofday(&t2, NULL);
	cout<<"\n"<<(t2.tv_sec*1000000 + t2.tv_usec) - (t1s.tv_sec*1000000 + t1.tv_usec);	
	return 0;
}

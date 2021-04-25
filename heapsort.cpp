// heapsort
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}


void heapify(int arr[], int n, int i)
{
   // Find largest among root, left child and right child
   int largest = i;
   int l = 2*i + 1;
   int r = 2*i + 2;
   if (l < n && arr[l] > arr[largest])
     largest = l;
   if (r < n && arr[r] > arr[largest])
     largest = r;
   // Swap and continue heapifying if root is not largest
   if (largest != i)
   {
     swap(&arr[i], &arr[largest]);
     heapify(arr, n, largest);
   }
}
void heapsort(int a[], int n){
	//build max heap
	for(int i = n/2 - 1; i>=0; i--)
		heapify(a, n, i);

	for(int i=n-1; i>=0; i--) {
		swap(&a[0], &a[i]);
		heapify(a,i,0);
	}

}

int main(){
	int a[] = {1,12,9,5,6,10};
	heapsort(a,6);
	for(int i=0; i<6; i++)
		std::cout<<"\t"<<a[i];
	return 0;
}
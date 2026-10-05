#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n) {
	cout<<"\n Unsorted array ";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	//bubble sort algo
	for(int i=0; i<n; i++) {//outer loop for passes
		if(arr[j]>arr[j+1]) {
			swap(arr[j],arr[j+1]);
		}
	}
	cout<<"\n Array after pass "<<i+1<<endl;
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}
cout<<"\n sorted array \n";
for(int i=0; i<n; i++) {
	cout<<arr[i]<<" ";
}
}
int main() {
	int arr[7]= {4,10,1,7,21,2,5};
	bubble_sort(arr,7);

}
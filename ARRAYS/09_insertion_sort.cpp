#include<iostream>
using namespace std;
void display_Array(int arr[],int n) {
	cout<<"[";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"]";
}
void insertion_sort(int arr[],int n) {
	for(int i=0; i<n-1; i++) {
		int key=arr[i];
		int j=i+1;
		while (j>=0 && arr[j]>key) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}

	display_Array(arr,n);
}


int main() {
	cout<<"Enter the size of array : ";
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cout<<"Enter the number for index: "<<i+1<<" : ";
		cin>>arr[i];
	}
	display_Array(arr,n);
	insertion_sort(arr,n);
}
#include<iostream>
using namespace std;
void quick_sort(int arr[],int l,int r) {
	if(l<r) {
		int pivot=arr[r];//taking last element as pivot 
		int i=l-1;//initialize i before first element
		for(int j=l; j<r; j++) {
			if(arr[j]<pivot) {
				i++;
				swap(arr[i],arr[j]);//swap smaller element on the left side 
			}
		}
		swap(arr[i+1],arr[r]);
		int p=i+1;//store pivot index
		//recursive call
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,r);
	}
}
int main() {
	int arr[6]= {3,7,4,1,9,6};
	quick_sort(arr,0,5);
	//printing array
	for(int i=0; i<6; i++) {
		cout<<arr[i]<<" ";
	}
}
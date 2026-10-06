#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"Orignal array \n";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	int count_comparasions=0;
	int count_swaps=0;
	//selection sort algo
	for(int i=0; i<n-1; i++) {
		int min_index=i;
		for(int j=i+1; j<n; j++) {
			count_comparasions++;
			if(arr[j]<arr[min_index]) {
				min_index=j;
			}
		}
		if(i!=min_index) {
			swap(arr[i],arr[min_index]);
			count_swaps++;
		}
		cout<<"Array after pass "<<i<<endl;
		for(int i=0; i<n; i++) {
			cout<<arr[i]<<" ";
		}
	}
	cout<<"\n Sorted array \n";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"\n Total comparasions= "<<count_comparasions<<endl;
	cout<<"Total swaps= "<<count_swaps<<endl;
	return 0;
}
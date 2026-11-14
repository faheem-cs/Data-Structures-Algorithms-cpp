#include<iostream>
using namespace std;
void binary_search(int arr[],int n) {
	cout<<"\n Enter the number to search in array \n";
	int num;
	cin>>num;
	int l=0;
	int r=n-1;;
	int found_index=-1;
	//continue searching while range is valid
	while(l<=r) {
		int mid=(l+r)/2;
		if(num==arr[mid]) {
			found_index=mid;
			break;
		} else if(num>arr[mid]) {//search in the right half
			l=mid+1;
		} else {
			r=mid-1;
		}
	}
	if(found_index!=-1){//earch in theleft half
		cout<<num<<" found at index "<<found_index<<endl;
	}
	else cout<<"number not found \n";
}
int main() {

	int n=6;
	int arr[6]= {20,30,35,56,67,87};
	cout<<"array"<<endl;
	cout<<"[ ";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<" ]";
	//calling function
	    binary_search(arr,n);
}


#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of array: ";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter "<<n<<" elements \n";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Array \n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"Reversed array \n";
	for(int j=n-1;j>=0;j--){
		cout<<arr[j]<<" ";
	}
}
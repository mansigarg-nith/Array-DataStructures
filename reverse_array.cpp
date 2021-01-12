#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	// using another array
	int arr1[n];
	for(int i=0; i<n; i++){
		arr1[n-1-i] = arr[i];
	}
	cout<<"Reversed array is: ";
	for(int i=0; i<n; i++){
		cout<<arr1[i]<<" ";
	}
}

#include <iostream>
using namespace std;
void left(int arr[], int n){
	int x;
	cout<<"Enter the no. of elements by which array is to be rotated: ";
	cin>>x;
	int temp[x];
	for(int i=0; i<x; i++){
		temp[i] = arr[i];
	}
	for(int j=0; j<x; j++){
		for(int i=0; i<n; i++){
			arr[i] = arr[i+1];
	}
	}
	for(int i=0; i<x; i++){
		arr[n-1-i] = temp[x-i-1];
	}
	cout<<"Left-rotated array is: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
void right(int arr[], int n){
	int x;
	cout<<"Enter the no. of elements by which array is to be rotated: ";
	cin>>x;
	int temp[x];
	for(int i=0; i<x; i++){
		temp[x-i-1] = arr[n-1-i];
	}
	for(int i=0; i<x; i++){
		for(int i=0; i<n; i++){
			arr[n-1-i] = arr[n-2-i];
		}
	}
	for(int i=0; i<x; i++){
		arr[i] = temp[i];
	}
	cout<<"Right-rotated array is: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	char ch;
	cout<<"Left/Right rotation. Enter l/r: ";
	cin>>ch;
	switch(ch){
		case 'l':
			left(arr,n);
			break;
		case 'r':
			right(arr,n);
			break;
		default:
			cout<<"Invalid!";
	}
}

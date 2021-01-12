//array operations
#include <iostream>
using namespace std;
void display(int *x, int n){
	for(int i=0; i<n; i++){
		cout<<"Element at index "<<i<<" is "<<*x<<endl;
		x++;
	}
}
int search(int *x, int n){
	int e;
	cout<<"Enter the element to be searched: ";
	cin>>e;
	for(int i=0; i<n; i++){
		if(*x==e){
			return i;
		}
		x++;
	}return -1;
}
void insert(int *x, int n){
	int e, i;
	cout<<"Enter the index at which element is to be inseted: ";
	cin>>i;
	cout<<"Enter the element to be inserted: ";
	cin>>e;
	n+=1;
	for(int j = n-1; j>=i; j--){
		*(x+j) = *(x+j-1);
		
	}
	*(x+i) = e;
	for(int k=0; k<n; k++){
		cout<<*x<<endl;
		x++;
	}
}
int dlt(int *x, int n){
	int e;
	cout<<"Enter the element to be deleted: ";
	cin>>e;
	for(int i=0; i<n; i++){
		if(*(x+i)==e){
			for(int j=i; j<n-1; j++){
				*(x+j) = *(x+j+1);
			}
			for(int j=0; j<n-1; j++){
				cout<<*(x+j)<<endl;
			}
		}
	}
}
void update(int *x, int n){
	int i, e;
	cout<<"Enter the element which is to be updated: ";
	cin>>i;
	cout<<"Enter the new element: ";
	cin>>e;
	for(int k=0; k<n; k++){
		if(*(x+k)==i){
			*(x+k) = e;
		}
	}
	for(int j=0; j<n; j++){
		cout<<*(x+j)<<endl;
	}
}
int main(){
	int n, flag;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elments of the array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int choice;
	cout<<"Choose one of them: "<<endl;
	cout<<"1. Display the integer array"<<endl;
	cout<<"2. Search for an element in the array"<<endl;
	cout<<"3. Insert an elment in the array"<<endl;
	cout<<"4. Delete an element from the array"<<endl;
	cout<<"5. Update an element";
	cin>>choice;
	switch(choice){
		case 1:
			display(arr,n);
			break;
		case 2:
			flag = search(arr,n);
			if(flag==-1){
				cout<<"Element not found!"<<endl;
			}else{
				cout<<"Element found at index "<<flag<<endl;
			}
			break;
		case 3:
			insert(arr,n);
			break;
		case 4:
			dlt(arr,n);
			break;
		case 5:
			update(arr,n);
			break;
		default:
			cout<<"Invalid! Enter some valid choice";
    }
}

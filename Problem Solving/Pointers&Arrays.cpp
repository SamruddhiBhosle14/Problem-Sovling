//Pointers and arrays
#include<iostream>
using namespace std;

int main(){
	int arr[12];
	cout<<"Enetr values for array: \n";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	
	int *ptr;
	
	ptr  =&arr[0];
	
	for(int i=0;i<10;i++){
		cout<<*(ptr+i)<<" ";	//OR *(ptr++)
	}
	return 0;
}

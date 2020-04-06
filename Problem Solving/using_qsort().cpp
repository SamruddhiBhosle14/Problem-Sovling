//using qsort() in c++
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int compare(const void * a, const void * b) 
{ 
    return ( *(int*)a - *(int*)b ); 
} 
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	qsort(&arr[0],size,sizeof(int),compare);
	cout<<"Sorted array: ";
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	
}

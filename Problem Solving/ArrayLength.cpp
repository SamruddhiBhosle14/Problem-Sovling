//function for finding lenght of !D array
#include<iostream>
using namespace std;

int arr_length(int arr[]){
	 int length = sizeof(arr)/sizeof(arr[0]);
	 return length;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,4};
	int length = arr_length(arr);
	cout<<length;
}

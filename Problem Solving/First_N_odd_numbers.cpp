// print sum of first n odd numbers
#include<iostream>
using namespace std;

int main(){
	int number;
	int oddSum(int n);
	cout<<"Enter the number: ";
	cin>>number;
	int sum = oddSum(number);
	cout<<"Sum is : "<<sum;
	return 0;
}

int oddSum(int n){
	int odd=3;
	int sum=0;
	for(int i=0;i<n;i++){
		sum += odd;
		odd = odd+2;
	}
	
	return sum;	
}

//finding the reverse
#include<iostream>
using namespace std;

int main(){
	
	int reverse(int);
	int number;
	cout<<"Enter number: ";
	cin>>number;
	int result = reverse(number);
	cout<<"Reverse is: "<<result;
	
	return 0;
}

int reverse(int n){
	int result = 0;
	while(n != 0){
		result = result*10 + (n % 10); 
		n = n/10;
	}
	return result;
}

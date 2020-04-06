// nth triangular
#include<iostream>
using namespace std;

int main(){
	int number;
	int Nth_Triangular(int n);
	cout<<"Enetr the number:";
	cin>>number;
	int sum = Nth_Triangular(number);
	cout<<sum;
	
	return 0;	
}


int Nth_Triangular(int n){
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += i;
	}
	return sum;
}

//prime numbers
#include<iostream>
#define N 100
using namespace std;

int *prime_number(int n){
	static int prime[N];
	int isPrime,primeIndex;
	prime[0] = 2;
	prime[1] = 3;
	primeIndex = 1;
	
	for(int i = 5 ; i < n ; i++){
		isPrime = 1;
		for(int j = 0 ; j < primeIndex ; j++){
			if(i % prime[j] == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			primeIndex++;
			prime[primeIndex] = i;
		}
	}
	
	return prime;
}

int main(){
	int *prime;
	int number;
	cout<<"Enetr number: ";
	cin>>number;
	prime = prime_number(number);
	
	for(int i=0;i<number;i++){
		cout<<*(prime+i);
	}
	return 0;
}

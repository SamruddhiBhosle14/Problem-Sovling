//power of number
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	
int power_method1(int base,int n);
int power_method2(int base,int n);
int power_method3(int base,int n);
	int base;
	int n;
	cout<<"Enetr base and raise to power: ";
	cin>>base>>n;
	cout<<"Method 1: ";
	int result = power_method1(base,n);
	cout<<result<<endl;
	
	cout<<"Method 2: ";
	result = power_method2(base,n);
	cout<<result;cout<<endl;

	cout<<"Method 3: ";
	result = power_method3(base,n);
	cout<<result;

	return 0;
	
}

//traditional
int power_method1(int base,int n){
	int result = 1;
	for(int i=0;i<n;i++){
		result = result*base;
	}
	return result;
}

//recurssive
int power_method2(int base,int n){
	
	if(n == 0){
		return 1;
		
	}
	
	int p = power_method2(base,n/2);
	
	if(n % 2 == 0){
		
		return p * p;
	
	}else if(n % 2 == 1){
	
		return p * p * base;
	
	}
	
}

//less itteration
int power_method3(int base,int n){
	int result,base_real = base;
	int power = 1;
	if(n % 2 == 0){
		for(int i = 0;i<n;i*2){
			result = base *base;
			base = result;
			power = i;
		}
		for(int i = power;i<n;i++){
			result = result * base_real;
		}
		return result;
	}else{
		
		while(power < n){
			result = base * base;
			base = result ;
			power = power * 2;
		}
		for(int i = power;i<n;i++){
			result = base * base_real;
		}
		return result;
	} 
}

//print GCD or HCF of two numbers
#include<iostream>
using namespace std;

int main(){
	
	int GCD_method1(int m,int n);
	int GCD_method2(int m,int n);
	int m,n,gcd;
	cout<<"Enetr m and n";
	cin>>m>>n;
	cout<<"Method 1:";
	GCD_method1(m,n);
	cout<<endl;
	cout<<"Method 2:";
	GCD_method2(m,n);
	
	return 0;
}

//elucid's algorithm
void GCD_method1(int m,int n){
	int rem = 1;
	
	if(m>n){
		while(rem != 0){
			rem = m % n;
			m = n;
			n = rem;
			
		}
		cout<<m;
	}else if(n>m){
		while(rem != 0){
			rem = n % m;
			n = m;
			m = rem;
			
		}
		cout<<n;		
	}else{
		cout<<rem;
	}
	
	
}

int GCD_method2(int m,int n){
	while(m != n){
		if(m>n){
			m = m-n;
		}else{
			n = n-m;
		}
		
	}
	cout<<m;
}


#include <iostream>
#include <ctime>
#define N 100
using namespace std;

// function to generate and retrun random numbers.
int * fibonacci_method1(int n) {

   static int  f[N];

  f[0] = 0;
  f[1] = 1;
  
  for(int i=2;i<n;i++){
  	f[i] = f[i-1] + f[i-2];
  }
  

   return f;
}

int fibonacci_method2(int n){
	if(n == 0 || n == 1){
		return n;
	}
	return fibonacci_method2(n-1) + fibonacci_method2(n-2);
}

// main function to call above defined function.
int main () {

   // a pointer to an int.
   int *p;
	int n,m;
	cout<<"Enetr n: ";
	cin>>n;
   p = fibonacci_method1(n);
   
   for ( int i = 0; i < n;i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
	
for(int i=0;i<n;i++){
	cout<<"  "<<fibonacci_method2(i);
}
   
   return 0;
}

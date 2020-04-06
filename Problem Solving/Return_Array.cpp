
#include <iostream>
#include <ctime>
#define N 100
using namespace std;

// function to generate and retrun random numbers.
int * getRandom(int n) {

   static int  f[N];

  f[0] = 0;
  f[1] = 1;
  
  for(int i=2;i<n;i++){
  	f[i] = f[i-1] + f[i-2];
  }
  

   return f;
}

// main function to call above defined function.
int main () {

   // a pointer to an int.
   int *p;
	int n;
	cout<<"Enetr n: ";
	cin>>n;
   p = getRandom(n);
   
   for ( int i = 0; i < n;i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }

   return 0;
}

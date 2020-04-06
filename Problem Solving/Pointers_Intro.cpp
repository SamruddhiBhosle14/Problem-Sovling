//Introduction to pointers
#include<iostream>
using namespace std;

int main(){
	int k = 38;
	int *p = &k;
	
	cout<<"Value of k is: "<<k;
	cout<<endl;
	cout<<"Address of k is :"<<&k;
	cout<<endl;
	cout<<"value in p is: "<<p;
	cout<<endl;
	cout<<"Address of p is : "<<&p;
	cout<<endl;
	cout<<"value that p is refering to id *p: "<<*p;
	*p = 5;
	cout<<endl;
	cout<<"effect of chnage in *p on k: "<<k;
	
	/*         int *p1;
				*p1 = 4;		//ilegal: not allowed.
				cout<<*p1;
	*/
	return 0;
	
}

#include<iostream>
using namespace std;

int main(){
	int n=6;
	int num_space = 0;
//Stirng arr[100][100];
for(int i=0;i<n;i++){
    int count = 0;
    num_space = (n-1) - i;
    cout<<num_space;
    while(count != num_space){
        cout<<" ";
        count++;
    }
    while(count != n){
        cout<<"#";
        count++;
    }
    cout<<endl;
}

return 0;
}

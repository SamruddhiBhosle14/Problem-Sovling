//sprial array
#include<iostream>
#define N 50
using namespace std;



int main(){
	int m = 7, n = 5,cnt = 0;
	int arr[m][n];
	int arr2[N];	
	cout<<"Enter array elements: ";
	for(int i=0;i<m;i++){
		for(int j =0;j < n;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Matrix is: \n";
	for(int i=0;i<m;i++){
		for(int j =0;j < n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//Sprial decoding
	int top = 0, bot = m-1;
	int left = 0, right = n-1;
	
	for(int c = 0 ; c<=m/2 && c<=n/2 ; c++){
		
		for(int i = left ; i <= right ; i++)
			arr2[cnt++] = arr[top][i];
			
		for(int i = top+1;i<=bot;i++)
			arr2[cnt++]	= arr[i][right];
		
		for(int i=right-1 ; i>=left ; i--)
			arr2[cnt++] = arr[bot][i];
			
		for(int i=bot-1 ; i>=top+1 ; i--)
			arr2[cnt++] = arr[i][left];
		
		top++;bot--;right--;left++;	
	}
	
	if(top == bot && left == right)
		arr2[cnt++] = arr[top][left];
		
	if(top  < bot){
		for(int i=top;i<=bot;i++){
			arr2[cnt++] = arr[i][left];
		}
	}
	
	if(left  < right){
		for(int i=left;i<=right;i++){
			arr2[cnt++] = arr[top][i];
		}
	}
	
	
	cout<<endl;
	cout<<"Matrix is: \n";
	for(int i=0;i<cnt;i++){
		cout<<arr2[i]<<"  ";
	}
}

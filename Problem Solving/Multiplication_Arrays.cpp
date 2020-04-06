//multiplication of arrays
#include<iostream>
#define N 50
using namespace std;


int main(){
	int arr1[N][N],arr2[N][N];
	int result[N][N];
	int arr1_rows,arr1_cols,arr2_rows,arr2_cols,result_rows,result_cols;

cout<<"Enetr arr1_rows:";
cin>>arr1_rows;
cout<<"Enetr arr1_cols: ";
cin>>arr1_cols;
	cout<<"For array 1:"<<endl;
	for(int i = 0 ;i < arr1_rows ; i++){
		for(int j = 0; j < arr1_cols; j++){
			cin>>arr1[i][j];
		}
	}
	
cout<<"Enetr arr2_rows:";
cin>>arr2_rows;
cout<<"Enetr arr2_cols: ";
cin>>arr2_cols;	
	cout<<"For array 2: "<<endl;
	for(int i = 0 ;i < arr2_rows ; i++){
		for(int j = 0; j < arr2_cols; j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"Array1:"<<endl;
	for(int i = 0 ;i < arr1_rows ; i++){
		for(int j = 0; j < arr1_cols; j++){
			cout<<arr1[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"Array 2:"<<endl;
	for(int i = 0 ;i < arr2_rows ; i++){
		for(int j = 0; j < arr2_cols; j++){
			cout<<arr2[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	result_rows = arr1_rows;
	result_cols = arr2_cols;
	cout<<"Multiplication:";
	for(int i = 0 ; i < result_rows ; i++){
		for(int j=0;j<result_cols;j++){
			result[i][j] = 0;
			for(int k=0 ; k < arr1_cols ; k++){
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
			
		}
	}
	
	for(int i = 0 ; i < result_rows ; i++){
		for(int j=0;j<result_cols;j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

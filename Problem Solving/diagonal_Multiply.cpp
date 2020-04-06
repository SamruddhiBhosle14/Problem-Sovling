#include<iostream>
using namespace std;

int main(){
	int arr[10][10];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
			
		}
	}
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	
	int sum = 0,temp1=0,temp2=0,counter1 = 0,counter2 = 0;
       int diagonal1[20],diagonal2[20],size=0;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i == 0 && j == 0){
                    diagonal1[i]=arr[i][j];
                    size++;
                }else {
                        if(counter1 == 3+1 && size <= 3){
                            diagonal1[i] = arr[i][j];
                            counter1 = 0;
                        	size++; 	   
                        }
                        if(counter2 == 3-1 && size < 3){
                            diagonal2[i] = arr[i][j];
                            counter2 = 0;

                        }
                }
                counter1++;
                counter2++;
                
            }
        }
        cout<<endl;
        cout<<"Size: "<<size<<endl;
        for(int i=0 ; i<size ; i++){
        	cout<<"disgonal1: "<<diagonal1[i]<<endl;
		  	 cout<<"disgonal2: "<<diagonal2[i]<<endl;
			    temp1 = temp1 + diagonal1[i];
            temp2 = temp2 + diagonal2[i]; 
        }
        cout<<"temp1: "<<temp1<<endl;
        cout<<"temp2: "<<temp2<<endl;
        
        if(temp1>temp2){
            sum = temp1 - temp2;
        }else {
        sum = temp2 - temp1;
        }
        cout<<sum;
        return 0;
}

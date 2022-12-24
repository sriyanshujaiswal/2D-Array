#include<iostream>
using namespace std;
void Rowwisesum(int arr[][4], int i, int j){
    int sum=0;
    //cout<<"Enter the element of array: "<< endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4;j++){
            sum += arr[i][j];
        }
        cout<< "Sum row wise: "<<sum;
        cout<< endl;
    }
}

int main (){
    int arr[3][4];
    
    cout<<"Enter the element of array: "<< endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4;j++){
            cin>> arr[i][j];
        }
    }
    Rowwisesum(arr, 3,4);
    return 0; 
}
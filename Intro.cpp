#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for(int row =0; row<3; row++){
        for(int col =0 ; col<4 ; col++){
            if(arr[row][col] == target){
                return true;
            }
            else{
                return false;
            }
        }
    }
}

int main()
{
    int arr[3][4];

    //Take input like this also
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}}; 
  
    // take input -> Row wise
    for(int i =0; i<3; i++){
        for(int j =0 ; j<4 ; j++){
            cin>> arr[i][j];
        }
    }

     // Output
    for(int i =0; i<3; i++){
        for(int j =0 ; j<4 ; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
    
     // take input -> column wise
   /* for(int i =0; i<4; i++){
        for(int j =0 ; j<3 ; j++){
            cin>> arr[i][j];
        }
    }
     // Output
    for(int i =0; i<4; i++){
        for(int j =0 ; j<3 ; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
   */
   cout<<"Enter the element to search: ";
   int target;
   cin>> target;

   if(isPresent(arr, target , 3, 4)){
    cout<< "element Found";
   }
   else {
    cout<<"Not Found";
   }
   cout<< endl;

    return 0;
}
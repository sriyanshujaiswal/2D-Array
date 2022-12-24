#include<iostream>
using namespace std;

void spiralprint(int arr[][], int row, int col)
{
    int total= row * col;
    count = 0;
    
    // Index Initialization
    int startingrow=0;
    int startingcol=0;
    int endingrow= row-1;
    int endingcol= col-1;
    
    while(count< total)
    {
        // Printing starting row 
        for(int index=startingcol; count< total && index<= endingcol; index++){
            cout<< arr[startingrow][index];
            count++;
        }

        // prinnting ending column
        for(int index= startingrow; count< total&&  index<= endingrow; index++)
        {
            cout<< arr[index][endingcol];
            count++;
        }

        //printing ending row
        for(int index = endingcol; count< total && index>= startingcol; index--){
            cout<< arr[endingrow][index];
            count++;
        } 

        //printing staring column
        for(int index = endingrow; count< total&& index>= startingrow; index-- ){
            cout<< arr[index][startingcol];
            count++;
        }
    } 

}

int main(){

    return 0;
}
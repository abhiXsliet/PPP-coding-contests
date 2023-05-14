// Q : swap alterante
// https://www.codingninjas.com/codestudio/problems/swap-alternate_624941?leftPanelTab=1

#include<iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    int i = 0;
    while(i<size && arr[i+1] != NULL){
        
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

        i+=2;
    }

    // for(int i=0; i<size; i+=2){
    //     if(arr[i+1] != NULL)
    //         swap(arr[i], arr[i+1]);
    // }
}



/* 
- Find Unique element [https://bit.ly/3y01Zdu]
- Duplicates in Array [https://bit.ly/3dm6bdZ]
- Array Intersection  [https://bit.ly/3Il0c7n]
- Pair Sum            [https://bit.ly/3EwlU6e]
-(HW) Triplet sum     [https://bit.ly/3GbgVs3]
- Sort 0 1 2          [https://bit.ly/3DfQW0s]

 */

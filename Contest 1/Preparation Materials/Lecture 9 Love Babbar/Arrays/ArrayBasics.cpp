//https://www.youtube.com/watch?v=sNrLlmOIn-c


#include<iostream>
#include<array>
#include<climits>
using namespace std;

int printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void insertEle(int arr[], int n){

    cout << "\nEnter the element into the array => ";
    for(int i = 0; i<n; i++){
        cin >> arr[i] ;
    }
    cout << endl;
}

int getMin(int arr[], int size){
    int mini = INT_MAX;

    for(int i=0; i<size; i++){
        // if(arr[i] < mini){
        //     mini = arr[i];
        // }

         mini = min(mini, arr[i]);
    }
    return mini;
}

int getMax(int arr[], int size){
    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        // if(arr[i] > maxi){
        //     maxi = arr[i];
        // }

         maxi = max(maxi, arr[i]);
    }
    return maxi;
}


int sum(int arr[], int size){
    int ans = 0;

    for(int i=0; i<size; i++){
        ans += arr[i];
    }
    return ans;
}

void linearSearch(int arr[], int size){
    int x;
    cout << "\nEnter the element to search => " ;
    cin >> x;
    bool temp = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == x){
            cout << "\nElement is present at index => " << i << endl;
            temp = 1;
        }
    }

    if(temp == 0){
        cout << "\nElement is absent" << endl;
    }
}

void reverse(int arr[], int size){

    int i = 0 ;
    int j = size - 1;
    
    while(i <= j){

        swap(arr[i], arr[j]);
        // int temp = arr[i];

        // arr[i] = arr[j];
        // arr[j] = temp;
        i++;
        j--;
    }
    
    // printing from the back will reverse the array
    // for(int i=size-1; i>=0; i--){
    //     cout << arr[i] << " ";
    // }
}

int main(){
    int arr[20] = {9};
    
    for(int i=0; i<20; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;


    array<int, 20>first;
    first.fill(1);
    for(int i=0; i<20; ++i){
        cout << first[i] << " ";
    }

    //length of array
    int arrSize = sizeof(arr)/sizeof(int);
    cout << "\nSize of fifth is => " << arrSize << endl;

    //it is not possible to find the exact length of the array
    int n;
    cout << "\nEnter the size of the array => " ;
    cin >> n;

    insertEle(arr, n);
    cout << "\nMaximum element is => " << getMax(arr,n) << endl;
    cout << "\nMinimum element is => " << getMin(arr,n) << endl;
    cout << "\nPrinting the sum of given- "<<n<< " elements is => " 
    << sum(arr, n)<< endl;

    linearSearch(arr, n);

    cout << "\nPrinting the reversed array => ";
    reverse(arr, n);
    printArr(arr,n);

    cout << endl;
    return 0;
}
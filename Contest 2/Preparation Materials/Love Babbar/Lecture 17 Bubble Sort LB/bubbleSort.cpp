#include<iostream>
using namespace std;

//USE CASE: To Put the ith largest element to its correct position

//Best Case Time Complexity if array is already sorted -> O(N)
//Worst Case Time Complexity if array is in reverse order -> O(N^2)
//Space Complexity is : O(1)
void bubbleSort(int *arr, int size) {

    for(int i = 0; i < size-1; i++) {
        bool swapping = false;
        for(int j = 0; j < size-i-1; j++) {

            if(arr[j+1] < arr[j]) {
                swap(arr[j], arr[j+1]);
                swapping = true;
            }
        } 

        if(swapping == false) {
            break;
        }
    }    
}

void print(int *arr, int n) {

    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
}

void insertEle(int *a, int n) {

    cout << "\nEnter the elements of the array => ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

int main() {
    int n;
    cout << "\nEnter the size of the array => ";
    cin >> n;
    int arr[n];

    insertEle(arr, n);

    cout << "\nArray before sorting => ";
    print(arr, n);
    cout << endl;

    bubbleSort(arr, n);
    cout << "\nArray after sorting => ";
    print(arr, n);
    cout << endl;

    cout << endl;
    return 0;
}
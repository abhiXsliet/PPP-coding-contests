#include<iostream>
using namespace std;

//USE CASE : When array is small or partially sorted
//Best Case Time Complexity if array is already sorted -> O(N)
//Worst Case Time Complexity if array is in reverse order -> O(N^2)
//Space Complexity : O(1)

void insertionSort(int *arr, int size) {

    for(int i = 1; i < size; i++) {

        int temp = arr[i];

        int j = i - 1;
        for(; j>=0; j--) {

            if(arr[j] > temp) {
                arr[j+1] = arr[j]; 
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
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

    insertionSort(arr, n);
    cout << "\nArray after sorting => ";
    print(arr, n);
    cout << endl;

    cout << endl;
    return 0;
}
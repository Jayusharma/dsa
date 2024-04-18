//insertion in an array
#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int arr[], int& size, int k) {

    int value;
    cout << "Enter the value to insert: ";
    cin >> value;

    for (int i = size; i > k; i--) {
        arr[i] = arr[i - 1];
        
    }
    arr[k] = value;
    // Increment the size after insertion
    size++;
}

int main() {
     // Adjust the maximum size as needed
    int arr[100];
    int n;

    cout << "Enter the initial size of an array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Insert at index: ";
    cin >> k;

    insert(arr, n, k);
    cout<<"updated array is->";
    printArray(arr, n);

    return 0;
}


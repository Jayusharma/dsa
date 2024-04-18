//deleting in an array
#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void del(int arr[], int& size, int k) {
     
      for (int i = k; i < size; i++) {
        arr[i] = arr[i +1];
        
    }
   
    // decrement the size after deletion.
    size--;
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
    cout << "index to be deleted : ";
    cin >> k;

    del(arr, n, k);
    printArray(arr, n);

    return 0;
}


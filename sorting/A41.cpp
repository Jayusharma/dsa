#include<iostream>
using namespace std;

void merge(int* arr, int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // Fill arr1 and arr2 with values from arr
    for (int i = 0; i < len1; i++)
        arr1[i] = arr[s + i];
    for (int j = 0; j < len2; j++)
        arr2[j] = arr[mid + 1 + j];

    // Merge arr1 and arr2 back into arr
    int i = 0, j = 0, k = s;
    while (i < len1 && j < len2) {
        if (arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1 and arr2, if any
    while (i < len1) {
        arr[k++] = arr1[i++];
    }
    while (j < len2) {
        arr[k++] = arr2[j++];
    }

    // Free the dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int* arr, int s, int e) {
    // Base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // Recursively sort the left and right halves
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);


    // Merge the sorted halves
    merge(arr, s, mid, e);
}

int main() {
    int arr[6] = {1, 2, 8, 4, 0, 9};
    int size = 6;

    // Call mergeSort with the appropriate parameters
    mergeSort(arr, 0, size - 1);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

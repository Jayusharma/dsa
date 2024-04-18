//find the number of occurences of elements in an array
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[6] = {1, 2, 2, 1, 1, 3};
    int n = 6;  // Assuming you want to find occurrences in the entire array

    for (int i = 0; i < n; i++) {
        // Check for duplicates in the array before counting occurrences
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If it's a duplicate, move to the next iteration
        if (isDuplicate) {
            continue;
        }

        // Count occurrences of the current element
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Print the result
        cout << arr[i] << " occurs " << count << " times." << endl;
    }
}


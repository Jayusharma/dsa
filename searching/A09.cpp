// agressive cow problem.
#include <iostream>
#include <algorithm>

using namespace std;

bool canPlaceCows(int positions[], int n, int cows, int minDistance) {
    int lastPos = positions[0];
    int cowsPlaced = 1;

    for (int i = 0; i < n; i++) {
        if (positions[i] - lastPos >= minDistance) {
            lastPos = positions[i];
           cowsPlaced++;
           cout<<"updated position is "<<lastPos<<endl;
        cout<<"no of cows are "<<cowsPlaced<<endl;
        }
        
    }

    return cowsPlaced >= cows;
}

int aggressiveCows(int positions[], int n, int cows) {
    sort(positions, positions + n);

    int start = 0;
    int end = positions[n - 1] - positions[0];
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        cout<<"mid is "<<mid<<endl;

        if (canPlaceCows(positions, n, cows, mid)) {
            result = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        cout<<endl;
    }

    return result;
}

int main() {
    int positions[] = {1, 2, 8, 4, 9};
    int n = sizeof(positions) / sizeof(positions[0]);
    int cows ;
    cout<<"enter the number of cows: ";
    cin>>cows;

    int result = aggressiveCows(positions, n, cows);

    cout << "Maximum possible minimum distance: " << result << endl;

    return 0;
}

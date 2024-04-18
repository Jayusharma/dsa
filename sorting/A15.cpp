//rotate the array through index
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& v, int k) {
    int n = v.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = v[i];
    }

   v=temp;
}

void print(vector<int> v) {
    for (int i : v) {
       cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int k;

    cout << "Enter the index to be rotated -> ";
    cin >> k;

    // Rotated array through index.
    rotate(v, v.size() - k);

    cout << "Rotated array through index is -> ";
    print(v);

    // Rotated array through position.
    rotate(v, k);

    cout << "Rotated array through position is -> ";
    print(v);

    return 0;
}

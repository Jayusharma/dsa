//rotate the matrix by 90 degree.
#include<iostream>
#include<vector>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
//revering the matrix
int row=0;
int col=n-1;

while (row<n)
{
int start=0;
int end=n-1;
while (start<end)
{
    swap(matrix[row][start],matrix[row][end]);
    start++;
    end--;
}
row++;
}
    
}
   


int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix elements
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display original matrix
    cout << "Original matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Rotate matrix
    rotateMatrix(matrix);

    // Display rotated matrix
    cout << "Rotated matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


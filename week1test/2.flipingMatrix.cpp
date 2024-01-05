#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int flipTheMatrixAndCoutMaxSum(vector<vector<int>> matrix) {
    int n = matrix.size() / 2;
    cout<<n<<endl;
    int maxSumOfMatrix = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Find the maximum element among the four symmetric elements
            int maximumElement = max({matrix[i][j], matrix[2 * n - i - 1][j], matrix[i][2 * n - j - 1], matrix[2 * n - i - 1][2 * n - j - 1]});
            cout<<i<<" "<<j<<" "<<2 * n - i - 1<<" "<<2 * n - j - 1<<endl;
            cout<<maximumElement<<" ";
            maxSumOfMatrix += maximumElement;
        }
    }

    return maxSumOfMatrix;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        vector<vector<int>> matrix(2 * n, vector<int>(2 * n));

        for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < 2 * n; j++) {
                cin >> matrix[i][j];
            }
        }

        int result = flipTheMatrixAndCoutMaxSum(matrix);
        cout << result << endl;
    }

    return 0;
}





// 1
// 2
// 112 42 83 119
// 56 125 56 29
// 15 78 101 49
// 62 98 114 108
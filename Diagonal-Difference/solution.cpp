int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][n - 1 - i];
    }

    return abs(sum1 - sum2);
}

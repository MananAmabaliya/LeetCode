int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int ans = 0;
    for (int i = 0; i < accountsSize; i++) {
        int calulateans = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            calulateans += accounts[i][j];
        }
        if (calulateans > ans) {
            ans = calulateans;
        }
    }
    return ans;
}
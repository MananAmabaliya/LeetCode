int findLucky(int* arr, int arrSize) {
    int feq[501] = {0};

    for(int i = 0; i < arrSize; i++) {
        feq[arr[i]]++;
    }

    for(int i = 500; i >= 1; i--) {
        if(feq[i] == i) {
            return i;
        }
    }
    return -1;
}
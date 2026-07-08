double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int size = nums1Size + nums2Size;
    int* sortary = (int*)malloc(size * sizeof(int));
    int i = 0, j = 0, k = 0;
    double m;

  
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            sortary[k++] = nums1[i++];
        } else {
            sortary[k++] = nums2[j++];
        }
    }

    while (i < nums1Size) {
        sortary[k++] = nums1[i++];
    }
    while (j < nums2Size) {
        sortary[k++] = nums2[j++];
    }    

    if(size%2==0){
        m= (sortary[size/2 -  1] + sortary[size/2]) / 2.0;    
    }

    else{
        m = sortary[size/2];
    }

    return m;
}
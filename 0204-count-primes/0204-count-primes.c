#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int countPrimes(int n) {
    if (n <= 2) return 0;

    bool *composites = (bool *)calloc(n, sizeof(bool)); 
    int limit = (int)sqrt(n);

    for (int i = 2; i <= limit; i++) {
        if (composites[i] == false) {
            for (int j = i * i; j < n; j += i) {
                composites[j] = true;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {  
        if (composites[i] == false) {
            count++;
        }
    }

    free(composites);  
    return count;
}

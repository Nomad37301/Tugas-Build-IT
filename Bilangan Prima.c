#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int isPrime(int gita) {
    if (gita <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= gita; i++) {
        if (gita % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int gita;
    scanf("%d", &gita);
    
    if (isPrime(gita)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compareStrings(char *A, char *B) {
    if (strcmp(A, B) == 0) {
        return 1; 
    } else if (strlen(A) == strlen(B)) {
        return 2; 
    } else {
        return 3; 
    }
}

int main() {
    char A[101], B[101];
    
    scanf("%s", A);
    scanf("%s", B);
    
    int result = compareStrings(A, B);
    
    if (result == 1) {
        printf("IDENTIK\n");
    } else if (result == 2) {
        printf("MIRIP\n");
    } else {
        printf("BERBEDA\n");
    }
    
    return 0;
}

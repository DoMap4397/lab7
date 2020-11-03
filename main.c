#include <stdio.h>

int main() {
    int i, j, k, max;
    max=6;
    for (i=0, j=max; i<=max; i++, j--) {
        printf("\n");
        for (k=0; k<=j; k++) {
            printf("\t *\t");
        }
    }
}

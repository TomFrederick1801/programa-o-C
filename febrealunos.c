#include <stdio.h>

int main() {
    float temp1, temp2;
    scanf_s("%f %f", &temp1, &temp2);
    if (temp1 < 37.0 && temp2 < 37.0) {
        printf("ANFIBIO\n");
    }
    else if (temp2 < 37.0) {
        printf("NORMAL\n");
    }
    else if (temp2 > temp1) {
        printf("FEBRE SUBIU\n");
    }
    else if (temp2 == temp1) {
        printf("FEBRE MANTEVE\n");
    }
    else {
        printf("FEBRE BAIXOU\n");
    }
    return 0;
}

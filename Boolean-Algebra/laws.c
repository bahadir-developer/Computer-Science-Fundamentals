#include <stdio.h>
#include <stdbool.h>

void associativity_law(bool A, bool B, bool C) {
    if (A || (B || C)) {
        printf("Associativity law is working");
    }

    if ((A || B) || C) {
        printf("Associativity law is working");
    }

    if (A || B || C) {
        printf("Associativity law is working");
    }

    // A && (B && C) is equivalent to (A && B) && C is equivalent to A && B && C
}

void distributivity_law(bool A, bool B, bool C) {
    if ((A && B) || (A && C)) {
        printf("Distributivity law is working");
    }

    if (A && (B || C)) {
        printf("Distributivity law is working");
    }

    // (A && B) || (A && C) is equivalent to A || (B && C)
}

void deMorgan_law(bool A, bool B) {
    if (!A && !B) {
        printf(" De Morgan law is working");
    }

    if (!(A || B)) {
        printf("De Morgan law is working");
    }

    // !A && !B is equivalent to !(A || B)
}

int main() {
    associativity_law(true, true, true);
    distributivity_law(true, false, true);
    deMorgan_law(false, false);
    return 0;
}
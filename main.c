#include <stdio.h>
#include <stdbool.h>

int implication_check(bool raining) {
    //implication check
    if (raining) {
        printf("The ground is getting wet", "\n");
    }
    return 0;
}

int contrapositive_check(char ) {
    if () {

    }

    return 0;
}

int biconditional_check(char role[0]) {
    //biconditional check
    if (role == "admin") {
        printf("You successfully logged in admin panel", "\n");
    }
    return 0;
}

int main() {
    implication_check(true);
    printf("");

    contrapositive_check();
    printf("");

    biconditional_check("user");
    return 0;
};

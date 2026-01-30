#include <stdio.h>
#include <stdbool.h>

void implication_check(bool raining) {
    if (raining) {
        printf("The ground is getting wet ");
    }

    // (A -> B)
}

void contrapositive_check(const char role[0]) {
    bool isLogin = false;
    if (role == "admin") {
        isLogin = true;
    }

    if (!isLogin) {
        role = "user";
    }

    // (A -> B) == (!A -> !B)
}

void biconditional_check(const char role[0]) {
    if (role == "admin") {
        printf("You successfully logged ");
    }

    // (A -> B, B -> A)     (A <-> B)
}

int main() {
    implication_check(true);

    contrapositive_check("admin");

    biconditional_check("admin");
    return 0;
};

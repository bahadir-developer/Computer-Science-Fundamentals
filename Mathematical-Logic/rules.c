#include <stdio.h>
#include <stdbool.h>

void implication_check(bool is_rainy) {
    if (is_rainy) {
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

    // (A -> B) == (!B -> !A)
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

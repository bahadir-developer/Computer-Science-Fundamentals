#include <stdio.h>
#include <stdbool.h>

void implication_check(bool raining) {
    //implication check        (A -> B)
    if (raining) {
        printf("The ground is getting wet ", "\n");
    }
}

void contrapositive_check(const char role[0]) {
    bool isLogin = false;
    //contrapositive_check       (A -> B) == (!A -> !B)
    if (role == "admin") {
        isLogin = true;
    }

    if (!isLogin) {
        role = "user";
    }
}

void biconditional_check(const char role[0]) {
    //biconditional check          (A -> B, B -> A)     (A <-> B)
    if (role == "admin") {
        printf("You successfully logged ", "\n");
    }
}

int main() {
    implication_check(true);

    contrapositive_check("admin");

    biconditional_check("admin");
    return 0;
};

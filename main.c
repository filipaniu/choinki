#include <stdio.h>

int rysujChoinke(int n) {
    for (int i = 0; i <= n; ++i) {
        for (int s = 0; s < n - i; ++s) {
            printf(" ");
        }
        for (int f = 0; f < i + i; ++f) {
            printf("*");
        }
        printf("\n");
    }

}

int main() {
    rysujChoinke(7);
    printf("Hello!\n");
    return 0;
}

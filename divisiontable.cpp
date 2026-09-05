#include <cstdio>
 
int main() {
    printf("%-8s", " ");
    for (int x = 1; x <= 10; x++)
        printf("%-8d", x);
    printf("\n");
 
    for (int i = 1; i <= 10; i++) {
        printf("%-8d", i);
        for (int y = 1; y <= 10; y++) {
            printf("%-8.2f", (float)i / y);
        }
        printf("\n");
    }
 
    return 0;
}

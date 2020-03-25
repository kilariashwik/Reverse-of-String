#include <stdio.h>
#include <string.h>

void reverse(char *str, char b, char d) {
    while (b < d) {
        d--;
        char value = str[b];
        str[b] = str[d];
        str[d] = value;
        b++;
    }
}

void rotation (char *str, char a) {
    char z = strlen(str);
    a %= z;
    reverse(str, 0, a);
    reverse(str, a, z);
    reverse(str, 0, z);
}

static char f[100];
int main(void) {
    printf("Enter a string and a value to rotate it left.\n");
    printf("> ");

    while (scanf("%s", f) == 1) {
        char a;
        scanf("%s", &a);
        rotation (f, a);
        printf("%s\n", f);
        printf("> ");
    }

    return 0;

} 
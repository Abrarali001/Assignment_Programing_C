#include <stdio.h>

int main() {
    char character;

    printf("\n\n\nEnter any character: ");
    scanf("%c", &character);

    printf("\n   ASCII Value of %c character is: %d\n", character, character);

    return 0;
}

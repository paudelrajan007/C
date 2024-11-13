//use chatgpt
#include <stdio.h>
#include <string.h>

void Namaste();
void Bonjour();

void Namaste() {
    printf("Namaste India & Nepal\n");
}

void Bonjour() {
    printf("Bonjour France\n");
}

int main() {
    char ch[20];
    printf("Enter 'Indian' if you are Nepali or Indian or 'French' if you are from France: ");
    scanf("%s", ch);

    if (strcmp(ch, "Indian") == 0 || strcmp(ch, "Nepali") == 0) {
        Namaste();
    } else if (strcmp(ch, "French") == 0) {
        Bonjour();
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

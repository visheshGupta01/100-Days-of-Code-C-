#include <stdio.h>

int main()
{
    char character;

    printf("Enter an alphabet: ");

    scanf("%c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        printf("%c is a vowel.\n", character);
    }
    else
    {

        printf("%c is a consonant.\n", character);
    }

    return 0;
}
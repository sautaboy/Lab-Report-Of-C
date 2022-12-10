// Write a Program To Find Ascii Code Of Any Character

#include <stdio.h>
int main()
{
    char charcter;
    printf("Enter any Character,You Want");
    scanf("%c", &charcter);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", charcter, charcter);

    return 0;
}

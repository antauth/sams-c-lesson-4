/* Change listing 4.1 so that it counts upwards instead of downwards */
/* Demos unary operator prefix and postif modes */

#include <stdio.h>

int a, b;

int main(void)
{
    // Sets a and b to 0 and start
    a = b = 0;

    // Start with the incremental operator
    // Print them, incrementing each time.
    // Use prefix mode for b, postfix for a

    printf("Count down!\n");
    printf("Post    Pre\n");
    printf("%d       %d\n", a--, --b);
    printf("%d       %d\n", a--, --b);
    printf("%d       %d\n", a--, --b);
    printf("%d       %d\n", a--, --b);
    printf("%d       %d\n", a--, --b);

    printf("\nCurrent values of a and b:\n");
    printf("%d       %d\n\n", a, b);

    printf("Count up!\n");
    printf("Post    Pre\n");
    printf("%d       %d\n", a++, ++b);
    printf("%d       %d\n", a++, ++b);
    printf("%d       %d\n", a++, ++b);
    printf("%d       %d\n", a++, ++b);
    printf("%d       %d\n", a++, ++b);

    return 0;
}

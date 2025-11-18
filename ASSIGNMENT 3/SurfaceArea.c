#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n%10 String Length %10\n");
    char S[50];

    printf("Enter the string: ");
    scanf("\n%s", &S);
    printf("The length of the string %s entered is %zu",S,strlen(S));

    return 0;
}

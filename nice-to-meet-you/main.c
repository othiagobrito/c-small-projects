#include <stdio.h>

int main()
{
    char name[80];

    printf("Write your name: ", name);
    scanf("%s", name);
    printf("Nice to meet you %s", name);

    return 0;
}

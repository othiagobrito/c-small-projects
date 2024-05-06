#include <stdio.h>

int sumArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

int main()
{
    int numbers[] = {1, 2, 3};
    printf("Result: %d", sumArray(numbers, sizeof(numbers) / sizeof(numbers[0])));

    return 0;
}

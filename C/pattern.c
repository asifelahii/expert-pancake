#include <stdio.h>

void printPattern(int n) 
{
    int size = 2 * n - 1;
    int matrix[size][size];

    // Fill the matrix layer by layer
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < size - i; j++) 
        {
            for (int k = i; k < size - i; k++)
                matrix[j][k] = n - i;
        }
    }

    // Print the matrix
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
            printf("%d ", matrix[i][j]);
        
        printf("\n");
    }
}

int main() 
{
    int n;
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
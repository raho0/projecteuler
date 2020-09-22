#include <stdio.h>

int main()

{
    unsigned long long i,j,matrix[21][21];


    for (i=0; i<21; i++)
    {
        matrix[0][i] = 1;
        matrix[i][0] = 1;
    }

    for (i=1; i<21; i++)
        for (j=1; j<21; j++)
            matrix[i][j]=matrix[i][j-1] + matrix[i-1][j];

    printf("%llu ",matrix[20][20]);

    return 0;
}
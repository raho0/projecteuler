#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, sum1=0, sum2=0;

    for(i=1; i<=100; i++)  //Karelerin toplamı
        sum1+= pow(i,2);

    for(j=1; j<=100; j++) //toplamlar
        sum2 += j;

    sum2 = sum2 * sum2; //toplamların karesi
    printf(">> %d ", sum2-sum1);

    return 0;
}
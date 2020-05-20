
/*

d(n), n’in tam bölenlerinin toplamı olarak tanımlansın.
a ≠ b iken, eğer d(b) = a ve d(a) = b oluyorsa, a ve b bağdaşık sayı olarak adlandırılır.

Örneğin, 220’nin tam bölenleri 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 ve 110’dur; O zaman d(220) = 284.
284’ün tam bölenleri 1, 2, 4, 71 ve 142 ‘dir; O zaman d(284) = 220.

10000’den küçük tüm bağdaşık sayıların toplamını hesaplayın.

*/

#include <stdio.h>

int test (int);

int main()
{
    int i,sum=0,a,b;

    for (i=1; i<10000; i++)
    {
        a = test(i);
        b = test(a);

        if (i==b && a != b)
            sum += a;
    }

    printf("%d ",sum);

    return 0;
}

int test (int x)
{
    int divisors=1, sum=0, i;

    for (divisors = 1; divisors < x; divisors++)
        if(x % divisors == 0)
            sum += divisors;

    return sum;
}

#include <stdio.h>
int main()
{
    long long int sayi=600851475143,enbuyuk;
    int bolum=2;
    while(sayi!=0)
    {
        if (sayi % bolum !=0)
            bolum += 1;
        else
        {
            enbuyuk  = sayi;
            sayi = sayi / bolum;
            if (sayi == 1)
            {
                printf("En buyuk asal carpan >> %lli", enbuyuk);
                break;
            }
        }
    }
    return 0;
}
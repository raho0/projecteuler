#include <stdio.h>

int point(int);

int main()
{
    int i;

    for(i=2; ; i++) //sonsuz döngü
        if (point(i)==1)
        {
            printf("%d", i);
            break;
        }
}

int point(int x)
{
    int i;

    for(i=1; i<=20; i++) //kalansız bölen testi
        if(x%i!=0)
            return 0;

    return 1;
}
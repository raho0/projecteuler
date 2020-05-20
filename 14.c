#include <stdio.h>

unsigned long db(unsigned long);
unsigned long sg(unsigned long);

int main()
{
    unsigned long i,j=1000000,s=1,x=1,max=0;

    while (i>=1)
    {
        i = j;

        while(1)
        {
            if (j == 1)
                break;
            if (j % 2 == 0)
                j = db(j);
            else
                j = sg(j);
            s++;
        }

        if(s > x)
        {
            x = s;
            max=i;
        }

        s=1;
        i--;
        j = i;

    }

    printf("%lu ", max);
    printf("\n%lu ",x);

    return 0;
}

unsigned long db(unsigned long x)
{
    return x/2;
}

unsigned long sg(unsigned long x)
{
    return 3*x+1;
}
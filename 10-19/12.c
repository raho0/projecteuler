#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long i=1,j,s=0,t=0;

    while(1)
    {
        s = ((i*i)+i)/2;

        for (j=2; j<=sqrt(s); j++)
            if (s % j == 0)
                j == sqrt(s) ? (t++) : (t += 2);

        if(t>500)
            break;
        else
            t=2;

        i++;
    }

    printf("%lu ",s);

    return 0;
}
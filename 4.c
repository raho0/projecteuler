#include <stdio.h>

int test(int);

int main()
{
    int i, j, temp=1;

    for (i=999; i>900; i--)
        for (j=999; j>900; j--)
            if(test(i*j)==1)
                if (i*j>temp)
                    temp = i*j;

    printf("%d ",temp);

    return 0;
}

int test(int x)
{
    int i,j,list[6];

    //Sayıyı listeye dönüştürerek basamak değerlerine erişim
    for (i=5; i>=0; i--)
    {
        list[i] = x%10;
        x/=10;
    }

    //Sayının basamak değerlerinin eşitliği kontrolü
    for (j=0; j<6; j++)
        if(list[j] != list[5-j])
            return 0;

    return 1;
}
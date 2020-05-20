#include <stdio.h>
#include <string.h>

int len(int );

int main()
{
    int i, count = 0;

    for (i=1; i<=1000; i++)
        count+= len(i);

    printf("%d \n", count);

    return 0;
}

int len(int x)
{
    int count = 0 , hundred = 7, hundredand = 10, thousand = 8;

    char *first[10] = { "", "one", "two", "three", "four", "five","six", "seven", "eight", "nine" };
    char *teens[10] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char *tens[10] = { "", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

    if (x < 10)
        count += strlen(first[x] );

    if (x >= 10 && x < 20)
        count += strlen( teens[x%10] );

    if ( x <100 && x >= 20)
        count += strlen( tens[x/10] ) + strlen( first[x%10] );

    if (x < 1000 & x >= 100)
    {
        count += strlen( first[x/100] );

        if (x % 100 == 0)
            count += hundred;

        else
            {
                x = x % 100;
                count += hundredand;

                if (x < 20 && x >= 10)
                    count += strlen( teens[x%10] );

                else if( x < 10)
                    count += strlen(first[x] );

                else
                {
                    count += strlen(tens[x / 10]);
                    count += strlen(first[x % 10]);
                }

            }
    }

    if (x == 1000)
        count += strlen( first[x/1000] ) + thousand;

    return count;
}
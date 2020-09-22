/*
    1 Ocak 1900, Pazartesi gününe denk gelmişti.
    Eylül, Nisan, Haziran ve Kasım ayları 30 günden, diğer aylar 31 günden oluşur. Şubat, diğer aylardan farklı olarak 28 günden ve artık yıllarda 29 günden oluşur.
    4 ile bölünebilen yıllar artık yıldır, ancak yüzyıllar 400 ile bölünemiyorsa artık yıl değildir
    20. Yüzyıl'da (1 Ocak 1901 - 31 Aralık 2000 arası), Pazar günü kaç kez herhangi bir ayın ilk gününe denk gelmiştir ?
*/

#include <stdio.h>

int main()
{
    int month, day, year , dayofmonth=30,dayofyear=1,count=0;
    char *days[7] = {"sunday","monday","tuesday","wednesday", "thursday", "friday", "saturday" };

    for (year = 1900; year<=2000; year++)
        for (month = 1; month<=12; month++)
            for (day = 1; day<=dayofmonth; day++)
            {
                if (month == 9 || month ==4 || month == 6 || month == 11)
                    dayofmonth = 30;

                else if (month == 2)
                {
                    if ((year%4 == 0 && year%100 != 0) || year%400 == 0) //artık yıl testi
                        dayofmonth =29;
                    else
                        dayofmonth = 28;
                }

                else
                    dayofmonth = 31;

                if ( year >= 1901)
                {
                    if(days[dayofyear%7] == "sunday" && day == 1)
                    {
                        printf("%d ",day);
                        printf("%d ",month);
                        printf("%d ",year);
                        printf("%s ",days[dayofyear%7]);
                        printf("\n ");
                        count++;
                    }
                }

                dayofyear++;
                if (dayofmonth == 29) //artık yıllarda bir  yıl 366 gündür.
                    if (dayofyear == 366)
                        dayofyear = 1;

                 if ( dayofyear == 365)
                     dayofyear=1;
            }

    printf("%d ", count);
    return 0;
}
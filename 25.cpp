#include <iostream>

using namespace std;

int main()
{
    float f1 = 1.0, f2 = 1.0;
    int counter=2, digit=1;

    while (1)
    {
        f1 += f2;
        f2 += f1;
        counter += 2;

        if (f1 >= 10 || f2 >= 10) //eğer sayılar 10 u geçerse bir virgul sağa kaydırıp basamak değerini bir arttırıyoruz.
        {
            f1 /= 10;
            f2 /= 10;
            digit++;
        }

        cout << f1 << " ";
        cout << f2 << " ";
        cout << counter << " ";
        cout << "\tbasamak degerleri >> " << digit << endl;

        if (digit == 1000)
            break;
    }
    return 0;
}


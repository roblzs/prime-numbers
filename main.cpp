#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n)
{
    bool isPrime = true;
    if (n == 0 || n == 1)
    {
        isPrime = false; // 0 un 1 nav pirmskaitļi
    }
    else
    {
        int i = 0;
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main()
{
    int ok;
    do
    {
        int m, n;
        cout << "Ievadiet intervāla sākumpunktu (), N >= 1: " << endl;
        cin >> m;

        while (m < 1)
        {
            cout << "Mēģini vēlreiz: ";
            cin >> m;
        }

        cout << "Ievadiet intervāla beigu punktu, N >= 1 : " << endl;
        cin >> n;

        while (n <= m)
        {
            cout << "Mēģini vēlreiz, N > M: ";
            cin >> n;
        }

        bool has_prime = false;

        string primes = "Pirmskaitli: ";

        while (m <= n)
        {
            if (isPrime(m))
            {
                primes.append(to_string(m));
                primes.append(" ");

                if (!has_prime)
                {
                    has_prime = true;
                }
            }
            m++;
        }

        if (has_prime)
        {
            cout << primes;
        }
        else
        {
            cout << "Intervālā nebija pirmskaitļu";
        }

        cout << endl;
        cout << endl;
        cout << "Vai turpināt (1) vai beigt (0) ?" << endl;
        cin >> ok;
    } while (ok == 1);
}
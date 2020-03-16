#include <iostream>
using namespace std;


int PrimeNumber(int n)
{
    bool primeNum = true;
    for (int i = 2; i <=n/2; i++) {
        if (n % i == 0)
        {
            primeNum = false;
            break;
        }
    }

}

int main()
{
    bool primeNum;  ///boolean value for the prime number
    cout << "Outputting all prime numbers up to 1000" << endl;
    cout << endl;
    cout << endl;
    for (int n = 2; n < 1000; n++)   ///Generates numbers to 1000 starting at 2
    {
        primeNum = PrimeNumber(n);

        if (primeNum == true)

            cout << n << " ";
    }
    return 0;
}




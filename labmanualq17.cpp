#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        cout << "Perfect Number\n";
    else
        cout << "Not a Perfect Number\n";

    int temp = n, digits = 0;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    int armstrongSum = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        armstrongSum += pow(rem, digits);
        temp /= 10;
    }

    if (armstrongSum == n)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
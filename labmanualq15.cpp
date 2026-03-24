#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num, max;
    cin >> max;

    for (int i = 1; i < n; i++)
    {
        cin >> num;
        if (num > max)
            max = num;
    }

    cout << "Largest = " << max;

    return 0;
}
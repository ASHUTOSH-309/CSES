#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    long long temp;
    int arr[n + 1] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        arr[temp] = 1;
    }

    for (long long i = 1; i <= n; i++)
    {

        if (arr[i] == 0)
        {
            cout << i;
            break;
        }
    }
}
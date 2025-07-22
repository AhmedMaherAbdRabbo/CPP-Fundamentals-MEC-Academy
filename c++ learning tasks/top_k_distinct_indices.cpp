#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int rait[n];
    int ind[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> rait[i];
        ind[i] = i + 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (rait[ind[j] - 1] < rait[ind[j + 1] - 1])
            {
                int temp = ind[j];
                ind[j] = ind[j + 1];
                ind[j + 1] = temp;
            }
        }
    }

    int select[k];
    bool flag[n] = {false};

    int account = 0;
    for (int i = 0; i < n; i++)
    {
        if (!flag[ind[i] - 1])
        {
            select[account++] = ind[i];
            flag[ind[i] - 1] = true;
        }
        if (account == k)
            break;
    }

    if (account < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << select[i] << " ";
        }
    }

    return 0;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char sizeA = a.back();
        char sizeB = b.back();
        int countA = a.size() - 1;
        int countB = b.size() - 1;
        int valueA, valueB;

        if (sizeA == 'S')
        {
            valueA = -1 * (countA + 1);
        }
        else if (sizeA == 'M')
        {
            valueA = 0;
        }
        else 
        {
            valueA = countA + 1;
        }

        if (sizeB == 'S')
        {
            valueB = -1 * (countB + 1);
        } else if (sizeB == 'M')
        {
            valueB = 0;
        }
        else
        {
            valueB = countB + 1;
        }

        if (valueA < valueB)
        {
            cout << "<" << endl;
        }
        else if (valueA > valueB)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}

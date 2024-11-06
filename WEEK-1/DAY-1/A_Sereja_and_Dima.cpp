#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int serejaScore = 0, dimaScore = 0;
    int left = 0, right = n - 1;
    for (int i = 0; left <= right; i++)
    {
        if (ar[left] > ar[right])
        {
            if (i % 2 == 0)
            {
                serejaScore += ar[left];
            }
            else
            {
                dimaScore += ar[left];
            }
            left++;
        }
        else
        {
            if (i % 2 == 0)
            {
                serejaScore += ar[right];
            }
            else
            {
                dimaScore += ar[right];
            }
            right--;
        }
    }
    cout << serejaScore << " " << dimaScore << endl;

    return 0;
}

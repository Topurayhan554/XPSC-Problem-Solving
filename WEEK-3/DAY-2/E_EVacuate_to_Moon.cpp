#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, H;
        cin >> N >> M >> H;
        vector<int> A(N);
        vector<int> B(M);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        for (int j = 0; j < M; ++j)
        {
            cin >> B[j];
        }
        vector<int> energyProduced(M);
        for (int j = 0; j < M; ++j)
        {
            energyProduced[j] = B[j] * H;
        }
        sort(energyProduced.rbegin(), energyProduced.rend());
        sort(A.rbegin(), A.rend());
        long long totalEnergy = 0;
        int carIndex = 0;

        for (int j = 0; j < M && carIndex < N; ++j)
        {
            if (energyProduced[j] > 0)
            {
                totalEnergy += min(A[carIndex], energyProduced[j]);
                carIndex++;
            }
        }
        cout << totalEnergy << endl;
    }
    return 0;
}

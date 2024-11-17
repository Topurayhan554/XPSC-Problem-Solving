#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    unordered_map<string, list<string>::iterator> programMap;
    list<string> programOrder;
    for (int i = 0; i < N; ++i)
    {
        string program;
        cin >> program;
        if (programMap.find(program) != programMap.end())
        {
            programOrder.erase(programMap[program]);
        }
        programOrder.push_front(program);
        programMap[program] = programOrder.begin();
    }
    string output;
    for (const string& prog : programOrder)
    {
        output += prog.substr(prog.size() - 2);
    }
    cout << output << endl;
    return 0;
}

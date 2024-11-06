#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    cin.ignore();
    unordered_map<string, string> current_to_original;
    unordered_map<string, string> original_to_current;

    for (int i = 0; i < q; i++)
    {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;
        string original_handle;
        if (current_to_original.find(old_handle) != current_to_original.end())
        {
            original_handle = current_to_original[old_handle];
        }
        else
        {
            original_handle = old_handle;
        }
        current_to_original.erase(old_handle);
        current_to_original[new_handle] = original_handle;
        original_to_current[original_handle] = new_handle;
    }

    cout << original_to_current.size() << endl;
    for (const auto& entry : original_to_current)
    {
        cout << entry.first << " " << entry.second << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int intended_position = 0;
    for (char c : s1)
    {
        if (c == '+')
        {
            intended_position++;
        } else if (c == '-')
        {
            intended_position--;
        }
    }
    int partial_position = 0;
    int count_question_marks = 0;
    for (char c : s2)
    {
        if (c == '+')
        {
            partial_position++;
        } else if (c == '-')
        {
            partial_position--;
        } else if (c == '?')
        {
            count_question_marks++;
        }
    }
    if (count_question_marks == 0)
    {
        if (intended_position == partial_position)
        {
            cout << fixed << setprecision(12) << 1.0 << endl;
        }
        else
        {
            cout << fixed << setprecision(12) << 0.0 << endl;
        }
        return 0;
    }
    int difference = intended_position - partial_position;
    if ((difference + count_question_marks) % 2 != 0 
    || abs(difference) > count_question_marks)
    {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }
    int plus_moves_needed = (difference + count_question_marks) / 2;
    if (plus_moves_needed < 0 || plus_moves_needed > count_question_marks)
    {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }
    double total_ways = pow(2, count_question_marks);
    double valid_ways = 1;
    for (int i = 0; i < plus_moves_needed; ++i)
    {
        valid_ways *= (count_question_marks - i);
        valid_ways /= (i + 1);
    }
    double probability = valid_ways / total_ways;
    cout << fixed << setprecision(12) << probability << endl;
    return 0;
}

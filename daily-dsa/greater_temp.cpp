#include <bits/stdc++.h>

using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    size_t n = temperatures.size();
    stack<int> st;
    vector<int> result(n, 0);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && temperatures[st.top()] < temperatures[i])
        {
            result[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }

    return result;
}

int main()
{
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = dailyTemperatures(temperatures);

    for (int days : result)
    {
        cout << days << " ";
    }
    cout << endl;

    return 0;
}
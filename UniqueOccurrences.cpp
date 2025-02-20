#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> freq;
    unordered_set<int> occur;

    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    for (auto pair : freq)
    {
        occur.insert(pair.second);
    }

    return occur.size() == freq.size();
}

int main()
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << boolalpha; 
    cout << "Unique occurrences? " << uniqueOccurrences(arr) << endl;

    return 0;
}
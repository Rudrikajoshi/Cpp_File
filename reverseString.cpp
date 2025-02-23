#include<bits/stdc++.h>
using namespace std;

void  reverseString(vector<char>& s){
    int start = 0, end = s.size() - 1;

    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main(){
    vector<char> S = {'H', 'E', 'L', 'L', 'O'};
    reverseString(S);

    for(char c : S){
        cout << c;
    }
    return 0;
}
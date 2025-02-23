#include <bits/stdc++.h>
using namespace std;

bool vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

string reverseVowel(string s)
{
    int left = 0, right = s.length() - 1;

   while(left < right){
    if(!vowel(s[left])){
        left++;
    }
    else if(!vowel(s[right])){
        right--;
    }
    else{
        swap(s[left], s[right]);
        left++;
        right--;
    }
   }
   return s;
}

int main(){
    string s = "mutable";
    cout << reverseVowel(s) << endl;

    string r = "leetcode";
    cout << reverseVowel(r) << endl;

    string u = "hello";
    cout << reverseVowel(u) << endl;
}
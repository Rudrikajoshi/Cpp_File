#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
    unordered_set<int> set1(nums1.begin(), nums2.end());
    unordered_set<int> result;

    for(int num : nums2){
        if(set1.count(num)){
              result.insert(num);
        }
    }
    return vector<int>(result.begin(), result.end());
}

int main(){
   int n, m;

   cout << "Enter size of nums1 : ";
   cin>>n;
   vector<int> nums1(n);

   cout<< "Enter elements of nums1 :";
   for(int i = 0; i<n; i++){
    cin >> nums1[i];
   }

   cout << "Enter size of nums2 : ";
   cin>>m;
   vector<int> nums2(m);

   cout<< "Enter elements of nums2 :";
   for(int i = 0; i<m; i++){
    cin >> nums2[i];
   }

   vector<int> ans = intersection(nums1, nums2);

   cout << "Intersection elements : ";
   for(int num : ans){
    cout << num << " ";
   }
   cout << endl;

   return 0;
}
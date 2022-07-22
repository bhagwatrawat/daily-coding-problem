#include <bits/stdc++.h> 
 using namespace std; 
    bool checkPalindrome(string s){
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
 int main(){
    int n;
    cin>>n;
    vector<string> v1(n);
    unordered_map<string,int> m;
   for(int i=0; i<n; i++){
    cin>>v1[i];
    m[v1[i]]=i;
   }
   for(int i=0; i<n; i++){
     string prefix= 
   }
} 
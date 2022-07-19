#include <bits/stdc++.h> 
 using namespace std; 
// we make a frequency dictionary 
// of both the initial window and the target word. As we move along the string, we 
// increment the count of each new character and decrement the count of the old. If at 
// any point there is no difference between the frequencies of the target word and the 
// current window, we add the corresponding starting index to our result.
 int main(){
    string s;
    string w;
    cin>>w;
    cin>>s;
    int n=s.length();
    int m=w.length();
    vector<int> result;
    unordered_map<char,int> mw;
   for(int i=0;i<m;i++){
    mw[w[i]]--;
    mw[s[i]]++;
    if(mw[s[i]]==0) mw.erase(s[i]);
   }
   if(mw.empty()){
    result.push_back(0);
   }
  
   for(int i=m;i<n;i++){
        char start = s[i-m];
        char end = s[i]; 
        mw[start]--;
        if(mw[start]==0) mw.erase(start);
        mw[end]++;
        if(mw[end]==0) mw.erase(end);
        if(mw.empty()){
            result.push_back(i-m+1);
        }
   }
   for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
   }
} 
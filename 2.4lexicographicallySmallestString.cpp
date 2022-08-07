#include <bits/stdc++.h> 
 using namespace std; 

 int main(){
  string s;
  int k;
  cin>>s>>k;
    int n=s.length();
    string res="";
    if(k==1){
        res=s;
        for(int i=0;i<n;i++){
            res= min(res,s.substr(i,n)+s.substr(0,i));
        }
        cout<<res<<endl;
    }
    else {
        sort(s.begin(),s.end());
        cout<<s;
    }
    return 0;
} 
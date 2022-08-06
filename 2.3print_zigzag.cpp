#include <bits/stdc++.h> 
 using namespace std; 

 int main(){
    string s;
    getline(cin,s);
    int k;
    cin>>k;
    int n=s.length();
    string res="";
    for(int i=0;i<k;i++){
        int j=i;
        res+=s[j];
        while(j<n){
            int add= (k-1-i)*2;
            j+=add;
           if(add>0 && j<n){
            res+=s[j];
           }
            add= i*2;
            j+=add;
            if(add>0 && j<n){
                res+=s[j];
            }
        }
        }
        cout<<res<<endl;
    }
 
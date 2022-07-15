#include <bits/stdc++.h> 
 using namespace std; 
// by using kadanes algorithm 
 int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x=0;
    int y=0;
    for (int i=0;i<n;i++){
        if(x<0){
            x=0;
        }
        x=x+a[i];
        if(y<x){
            y=x;
        }

    }
    // TO find the maximum subarray sum that wrap around we subtract min subarray sum from the array sum
    int z=0;
    int p=0;
    for (int i=0;i<n;i++){
        if(p>0){
            p=0;
        }
        p=p+a[i];
        if(z>p){
            z=p;
        }
    } 
    // maximum subarray sum
    cout<<y<<endl;
    // minimum subarray sum
    cout<<z; 
} 
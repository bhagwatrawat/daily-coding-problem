#include <bits/stdc++.h> 
 using namespace std; 
// start from last and check how many elements before the array are smaller 

// steps involved 
// • Iterate backwards over the input list 
// • Maintain a sorted list seen of the elements we've seen so far 
// • Look at seen to see where the current element would fit in 


 int main(){
    int n;
    cin>> n;
    vector<int> a(n);
    vector<int> result(n);
    multiset<int> mul;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    reverse(a.begin(), a.end());
    for(int i=0;i<n;i++){
        mul.insert(a[i]);
        auto itr= lower_bound(mul.begin(),mul.end(),a[i]);
        // cout<<*itr<<" x ";
        result[i]= distance(mul.begin(),itr);
    }
    reverse(result.begin(), result.end());
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    

} 
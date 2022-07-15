#include <bits/stdc++.h> 
 using namespace std; 

 int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i= 0 ; i < n; i++){
        cin>>a[i];
        b[i]=a[i];
    }
    // sort the array and then check the difference between the sorted and original array
    // sort(a.begin(),a.end());
    // int start=-1;
    // int end=n-1;
    // for(int i=0 ; i < n; i++){
    //     if(a[i]!=b[i] && start==-1){
    //         start=i;
    //     }
    //     else if(a[i]!=b[i]){
    //         end=i;
    //     }
    // }


// Suppose instead that we traversed the array, from left to right, and took note of 
// whether each element was less than the maximum seen up to that point. This 
// element would have to be part of the sorting window, since we would have to move 
// the maximum element past it. 
// As a result, we can take the last element that is less than the running maximum, and 
// use it as our right bound. Similarly, for our left bound, we can traverse the array from 
// right to left, and find the last element that exceeds the running minimum. 


    int start =0;
    int end =n-1;
    int max= a[0];
    int min=a[n-1];
    for(int i=0; i<n; i++){
       if(a[i]<max){
        end=i;
       }
       else{
        max=a[i];
       }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>min){
            start=i;
        }
        else{
            min=a[i];
        }
    }
    cout<<'('<<start<<","<<end<<')'<<endl;
} 
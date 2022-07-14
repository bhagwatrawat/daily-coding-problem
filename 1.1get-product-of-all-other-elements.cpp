#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

   
    int total = 1;
    int index;
    int count_zero = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 0)
        {
            total *= a[i];
        }
        else
        {
            count_zero++;
            index = i;
        }
    }
    vector<int> b(n, 0);
    if (count_zero > 1)
    {
        // if count of zero exceed 1 then all the elements will be zero
        cout << "every element of array is zero" << endl;
    }
    else if (count_zero == 1)
    {
        // every element of array is zero except the one with zero value
        b[index] = total;
    }
    //  if division is allowed  complexity O(n);

    // else
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         b[i]=total/a[i];
    //     }
    // }

    // if division is not allowed
    // we will create two arrays of prefix and suffix products of array elements 
    else
    {
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        for(int i=0 ;i<n; i++){
            if(i>0){
                prefix[i]=prefix[i-1]*a[i];
            }
            else{
                prefix[i]=a[i];
            }
        }
        reverse(a.begin(),a.end());
        for(int i=0 ;i<n; i++){
            if(i>0){
                suffix[i]=suffix[i-1]*a[i];
            }
            else{
                suffix[i]=a[i];
            }
        }
        reverse(suffix.begin(),suffix.end());

        for(int i=0 ;i<n; i++){
            if(i==0){
                b[i]=suffix[1];
            }
            else if(i==n-1){
                b[i]=prefix[i-1];
            }
            else{
                b[i]=prefix[i-1]*suffix[i+1];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}

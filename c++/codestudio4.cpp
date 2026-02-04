#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool possiblesol(vector <int> &v,int n,int m, int mid){
    int cowcount =1;
    int lastpos = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] - lastpos >= mid)
        {
            cowcount++;
            if (cowcount==m)
            {
                return true;
            }
            lastpos= v[i];
            
        }
        
        
        
    }
    
    return false;;
    
    
    
}

int main(){
    vector <int> v;
    v = {5,2,1,3,6};
    sort(v.begin(), v.end());
    int m =2;
    int n= v.size();
    int s =0;
    int maxi =-1;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,v[i]);
    }
    int e= maxi;
    int ans=-1;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        if(possiblesol(v,n,m,mid)){
            ans =mid;
            s = mid + 1;
        }
        else
        {
            e= mid -1;
        }
        mid = s+(e-s)/2;
        

    }

    cout<< ans;
    
    
}
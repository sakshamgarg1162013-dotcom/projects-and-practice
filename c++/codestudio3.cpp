#include <iostream>
#include <vector>
using namespace std;

bool possiblesol(vector <int> v,int n,int m, int mid){
    int painter =1;
    int boardsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardsum + v[i] <= mid)
        {
            boardsum+=v[i];
        }
        else
        {
            painter++;
            if (painter>m || v[i]>mid)
            {
                return false;
            }
            boardsum = v[i];
            
        }
        
        
    }
    
    return true;
    
    
    
}

int main(){
    vector <int> v;
    v = {5,5,5,5};
    int m =2;
    int n= v.size();
    int s =0;
    int ans =-1;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    int e= sum;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        if(possiblesol(v,n,m,mid)){
            ans =mid;
            e =mid-1;
        }
        else
        {
            s=mid +1;
        }
        mid = s+(e-s)/2;
        

    }

    cout<< ans;
    
    
}
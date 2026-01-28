#include <iostream>
using namespace std;

int pivot(int arr[],int n){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
    {
        
        if (arr[mid]>=arr[0])
        {
            s =mid+1;
        }
        else{
            e=mid;
        }
    mid = s+(e-s)/2;     
        
    }
    return s;
}

int main (){
    int arr[5] = {8,9,17,1,3}; 
    cout<<pivot(arr,5);
    
    
}

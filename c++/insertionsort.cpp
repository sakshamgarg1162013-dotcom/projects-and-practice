#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> v;
    v = {64,25,12,22,11};
    for (int i = 1; i < v.size(); i++)
    {
        int temp  = v[i];
        bool swapped = false;
        int j ;
        for (j= i-1; j>=0; j--)
        {
            if (v[j]>temp)
            {
                v[j+1]=v[j];
                swapped = true;
            }
            else
            {
                break;
            }
            
            
        }
        v[j+1]=temp;
        if (swapped== false)
        {
            break;
        }
        
        
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
} 
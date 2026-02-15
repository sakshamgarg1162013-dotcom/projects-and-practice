#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> v;
    v = {64,25,12,22,11};
    for (int i = 1; i < v.size(); i++)
    {
        bool swapped = false;
        for (int j = 0; j < v.size()-i; j++)
        {
            if (v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                swapped = true;
            }
            
        }
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
#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> v;
    v = {64,25,12,22,11};
    for (int i = 0; i < v.size()-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j < v.size(); j++)
        {
            if (v[j]<v[minindex])
            {
                minindex= j;
            }
            
        }
        swap(v[minindex],v[i]);
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
}
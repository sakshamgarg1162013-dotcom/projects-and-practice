#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    
    v={1,2,3,4,5};
    int s,e;
    s=0;
    e=v.size()-1;

    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
    
    
}
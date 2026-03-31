#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> v;
    v={1,2,3,4,5};
    int k =2;
    vector <int> temp(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        temp[(i+k)%v.size()] = v[i];
    }
    v=temp;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    
}
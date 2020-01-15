#include <iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> V;
    V.push_back(2);
    V.push_back(-17);
    int a;
    cout<<"a= ";
    cin>>a;
    V.push_back(a);
    V.insert(V.begin(),56);
    cout <<V.front()<<endl;
    cout<<V.back()<<endl;
    cout<<V.at(2)<<endl;

    V.erase(V.begin()+2);

    for(int i=0; i<V.size(); i++){
         cout <<V[i]<<"  ";
    }


    return 0;
}

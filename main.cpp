#include <iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

ifstream in("duomenys.txt");
ofstream out("res.txt");

void skaitomPusinam(vector<int> &A);
void spausdink(vector<int> A, string text);
void rikiavimas(vector<int> &A);


int main()
{

    vector<int> M;

    skaitomPusinam(M);
    spausdink(M, "Nuskaite");
    rikiavimas(M);
    spausdink(M, "surikiuotas");



    in.close();
    out.close();
    return 0;
}
void skaitomPusinam(vector<int> &A){
    int a=0;
    while(!in.eof()){
        in>>a;
        A.push_back(a);
    }
}
void spausdink(vector<int> A, string text){
    out<<text<<endl;
    for(int i=0; i<A.size(); i++){
        out<<A[i]<<" ";
}
out<<endl;
}
void rikiavimas(vector<int> &A){
    int did, maz;
    did = *max_element(A.begin(),A.end());
    maz = *min_element(A.begin(),A.end());
    cout<<did<<endl;
    cout<<maz;
    sort(A.begin(),A.end());
}

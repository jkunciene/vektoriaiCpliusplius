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
void mazejimo(vector<int> &A);
void trinam(vector<int> A, vector<int> &B);

int main()
{

    vector<int> M, Ap;

    skaitomPusinam(M);
    spausdink(M, "Nuskaite");
    rikiavimas(M);
    spausdink(M, "surikiuotas didejimo");
    mazejimo(M);
    spausdink(M, "mazejimo tvarka");
    trinam(M, Ap);
    spausdink(Ap, "aptrintas");




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
void mazejimo(vector<int> &A){
    sort(A.begin(),A.end(), greater<int>());
}
void trinam(vector<int> A, vector<int> &B){
    A.erase(unique(A.begin(), A.end()), A.end());
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int N =1e5 +10;
    vector <int> freq(N,0);
     
     for(int i=0; i<n; i++){
        freq[v[i]]++;
     }

     int queries;
     cin>>queries;
     while(queries--){
        int queriesElement ;
        cin>>queriesElement;

        cout<<freq[queriesElement]<<endl;
     }
}
#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    if( n == 0 || n == 1 )
        return 1;
    else
        return n*fact(n-1);

}

vector <vector <int > > pascalTriangle(int n ){

    vector <vector <int > > pascal(n);

    for(int i = 0; i < n; i++){
        pascal[i].resize(i+1);

        for(int j=0; j <  i+1; j++)
        {
                pascal[i][j] = fact(i)/(fact(j)*fact(i-j));
        }
    }
    return pascal;
}

int main(){
    int n;

    cin>>n;

    vector <vector <int > > ans;
    ans  = pascalTriangle(n);

    
    for(int i=0; i<ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
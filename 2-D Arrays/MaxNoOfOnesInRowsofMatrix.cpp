#include<bits/stdc++.h>
using namespace std;

int maxNoOfOnes( vector <vector <int> > &vec){
    int maxOnes = INT_MIN;
    int maxOnesIndex = -1;
    int noOfOnes = 0;
    int columns = vec[0].size();

    for (int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < columns; j++){
            if(vec[i][j] == 1){
                noOfOnes = columns - j;
            }
            if(noOfOnes > maxOnes){
                maxOnes = noOfOnes;
                maxOnesIndex = i;
            }
        }

    }
    return maxOnesIndex;
}

int  main(){
    int n,m;
    cin>>n>>m;

    vector < vector <int > >  vec (n,  vector <int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }

    int res = maxNoOfOnes(vec);
    cout<<res<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int n;
    cin>>n;

    // int arr[n];
    vector<int> v(n+1,0);

    for(int i=1; i<=n; i++){
        cin>>v[i];
    }

  
    for(int i=1; i<=n; i++){
        v[i] += v[i-1];
    }

   int q;
   cout<<"enter queries";
   cin>>q;
   while(q--)
   {
    int l,r;
    cin>>l>>r;

    int ans = v[r] - v[l-1];
    cout<<ans<<endl;
   }
}*/


//using array
int main(){
    int n;
    cin>>n;

    int v[n] = {0};
    // vector<int> v(n+1,0);

    for(int i=1; i<=n; i++){
        cin>>v[i];
    }

  
    for(int i=1; i<=n; i++){
        v[i] += v[i-1];
    }

   int q;
   cout<<"enter queries";
   cin>>q;
   while(q--)
   {
    int l,r;
    cin>>l>>r;

    int ans = v[r] - v[l-1];
    cout<<ans<<endl;
   }
}

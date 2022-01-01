#include <bits/stdc++.h>
using namespace std;
  
typedef long long ll;

void solve()
{
    ll i,j;
    cin>>i>>j;
    ll MAX=max(i,j);
    ll MIN=min(i,j);
    if(MAX%2==0 && MAX==i)
    {
        
        cout<<MAX*MAX-MIN+1;
    }
    else if(MAX%2!=0 && MAX==i){
        cout<<(MAX-1)*(MAX-1)+1+MIN-1;
        
    }
    else if(MAX%2!=0 && MAX==j)
    {
        
        cout<<MAX*MAX-MIN+1;
    }
    else{
        
        cout<<(MAX-1)*(MAX-1)+1+MIN-1;
    }

    cout<<endl;
}
    

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    
    return 0;
}
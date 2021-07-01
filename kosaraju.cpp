
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define rev(i,n,a) for(ll i=n-1;i>=a;i--)
#define f first
#define s second
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpii vector<pair<int,int>>
#define vpll vector<pll>
#define pll pair<ll,ll>
#define secreterror() ios_base::sync_with_stdio(false);cin.tie(NULL);


vector<vector<ll>>adj;
vector<vector<ll>>adjrev;

vector<ll>vis;
vector<ll>ord;
vector<ll>comp;
vector<ll>res;
void dfs(ll node){
    // cout<<"here"<<endl;
    vis[node]=true;
    for(auto val:adj[node]){
        if(!vis[val]){
            dfs(val);
        }
    }
    ord.push_back(node);
}
void dfs1(ll node){
    vis[node]=true;
    comp.push_back(node);

    for(auto v:adjrev[node]){
        if(!vis[v]){
            dfs1(v);
        }
    }
}


void solve(){
    ll n,m;
    cin>>n>>m;

    adj=vector<vector<ll>>(n+1);
    adjrev=vector<vector<ll>>(n+1);


    vis=vector<ll>(n+1,0);

    // cout<<n<<" "<<m<<endl;
    ll a,b;
    for(ll i=0;i<m;i++){
        // cout<<"ahaha"<<endl;
        cin>>a>>b;
        adj[a].push_back(b);
        adjrev[b].push_back(a);
    }

    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    // cout<<"here"<<endl;
    reverse(ord.begin(),ord.end());
    vis.assign(n+1,0);
    for(auto v:ord){
        if(!vis[v]){
            dfs1(v);
            if(comp.size()!=0){
                res.push_back(comp[0]);
            }
            comp.clear();
        }
        

    }
    if(res.size()==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
        cout<<res[1]<<" "<<res[0]<<endl;
    }






}


int main()
{
    secreterror()
    // ll t;
    // cin>>t;
    //while(t--){
        solve();
        
    //}

}
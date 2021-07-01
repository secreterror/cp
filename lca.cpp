
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define rep(i,a,n) for(ll i=a;i<n;i++)
// #define rev(i,n,a) for(ll i=n-1;i>=a;i--)
// #define f first
// #define s second
// #define vll vector<ll>
// #define vvll vector<vector<ll>>
// #define vpii vector<pair<int,int>>
// #define vpll vector<pll>
// #define pll pair<ll,ll>
// #define secreterror() ios_base::sync_with_stdio(false);cin.tie(NULL);
// vector<ll>par;
// vector<ll>vis;
// vector<vector<ll>>adj;
// vector<vector<ll>>lca;
// vector<ll>lev;

// ll n;
// void dfs(ll node,ll p){
//     par[node]=p;
//     lca[node][0]=p;

//     for(auto val:adj[node]){
//         if(!vis[val]){
//             dfs(val,node);
//         }
//     }




// }
// void init(){
//     dfs(1,-1);

//     for(int j=1;j<=32;j++){
//         for(int i=1;i<=n;i++){

//             if(lca[i][j-1]!=-1){
//                 int par=lca[i][j-1];
//                 lca[i][j]=lca[par][j-1];    

//             }

//         }
//     }
// }
// ll solveforme(ll a,ll b){

//     if(lev[a]<lev[b]){
//         swap(a,b);

//     }
//     ll d=lev[a]-lev[b];

//     while(d){
//         ll i=log2(d);

//         a=lca[a][i];
//         d-=1<<i;
//     }

//     if(a==b){
//         return a;
//     }

//     for(int i=32;i>=0;i--){

//         if(lca[a][i]!=-1 && lca[a][i]!=lca[b][i]){
//             a=lca[a][i];
//             b=lca[b][i];
//         }
//     }
//     return lca[a][0];

// }
// void solve(){

//     ll n,m;
//     cin>>n>>m;
    
// }


// int main()
// {
//     secreterror()
//     ll t;
//     cin>>t;
//     //while(t--){
//         solve()
        
//     //}

// }
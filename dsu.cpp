
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
// vector<ll>ran;

// ll find(ll node){

//     vector<ll>path;

//     while( par[node] < 0){
//         path.push_back(node);
//         node=par[node];
//     }
//     for(int i=0;i<path.size();i++){
//         par[path[i]]=node;
//     }


//     if(par[node]<0){
//         return node;
//     }

//     ll x=find(par[node]);
//     par[node]=x;
//     return x;
//     return par[node]=find(par[node]);

//     return node;

// }
// void merge(ll a,ll b){

//     ll a=find(a);
//     ll b=find(b);

//     if(a!=b){
        
//         if(ran[a]<ran[b]){
//             swap(a,b);

//         }
//         par[b]=a;
//         ran[a]+=ran[b]
//     }

// }

// void solve(){

//     ll n,m;
//     cin>>n>>m;

//     par=vector<ll>(n+1,-1);
//     ran=vector<ll>(n+1,1);

    
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
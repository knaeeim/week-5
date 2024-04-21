#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        ll n, c; 
        cin>>n>>c; 

        vll v(n); 

        for(ll i=0; i<n; i++){
            cin>>v[i];
            v[i] = v[i] + i + 1;
        }

        sorta(v);

        ll sum = 0; 
        int indx = -1;
        for(int i=0; i<n; i++ ){
            sum +=v[i];
            if(sum > c){
                indx = i;
                break;
            }
        }

        if(indx == -1) cout<<n<<endl;
        else cout<<indx<<endl; 
    }
    return 0; 
}
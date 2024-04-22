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
        ll a, b, n; 
        cin>>a>>b>>n; 

        vll v(n); 

        ll sum = 0;

        if( b >= a){
            sum = a; 
            b = a;
        }
        else sum = b;

        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]+1 <= a) sum +=v[i]; 
            else sum +=a-1; 
        } 

        cout<<sum<<endl;
    }
    return 0; 
}
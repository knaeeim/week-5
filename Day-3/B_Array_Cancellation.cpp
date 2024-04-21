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
        int n; cin>>n;

        vll v(n); 

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        ll total = 0; 

        for(int i=0; i<n; i++){
            if(v[i] > 0){
                total +=v[i];
            }
            else if(v[i] < 0){
                ll k = min(total, -v[i]);
                v[i] +=k;
                total -=k; 
            }
        }

        total = 0; 

        for(int i=0; i<n; i++){
            if(v[i] < 0){
                total += abs(v[i]);
            }
        }

        cout<<total<<endl;

    }
    return 0; 
}
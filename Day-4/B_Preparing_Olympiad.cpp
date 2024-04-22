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
    

    int n, l, r, x; 
    cin>>n>>l>>r>>x; 

    vi v(n); 
    for(int i=0; i<n; i++) cin>>v[i]; 

    int cnt = 0; 

    for(int mask = 0; mask < ( 1 << n) ; mask++){
        int sum = 0, mn = INT_MAX, mx = INT_MIN;
        for(int bit = 0; bit < n; bit++){
            if((mask >> bit) & 1){
                sum += v[bit];
                mn = min(mn, v[bit]);
                mx = max(mx, v[bit]);
            }
        }

        if(sum >= l and sum <= r and mx - mn >= x){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0; 
}
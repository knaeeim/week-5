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
    

    int n; cin>>n; 

    vi v(n); 
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vi prefix(n); 
    prefix[0] = v[0]; 
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + v[i];
    }

    int q; 
    cin>>q; 

    while(q--){
        int query; 
        cin>>query; 

        int left = 0, right = n - 1, ans = 0; 

        while(left <= right){
            int mid = (left + right) / 2;

            if(prefix[mid] >= query){
                ans = mid + 1; 
                right = mid - 1; 
            }
            else left = mid + 1; 
        }

        cout<<ans<<endl;

    }
    return 0; 
}
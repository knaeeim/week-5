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

    for(int i=0; i<n; i++) cin>>v[i]; 

    int m; cin>>m; 
    vi v1(m); 

    for(int i=0; i<m; i++) cin>>v1[i];

    sorta(v);
    sorta(v1);

    int cnt = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int diff = abs(v[i] - v1[j]);
            if(diff == 1 || diff == 0){
                cnt++;
                v[i] = -1;
                v1[j] = -1;
            }
        }
    }

    cout<<cnt<<endl;
    return 0; 
}
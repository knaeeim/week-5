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
    

    int n, q; 
    cin>>n>>q; 

    vi v(n), qArray(q); 

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<q; i++){
        cin>>qArray[i];
    }

    for(int i=0; i<q; i++){

        int ans = -1; 
        int left = 0, right = n-1;

        while(left <= right){
           int mid = (left + right)/2; 

           if(v[mid] <= qArray[i]){
                ans = mid; 
                left = mid + 1;
           } 
           else right = mid - 1;
        }

        if(ans == -1) cout<<0<<endl;
        else cout<<ans+1<<endl;
    }
    return 0; 
}
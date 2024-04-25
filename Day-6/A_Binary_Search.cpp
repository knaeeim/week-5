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
    

    int n, k; 
    cin>>n>>k; 

    vll v(n); 

    for(int i=0; i<n; i++){
        cin>>v[i]; 
    }

    vll q(k);

    for(int i=0; i<k; i++){
        cin>>q[i]; 
    }

    for(int i=0; i<k; i++){
        
        bool found = false;
        int left = 0; int right = n-1;

        while(left <= right){
            int mid = (left + right)/2; 

            if(v[mid] == q[i]){
                found = true;
                break;
            }

            if(v[mid] < q[i]){
                left = mid + 1;
            }
            else right = mid - 1; 
        }

        if(found) cout<<"YES\n";
        else cout<<"NO" << endl; 
    }

    return 0; 
}
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

// class cmp{
//     public: 
//     bool operator()(pair<int, int> a, pair<int, int> b){
//         return a.second > b.second;
//     } 
// };


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        string s; cin>>s; 
        
        priority_queue<pair<int, int>> pq; 

        for(int i=0; i<s.size(); i++){
            pq.push({(s[i] - 96), i+1});
        }

        int cost = 0; 
        vector <int> ans; 
        
        if(!pq.empty()){
            int first = pq.top().first; 
            ans.push_back(pq.top().second); 
            pq.pop();

            while(!pq.empty()){
                int current = pq.top().first;
                cost += (first - current);
                first = current;
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }

        cout<<abs(cost)<<" ";
        cout<<ans.size()<<endl;
        range(ans);
        cout<<endl; 

    }
    return 0; 
}
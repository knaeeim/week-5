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
 
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
 
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    int t; cin>>t; 
 
    while(t--){
        string s; cin>>s; 
        
        vector <pair<char, int>> v; 
        
        char first_final = min(s[0], s[s.size()-1]);
        char last_final = max(s[0], s[s.size()-1]); 
        
        for(int i = 0; i<s.size(); i++){
            if(s[i] >= first_final and s[i] <= last_final){
                v.push_back({s[i], i+1}); 
            }
        }
        
        sort(v.begin(), v.end(), [&] (pair<char, int> a, pair<char, int> b){
            return a.second < b.second; 
        });
        
        if(s.size() > 2){
            sort(v.begin()+1, v.begin()+v.size()-1, [&](pair<char, int>a, pair<char, int>b){
                if(s[0] > s[s.size()-1]){
                    return a.first > b.first;
                }else{
                    return a.first < b.first;
                }
            });
        }
        
        int cost = 0; 
        vector <int> ans; 
        
        ans.push_back(1); 
        
        for(int i=1; i<v.size(); i++){
            cost += abs(v[i-1].first - v[i].first); 
            ans.push_back(v[i].second);
        }
        
        cout<<cost<<" "<<ans.size()<<endl;
        for(auto el: ans){
            cout<<el<<" ";
        }
        cout<<endl;
 
    }
    return 0; 
}
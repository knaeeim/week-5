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
        int n; 
        cin>>n; 

        map <string, vector<int>> mp;

        for(int i=0; i<n; i++){
            int a; string b; 
            cin>>a>>b; 
            mp[b].push_back(a);
        } 

        int sum = 0; 

        bool first = false;
        bool second = false;

        for(auto it = mp.begin(); it != mp.end(); it++){
            
            if(it->first == "11"){
                sum +=it->second[0];
                first = true; 
                second = true;
                break;
            }
            else if(it->first == "01") {
                sum +=it->second[0];
                first = true;
            } 
            else if(it->first == "10"){
                sum +=it->second[0];
                second = true;
            }
        }

        if(first and second) cout<<sum<<endl;
        else cout<<-1<<endl;
    }
    return 0; 
}
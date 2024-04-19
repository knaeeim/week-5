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

        string s; cin>>s; 

        string ans = "";

        for(int i=s.size() - 1 ; i>=0; i--){
            if(s[i] == '0'){
                i--; 
                string temp = "";
                temp =+s[i]; 
                i--;
                temp +=s[i];
                reverse(temp.begin(), temp.end());
                int num = stoi(temp); 
                char c = num + 96; 
                ans +=c;  
            }
            else{
                int num = s[i] - 48;
                char ch = num + 96;
                ans += ch; 
            }
        }

        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
     
    return 0; 
}
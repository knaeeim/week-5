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

string decimalToBinary(int x){
    string ans; 

    for(int i = 64; i>=0; i--){
        int k = x >> i; 
        if(k & 1) ans +='1';
        else ans +='0';
    }
    return ans; 
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 

        vi v(n); 

        for(int i=0; i<n; i++){
            cin>>v[i]; 
        }

        vi m(64);

        for(int i = 0; i< n; i++){
            string s = decimalToBinary(v[i]);

            for(int j = 0; j < 64; j++){
                if(s[j] == '1'){
                    m[j]++;
                }
            }
        }

        int g = 0;

        for(int i=0; i<64; i++){
            g = __gcd(g, m[i]);
        }

        cout<<"gcd ->"<<g<<endl;

        for(int i=1; i<=n; i++){
            if(g % i == 0) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
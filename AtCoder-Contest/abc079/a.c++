# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    string n;
    cin >> n;
    if(n[0]==n[1] && n[1] == n[2]) cout << "Yes" <<endl;
    else if(n[1] == n[2] && n[2] == n[3])cout << "Yes" << endl;
    else cout << "No" <<endl;

}

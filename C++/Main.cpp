#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
 
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define im_here cerr << "I'm here!"
#define len(x) (x.length())
#define pb push_back
#define lets_go cin.tie(0)->sync_with_stdio(0);

const ll MAXN=1e12;
const int maxn=1e9;

vector <ull> josephus_list(ull n, ull k){
    vector <ull> people;
    vector <ull> killed;
    for (ull i = 1; i <= n; ++i) {
        people.push_back(i);
    }
    ull i = 0;
    while (!people.empty()) {
        i = (i + k - 1) % people.size();
        killed.push_back(people[i]);
        people.erase(people.begin() + i);
    }
    return killed;
}

ull josephus_position(ull n, ull p, ull k) {
    vector <ull> people;
    for (ull i = 1; i <= n; ++i) {
        people.push_back(i);
    }
    ull i = 0;
    vector <ull> kill_order;
    while (!people.empty()) {
        i = (i + k - 1) % people.size();
        kill_order.push_back(people[i]);
        people.erase(people.begin() + i);
    }
    auto it = find(kill_order.begin(), kill_order.end(), p);
    return distance(kill_order.begin(), it) + 1;
}

int main(){
    lets_go;
    
    return 0;
}

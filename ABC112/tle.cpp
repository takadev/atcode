#include <iostream>
#include <map> 

using namespace std;

int main() {
    int N, T;
    cin >> N;
    cin >> T;
    int key;
    int val;
    map<int, int> mp;
    for(int i = 0; i < N; i++) {
        cin >> key;
        cin >> val;
        mp[key] = val;
    }
    for(auto x : mp) {
        if (x.second > T) {
            continue;
        }
        cout << x.first << endl;
        return 0;
    }
    cout << "TLE" << endl;

    return 0;
}

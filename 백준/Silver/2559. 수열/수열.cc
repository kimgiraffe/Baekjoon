#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, i, start = 0, sum = 0, MAX = INT_MIN;
    vector<int> v;
    cin >> N >> K;

    for(i = 0; i < N; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }

    for(i = 0; i < N; i++){
        sum += v[i];
        if(i >= K - 1){
            MAX = max(MAX, sum);
            sum -= v[start++];
        }
    }

    cout << MAX << '\n';

    return 0;
}
#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> v;
    while(n > 0){
        v.push_back(n % 3);
        n /= 3;
    }
    
    for(int i = 0; i < v.size(); i++){
        //cout << v[i];
        answer += v[i] * pow(3, v.size() - i - 1);
    }
    
    return answer;
}
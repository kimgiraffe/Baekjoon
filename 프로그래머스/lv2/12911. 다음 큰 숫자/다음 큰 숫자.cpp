#include <string>
#include <vector>

using namespace std;

int count(int num){
    int cnt = 0;
    vector<int> v;
    while(num > 0){
        v.push_back(num % 2);
        num /=2;
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i]) cnt++;
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    int tmp = count(n);
    for(int i = n + 1;;i++){
        if(count(i) == tmp){
            answer = i; 
            break;
        }
    }
    
    return answer;
}
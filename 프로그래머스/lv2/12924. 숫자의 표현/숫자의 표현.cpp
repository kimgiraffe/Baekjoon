#include <string>
#include <vector>
#include <cmath>

using namespace std;

int calc(int a, int b){
    return (b*(b+1) - (a-1)*a) / 2;
}

int solution(int n) {
    int answer = 1;
    for(int i = 1; i < n; i++){
        int sum = i;
        for(int j = i + 1; j < n; j++){
            sum += j;
            if(sum == n) answer++;
            else if(sum > n) break;
        }
    }
    return answer;
}
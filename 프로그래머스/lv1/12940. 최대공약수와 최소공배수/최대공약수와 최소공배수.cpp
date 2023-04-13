#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    int c = a % b;
    while(c > 0){
        a = b;
        b = c;
        c = a % b;
    }

    return b;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n, m));
    answer.push_back(n * m / gcd(n, m));
    return answer;
}
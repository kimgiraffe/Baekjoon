#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    if(s[0] == '-'){
        for(int i = 1; i < s.size(); i++){
            answer += pow(10, (s.size() -  i - 1)) * (s[i] - '0'); 
        }
        answer *= -1;
    }
    else if(s[0] == '+'){
        for(int i = 1; i <s.size(); i++){
            answer += pow(10, (s.size() - i - 1)) * (s[i] -'0');
        }
    }
    else{
        for(int i = 0; i < s.size(); i++){
            answer += pow(10, (s.size() - i - 1)) * (s[i] - '0');
        }
    }
    return answer;
}
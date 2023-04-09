#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int idx = 0;
    for(int i = 0; i < seoul.size(); i++){
        if(seoul[i] == "Kim") idx = i;
    }
    
    answer += "김서방은 ";
    answer += to_string(idx);
    answer += "에 있다";
    return answer;
}
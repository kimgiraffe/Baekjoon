#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    string tmp1 = "", tmp2 = "";
    if(s.length() % 2 != 0){
        answer = s[(s.length() - 1) /2];
    }
    else{
        tmp1 = s[(s.length() -1) / 2];
        tmp2 = s[(s.length() - 1) / 2 + 1];
        answer = tmp1 + tmp2;
    }
    return answer;
}
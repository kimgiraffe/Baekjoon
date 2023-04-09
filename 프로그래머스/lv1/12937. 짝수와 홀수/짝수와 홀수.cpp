#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "Even";
    if(num & 1) answer = "Odd";
    return answer;
}
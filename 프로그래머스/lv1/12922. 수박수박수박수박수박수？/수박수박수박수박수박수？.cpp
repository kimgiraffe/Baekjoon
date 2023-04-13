#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string tmp1 = "수";
    string tmp2 = "박";
    string answer = "";
    
    for(int i = 0; i < n / 2; i++){
       answer += tmp1;
        answer += tmp2;
    }
    if(n % 2 == 1){
        answer += tmp1;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            idx = 0;
            continue;
        }
        if(idx % 2)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
        idx++;
    }
    return s;
}
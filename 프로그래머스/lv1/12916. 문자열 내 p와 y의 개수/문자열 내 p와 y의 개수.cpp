#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cntP = 0, cntY = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'p' || s[i] == 'P') cntP++;
        if(s[i] == 'y' || s[i] == 'Y') cntY++;
    }
    if(cntP != cntY) answer = false;
    
    return answer;
}
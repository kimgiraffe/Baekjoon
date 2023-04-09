#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int idx1 = 0, idx2 = 0;
    
    for(int i = 0; i < goal.size(); i++){
        if(cards1.size()> idx1 && goal[i] == cards1[idx1]){
            idx1++;
        }
        else if(cards2.size() > idx2 && goal[i] == cards2[idx2]){
            idx2++;
        }
        else{
            answer = "No";
            break;
        }
    }
    return answer;
}
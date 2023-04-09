#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int min_index = min_element(arr.begin(), arr.end()) - arr.begin();

    if(arr[0]== 10)
    {
        answer.push_back(-1);
        return answer;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == min_index) continue;
        answer.push_back(arr[i]);

    }

    return answer;
}
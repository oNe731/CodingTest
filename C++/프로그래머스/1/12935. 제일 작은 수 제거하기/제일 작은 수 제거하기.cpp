#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int minNum = arr[0];
    int minIndex = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
            minIndex = i;
        }
    }

    for (size_t i = 0; i < arr.size(); i++)
    {
        if (i == minIndex)
            continue;

        answer.push_back(arr[i]);
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}
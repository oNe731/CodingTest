#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string result = "";
    for (int i = 0; i < my_string.length(); ++i)
    {
        if (my_string[i] == ' ')
        {
            answer.push_back(result);
            result = "";
        }
        else
            result += my_string[i];
    }
    answer.push_back(result);
    
    return answer;
}
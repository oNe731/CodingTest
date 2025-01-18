#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int Index = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            answer += s[i];
            Index = 0;
        }
        else
        {
            if (Index == 0)
            {
                // 소문자 : 97 ~ 122
                if (s[i] >= 97 && s[i] <= 122)
                    answer += s[i] - 32; // 소 -> 대
                else
                    answer += s[i];
                Index++;
            }
            else
            {
                // 대문자 : 65 ~ 90
                if (s[i] >= 65 && s[i] <= 90)
                    answer += s[i] + 32; // 대 -> 소
                else
                    answer += s[i];
                Index--;
            }
        }
    }
    
    return answer;
}
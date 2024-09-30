#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int ResultCount = 0;

    int InputCount;
    cin >> InputCount;
    for (int i = 0; i < InputCount; ++i)
    {
        string InputStr;
        cin >> InputStr;

        // 그룹단어 검사 : 같은 단어가 연속으로 나열되어있는가?
        bool GroupWord = false;

        vector<char> Word;
        for (size_t j = 0; j < InputStr.length(); ++j)
        {
            char currentChar = InputStr[j];

            if (j == 0) // 첫 글자
            {
                Word.push_back(currentChar);

                if (j + 1 == InputStr.length())
                    GroupWord = true;
            }
            else
            {
                // 이전 글자랑 다른가?
                if (Word.back() != currentChar)
                {
                    // 기존에 존재했는가?
                    bool sameWord = false;
                    for (size_t k = 0; k < Word.size(); ++k)
                    {
                        if (Word[k] == currentChar) // 기존에 존재
                        {
                            sameWord = true;
                            break;
                        }
                    }

                    // 기존에 존재하는 단어가 아닐 시
                    if (sameWord == false) 
                    {
                        Word.push_back(currentChar);

                        if (j + 1 == InputStr.length())
                            GroupWord = true;
                    }
                    else // 기존에 존재하는 단어일 시
                    {
                        GroupWord = false;
                        break;
                    }
                }
                else // 이전 글자랑 같은가?
                {
                    if (j + 1 == InputStr.length())
                        GroupWord = true;
                }
            }
        }

        // 맞을 시 카운트 증가
        if (GroupWord == true)
            ResultCount++;
    }

    cout << ResultCount;
    return 0;
}
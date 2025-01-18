#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    int A = n;
    while (true)
    {
        int a = A % 10;
        answer += a;

        A = A / 10;
        if (A < 10)
        {
            answer += A;
            break;
        }
    }

    return answer;
}
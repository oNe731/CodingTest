#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> numbers(10);
    long long N = n;
    while (true)
    {
        int Number = N % 10;
        numbers[Number]++;

        N /= 10;
        if (N == 0)
            break;
    }

    int count = 1;
    for (size_t i = 0; i <= 9; i++)
    {
        while (numbers[i] > 0)
        {
            numbers[i]--;
            answer += (i * count);
            count *= 10;
        }
    }
    
    return answer;
}
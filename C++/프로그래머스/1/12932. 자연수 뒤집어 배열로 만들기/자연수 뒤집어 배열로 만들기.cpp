#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    long long N = n;
    while (true)
    {
        answer.push_back(N % 10);

        N /= 10;
        if (N == 0)
            break;
    }
    
    return answer;
}
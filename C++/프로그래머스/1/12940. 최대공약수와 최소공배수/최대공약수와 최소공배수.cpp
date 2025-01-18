#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    // 최대공약수
    int result = 1;
    int minNum = min(n, m);
    for (size_t i = 2; i <= minNum; i++)
    {
        if (n % i == 0 && m % i == 0)
            result = i;
    }
    answer.push_back(result);

    // 최소공배수
    answer.push_back((n * m) / result);
    
    return answer;
}
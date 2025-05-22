#include <iostream>

using namespace std;

char flip(char c) {
    return (c == '0') ? '1' : '0';
}

char findChar(long long k)
{
    if (k == 1) 
        return '0';

    long long length = 1;
    while (length < k) 
        length *= 2;

    long long mid = length / 2;

    if (k <= mid)
        return findChar(k);
    else
        return flip(findChar(k - mid));
}

int main() {

    long long k;
    cin >> k;
    cout << findChar(k) << "\n";

    return 0;
}
#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N, M;
		cin >> N >> M;

		int Result = 1;
		int K = 1;
		for (int j = M; j > M - N; j--)
		{
			Result *= j;
			Result /= K;
			K++;
		}

		cout << Result << "\n";
	}

	return 0;
}
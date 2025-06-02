#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int Result = 0;
	while(true)
	{
		Result++;
		if (N >= 3)
			N -= 3;
		else
			N -= 1;

		if (N == 0)
			break;
	}

	if (Result % 2 == 0)
		cout << "CY" << "\n";
	else
		cout << "SK" << "\n";
	return 0;
}
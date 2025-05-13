#include <iostream>
#include <vector>

using namespace std;

vector<int> Numbers;

void SetNodes(int Start, int End)
{
	if (Start >= End) 
		return;

	int Root = Numbers[Start];
	int Split = Start + 1;
	while (Split < End && Root > Numbers[Split])
		Split++;

	SetNodes(Start + 1, Split);
	SetNodes(Split, End);
	cout << Root << "\n";
}

int main() {
	int Number;
	while (cin >> Number)
		Numbers.push_back(Number);
	SetNodes(0, Numbers.size());
    return 0;
}
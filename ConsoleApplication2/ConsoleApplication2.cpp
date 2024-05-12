#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> v{ 1, 3, 6, 4, 2, 5 };
	sort(v.begin(), v.end());

	cout << "sorted vector:";
	for (auto x : v)
		cout << x << " ";
	return 0;

}
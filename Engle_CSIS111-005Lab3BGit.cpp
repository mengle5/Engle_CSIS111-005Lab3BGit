// Meredith Engle
//CSIS 111-005 Lab 3 Part B

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	cout << "Numbers in vector: ";
	for (int i = 0; i < g1.size(); i++)
	{
		cout << g1[i] << " ";
	}


	cout << "\n\nNumbers in reverse: ";
	for (int j = g1.size() - 1; j >= 0; j--)
	{
		cout << g1[j] << " ";
	}
	cout << "\n\nEnd of Program\n\n";
	system("pause");
	return 0;

}
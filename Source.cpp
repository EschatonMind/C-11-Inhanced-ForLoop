#include <iostream>
#include <vector>
using namespace std;

int main() {

	auto Text = { "one","two","Three" };
	for (auto text : Text) {
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(3);
	numbers.push_back(1);
	for (auto number : numbers) {
		cout << number << " ";
	}
	cout << endl;

	string hello = "Hi";
	for (auto c : hello) {
		cout << c << endl;
	}
	return 0;
}
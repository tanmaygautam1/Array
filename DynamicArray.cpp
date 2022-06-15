#include<iostream>
using namespace std;
int main() {
	int x;
  int n;
	cout << "Enter the number of items:" << "\n";
	cin >>n;
	char *arr = new char(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "You entered: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}
	return 0;
}
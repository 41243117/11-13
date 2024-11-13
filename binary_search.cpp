#include<iostream>
#include<string.h>
using namespace std;

template<typename T>

int bin_search(T *array,T target,int n) {
	int left = 0;
	int right = n - 1;
	while (right>=left) {
		int mid = (left + right) / 2; 
		if (array[mid] > target) {
			right = mid - 1;
		}
		else if (array[mid] < target) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main() {
	char t;
	int n, q;
	while (cin >> t >> n >> q) {
		if (n < 1 || n>30 || q < 1 || q>30) {
			cout << "error" << endl;
			continue;
		}
		if (t == 'i') {
			int* array = new int[n];
			int* target = new int[q];
			for (int j = 0; j < n; j++)cin >> array[j];
			for (int i = 0; i < q; i++) {
				cin >> target[i];
				cout<<bin_search(array, target[i],n)<<endl;
			}
		}
		else if (t == 's') {
			string* array = new string[n];
			string* target = new string[q];
			for (int i = 0; i < n; i++)cin >> array[i];
			for (int j = 0; j < q; j++) {
				cin >> target[j];
				cout << bin_search(array, target[j],n) << endl;
			}
		}
	}
}
	
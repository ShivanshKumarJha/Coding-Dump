#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char a[5] = "abcd";
	for (int i = 0; a[i] != '\0'; i++) {
		for (int j = i; a[j] != '\0'; j++) {
			for (int k = i; k <= j; k++) {
				cout << a[k];
			}
			cout << endl;
		}
	}
}
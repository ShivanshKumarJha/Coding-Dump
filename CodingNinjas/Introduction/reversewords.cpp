#include<iostream>
#include<string.h>
using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
        // Write your code here
        int len = strlen(input);
        int i = 0;
        int j = len - 1;
        while (i < j) {
            char tmp = input[i];
            input[i] = input[j];
            input[j] = tmp;
            i++;
            j--;

        }
        int start = 0;
        int end = 0;
        for (int i = 0; i <= len; i++) {
            if (input[i] == ' ' || input[i] == '\0') {
                end = i - 1;
                for (int i = start, j = end; i < j; i++, j--) {
                    char tmp = input[i];
                    input[i] = input[j];
                    input[j] = tmp;
                }
                start = i + 1;
            }
        }

        cout << input;
    }

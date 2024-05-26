#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int maxOccurringElement = arr[0];

    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxOccurringElement = arr[i];
        }
    }

    cout << "The maximum occurring integer is: " << maxOccurringElement <<  endl;

    return 0;
}


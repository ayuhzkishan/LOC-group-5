#include <iostream>
using namespace std;

int main() {   
    int n1;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    
    int n2;
    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    
    int mergedSize = n1 + n2;
    int mergedArray[mergedSize];
    for (int i = 0; i < n1; ++i) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; ++i) {
        mergedArray[n1 + i] = arr2[i];
    }
   
    cout << "Merged array in reverse order: ";
    for (int i = mergedSize - 1; i >= 0; --i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}

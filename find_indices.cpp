#include <iostream>
using namespace std;

int findAllIndices(const int arr[], int n, int key, int indices[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices[count++] = i;  
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Empty array!" << endl;
        return 0;
    }

    int arr[100];      
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search for: ";
    cin >> key;

    int indices[100];   
    int count = findAllIndices(arr, n, key, indices);

    if (count == 0) {
        cout << "Key not found." << endl;
    } else {
        cout << "Key found at indices: ";
        for (int i = 0; i < count; i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

// ---------------------------
// How this program works:
// 1) It asks the user for an array and a key.
// 2) It checks each element.
// 3) If the element matches the key, its index is printed.
// ---------------------------

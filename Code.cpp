#include <iostream>
using namespace std;

int main() {
    int array[] = {3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 8;

    int ans = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            ans = i;
            break;  
        }
    }

    if (ans != -1) {
        cout << "Key found at index: " << ans << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}

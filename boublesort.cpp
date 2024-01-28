#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size) {
    int n=size-1;
    for (int i = 0; i <= n; i++) {

        for (int j = 0; j < n-i; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int arr[6] = {2, 16, 9, 3, 10,6};

    cout << "Original array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    bubbleSort(arr, 6);

    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout<<endl;
    
    return 0;
}

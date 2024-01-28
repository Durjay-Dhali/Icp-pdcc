#include <iostream>
using namespace std;
void reverseArray(int arr[], int size) {
    int temp;
    int n=size-1;
    for(int i =0; i<=n/2; i++){
        temp = arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
    }
}
int main() {
    int arr[6] = {1, 2, 3, 4, 5,6};
    cout << "Original array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    reverseArray(arr, 6);
    cout << "Reversed array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

// Function to find the largest element in an array
int largestEle(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n); // define vector of size n

    // input elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = largestEle(arr, n);
    cout << "Largest element is: " << result << endl;

    return 0;
}

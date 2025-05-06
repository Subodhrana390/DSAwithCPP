#include <iostream>
using namespace std;

// Get the maximum value in the array
int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

// Perform counting sort based on the digit place
void countingSort(int arr[], int n, int place) {
    int output[n];
    int count[10] = {0};

    // Count occurrences of digits
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / place) % 10;
        count[digit]++;
    }

    // Cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array (from right to maintain order)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / place) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy sorted elements back to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main radix sort function
void radixSort(int arr[], int n) {
    int maxVal = getMax(arr, n);

    // Apply counting sort for every digit
    for (int place = 1; maxVal / place > 0; place *= 10)
        countingSort(arr, n, place);
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] <<

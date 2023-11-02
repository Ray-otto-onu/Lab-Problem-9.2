#include <iostream>
using namespace std;

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main() {
    int size = 6; 
    int values[6];

    for (int i = 0; i < size; i++) {
        cout << "Enter integer #" << i << ": ";
        cin >> values[i];
    }

    int increasing = isSortedIncreasing(values, size);
    int decreasing = isSortedDecreasing(values, size);
    int near_duplicates = hasAdjacentDuplicates(values, size);
    int duplicates = hasDuplicates(values, size);

    if (increasing)
        cout << "The data are increasing." << endl;
    else
        cout << "The data are not increasing." << endl;

    if (decreasing)
        cout << "The data are decreasing." << endl;
    else
        cout << "The data are not decreasing." << endl;

    if (near_duplicates)
        cout << "The data has adjacent duplicates." << endl;
    else
        cout << "The data does not have adjacent duplicates." << endl;

    if (duplicates)
        cout << "The data has duplicates." << endl;
    else
        cout << "The data does not have duplicates." << endl;
}

bool isSortedIncreasing(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (values[i] > values[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSortedDecreasing(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (values[i] < values[i + 1]) {
            return false;
        }
    }
    return true;
}

bool hasAdjacentDuplicates(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (values[i] == values[i + 1]) {
            return true;
        }
    }
    return false;
}

bool hasDuplicates(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (values[i] == values[j]) {
                return true;
            }
        }
    }
    return false;
}

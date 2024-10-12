#include <iostream>
#include <iomanip>
#include <ctime>
#include <climits>  
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i = 0) {
    if (i < size) {
        a[i] = Low + rand() % (High - Low + 1);
        Create(a, size, Low, High, i + 1); 
    }
}

void Print(const int* a, const int size, int i = 0) {
    if (i < size) {
        cout << setw(4) << a[i];
        Print(a, size, i + 1);  
    }
    else {
        cout << endl;
    }
}

int MaxElement(const int* a, const int size, int i = 0, int max = INT_MIN) {
    if (i < size) {
        if (a[i] > max) {
            max = a[i];  
        }
        return MaxElement(a, size, i + 1, max); 
    }
    return max;
}

int MinElement(const int* a, const int size, int i = 0, int min = INT_MAX) {
    if (i < size) {
        if (a[i] < min) {
            min = a[i];  
        }
        return MinElement(a, size, i + 1, min);  
    }
    return min;
}

double AverageMinMax(const int* a, const int size) {
    int maxVal = MaxElement(a, size);  
    int minVal = MinElement(a, size);  
    return (maxVal + minVal) / 2.0;   
}

int main() {
    srand((unsigned)time(NULL));  
    const int n = 10;  
    int a[n];
    int Low = -10, High = 14;  

    Create(a, n, Low, High);

    cout << "Original array:" << endl;
    Print(a, n);

    double avg = AverageMinMax(a, n);

    cout << "Average of min and max elements: " << avg << endl;

    return 0;
}

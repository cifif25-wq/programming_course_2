#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    int* arr1;
    int* arr2;
    int* arr3;
    arr1 = new int[10] {-22, -16, -10, -4, 2, 4, 6, 12, 22};
    arr2 = new int[5] {-10, -3, 0, 6, 17};
    arr3 = new int[15];
    int* w = arr1;

    i = 0;
    j = 0;
    k = 0;

    while (i < 10 && j < 5) {
        if (*w <= arr2[j]) {
            arr3[k] = *w;
            *w++;
            i++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < 10) {
        arr3[k] = *w;
        *w++;
        i++;
        k++;
    }

    while (j < 5) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    for (int i = 0; i < 15; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
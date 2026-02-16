#include <iostream>
using namespace std;

#define S 10

int main()
{
    setlocale(LC_ALL, "Russian");
    int s1[S];
    for (int i = 0; i < 10; i++) 
        s1[i] = i * i;

    cout << "Статистический без указателя: ";
    for (int i = 0; i < 10; i++)  
        cout << s1[i] <<" ";
    
    cout << "\n";

    int s2[S] ;
    int* w = s2;

    for (int i = 0; i < 10; i++) {
        *w = i * i;
        w++;
    }
    
    w = s2;
    cout << "Статистический c указателем: ";
    for (int i = 0; i < 10; i++) {
        cout << *w << " ";
        w++;
    }

    cout << "\n";

    int* s3;
    s3 = new int[S];

    for (int i = 0; i < 10; i++) 
        s3[i] = i * i;
    
    cout << "Динамический без указателя: ";
    for (int i = 0; i < 10; i++) 
        cout << s3[i] <<" ";
    

    cout << "\n";
    delete[] s3;

    int* s4;
    s4 = new int[S];
    int* w2 = s4;

    for (int i = 0; i < 10; i++) {
        *w2 = i * i;
        w2++;
    }

    w2 = s4;
    cout << "Динамический с указателем: ";
    for (int i = 0; i < 10; i++) {
        cout << *w2 <<" ";
        w2++;
    }

    delete[] s4;

    return 0;
}
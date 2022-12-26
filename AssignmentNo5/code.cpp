#include <iostream>
using namespace std;
template <class T>
T sort(T a[]) {
    int n;
    cout << "Enter no of elements";
    cin >> n;
    int tem;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        tem = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[tem]) {
                tem = j;
            }
        }
        swap(a[i], a[tem]);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\n";
    }
}
int main() {
    int c;
    int a_int[100];
    float a_float[100];
    char a_str[100];
    cout << "Choice";
    cin >> c;
    switch (c) {
        case 1:
            cout << "Integer sorting...\n";
            sort<int>(a_int);
            break;
        case 2:
            cout << "Floating sorting...\n";
            sort<float>(a_float);
            break;
        case 3:
            cout << "char sorting...\n";
            sort<char>(a_str);
            break;
    }
}

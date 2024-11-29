#include "iostream"
using namespace std;

int alpha_triangle() {
    int N = 5;
    char ch = 'A'-1;

    for (int i = 0; i < N; i++) { //0,1,2
        for (int j = i; j >= 0; j--) {
            cout<< char(ch+N-j);
        }
        cout << endl;
    }
    return 0;
}
#include "iostream"
using namespace std;

int reverse_char_triangle() {
    int n = 5;
    char ch = 'A'-1;
    for (int i = 5;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            cout<<char(ch+j);
        }
        cout<<endl;
    }



    return 0;
}
#include "iostream"
using namespace std;

int hollow_rectangle() {
    int N = 7;
    for (int i = 1; i <= N; i++) {
        if (i == 1 || i == N) {
            for (int j = 1; j <= N; j++) {
                cout<<" * ";
            }
            cout<<endl;
        }
        else {
            for (int j = 1; j <= N; j++) {
                if (j == 1 || j == N) {
                    cout<<" * ";
                }
                else {
                    cout<<"   ";
                }
            }
            cout<<endl;
        }


    }

    return 0;
}
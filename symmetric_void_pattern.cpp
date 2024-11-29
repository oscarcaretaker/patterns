#include "iostream"
using namespace std;

int symmetric_void_pattern() {
    int N = 15;
    for (int i = 0; i < N; i++) { //0,1,2
        for (int j = 0; j < N-i; j++) {
            cout<<"*";
        }
        for (int k = 0; k < i*2; k++) {
            cout<<" ";
        }

        for (int j = 0; j < N-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = N-1; i >=0; i--) { //0,1,2
        for (int j = 0; j < N-i; j++) {
            cout<<"*";
        }
        for (int k = 0; k < i*2; k++) {
            cout<<" ";
        }

        for (int j = 0; j < N-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }




    return 0;
}
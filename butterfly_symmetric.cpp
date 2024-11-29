#include "iostream"
using namespace std;

int butterfly_symmetric( int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout<<"#";
        }
        for (int k = 1; k <= 2*(N-i); k++) {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++) {
            cout<<"#";
        }
        cout<<endl;
    }

    for (int i = N-1; i >=1; i--) {
        for (int j = 1; j <= i; j++) {
            cout<<"#";
        }
        for (int k = 1; k <= 2*(N-i); k++) {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++) {
            cout<<"#";
        }
        cout<<endl;
    }
}
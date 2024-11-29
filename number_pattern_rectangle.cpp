#include "iostream"
using namespace std;

int main() {
    int N=3;
    int end = N*2-1;
    for(int i=0; i<N; i++) {
        int breakpoint = N-i;
        int u = N;
             for(int j=1; j<=end; j++) {
                cout<<u;
                 if(j>=breakpoint) {u++;}
                 else {u--;}
             }
        cout<<endl;
    }
}
# include "iostream"
using namespace std;

int alpha_hill() {
    int n = 3;
    char ch = 'A' - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout<<"_";
        }
        char ch = 'A';
        int breakpoint = i;
        for(int j=1;j<=2*i-1;j++){

            cout<<ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }

        for (int j = 1; j <= n-i; j++) {
            cout<<"_";
        }
        cout<<endl;
    }
}
#include "iostream"
using namespace std;

int incr_leeter_pattern(int n) {
  char ch = 'A'-1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout<<char(ch+j);
    }
    cout<<endl;
  }
}

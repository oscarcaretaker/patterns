#include <iostream>
using namespace std;

int maifun() {
  int n = 5;
  for (int i = 1; i<=n; i++) {

    for (int j = 1; j<=(n-i); j++) {
      cout<<"_";
    }
    for (int j = 1; j<=(i*2)-1; j++) {
      cout<<"#";
    }
    for (int j = 1; j<=(n-i); j++) {
      cout<<"_";
    }
    cout<<endl;
  }


  for (int i = n; i>=1; i--) {
      for (int j = 1; j<=(n-i); j++) {
        cout<<"_";
      }
      for (int j = 1; j<=(i*2)-1; j++) {
        cout<<"#";
      }

      for (int j = 1; j<=(n-i); j++) {
      cout<<"_";
      }
    cout<<endl;
  }
  return 0;
}
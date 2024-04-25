#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <utility>
#include "major.h"

using namespace std;


int main(){
  int n;
  string major_;
  string satisfied;
  string special;

  //輸入要怎樣的和弦組合
  cout << "Enter the number of sequences "
       << "\n";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << "For the " << i
         << " sequence, enter tone"
         << "\n";
    cin >> major_;
    cout << "Include special chords? (yes or no)"
         << "\n";
    cin >> special;
    do {
      major(major_, special);
      cout << "Are you satisfied with this chord sequence? (yes or no): ";
      cin >> satisfied;
    } while (satisfied != "yes");
    //transpose();
  }
}

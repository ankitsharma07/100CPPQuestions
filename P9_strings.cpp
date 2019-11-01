
// problem statement: https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>

using namespace std;

int main(){
  string str1;
  string str2;
  string str1_, str2_;

  cin >> str1;
  cin >> str2;

  // output 1
  cout << str1.size() << " " << str2.size() << endl;

  // output 2
  cout << str1+str2 << endl;

  // output 3
  str1_ = str1;
  str2_ = str2;
  str1[0] = str2[0];
  str2[0] = str1_[0];

  cout << str1 << " " << str2 << endl;
}

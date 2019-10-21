// problem: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen

#include <iostream>
#include <algorithm>
using namespace std;

int maxOutOfFour(int a, int b, int c, int d){
  // if (a >= b && a >= c && a >= d)
  //   return a;
  // else if(b >= a && b >= c && b >= d)
  //   return b;

  // else if(c >= a && c >= b && c >= d)
  //   return c;

  // else if(d >= a && d >= b && d >= c)
  //   return d;
  return std::max({a, b, c, d});
}

int main(){
  int num1, num2, num3, num4;

  cin >> num1 >> num2 >> num3 >> num4;

  int greatest = maxOutOfFour(num1, num2, num3, num4);

  cout << greatest << endl;
  return 0;
}

// problem statement: https://www.hackerrank.com/challenges/cpp-sets/problem

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
  set<int> s;
  int sizeofset;
  int type, value;
  cin >> sizeofset;

  for(int i=0; i<sizeofset; i++){
    cin >> type >> value;

    switch (type){
    case 1:
      s.insert(value);
      break;

    case 2:
      s.erase(value);
      break;

    case 3:
      cout << (s.find(value) == s.end() ? "No" : "Yes") << endl;
      break;
    }
  }

  return 0;
}

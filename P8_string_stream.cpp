// problem statement: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

// Operator >> extracts formatted data and Operator << inserts formatted data

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parse_integer(string str){
  stringstream ss(str); // taken the string as input for the parsing
  vector<int> result;
  char ch;
  int tmp;

  while(ss >> tmp) {
    result.push_back(tmp);
    ss >> ch;
  }
  return result;
}

int main(){
  string str;
  cin >> str;

  vector<int> integers = parse_integer(str);

  for(int i=0; i<integers.size(); i++){
    cout << integers[i] << "\n";
  }

  return 0;
}

// problem statement: https://www.hackerrank.com/challenges/vector-erase/problem

#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int> arr;
  int sizeOfArr, arrelements, x, a, b;

  cin >> sizeOfArr;

  for(int i=0; i<sizeOfArr; i++){
    cin >> arrelements;
    arr.push_back(arrelements);
  }

  cin >> x;
  cin >> a;
  cin >> b;

  arr.erase(arr.begin()+(x-1));
  arr.erase(arr.begin()+(a-1), arr.begin()+(b-1));

  cout << arr.size() << endl;
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}

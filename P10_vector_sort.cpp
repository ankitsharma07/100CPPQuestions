// problem statement: https://www.hackerrank.com/challenges/vector-sort/problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> arr;
  int number;
  int arrayElements;

  cin >> number;

  for (int i=0; i<number; i++){
    cin >> arrayElements;
    arr.push_back(arrayElements);
  }

  sort(arr.begin(), arr.end());

  for(int i=0; i<number; i++){
    cout << arr[i] << " ";
  }
}

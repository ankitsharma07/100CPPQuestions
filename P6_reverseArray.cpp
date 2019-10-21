// problem statement - https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen
// @Ankit Sharma

#include<iostream>
#define MAX_SIZE 1000

using namespace std;

int main(){
  int N, arr[MAX_SIZE];

  cin >> N;

  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }

  // show the current array
  for (int i = 0; i < N; i++){
    cout << arr[i] <<  " ";
  }

  // new line
  cout << "\n";
  // reverse the array
  for (int i = N-1; i >= 0; i--){
    cout << arr[i] << " ";
  }
}


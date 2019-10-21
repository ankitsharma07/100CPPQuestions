#include <iostream>
#include <math.h>
using namespace std;

void update(int *a, int *b){
  int temp = *a;
  *a = *a + *b;
  *b = abs(temp - *b);
}

int main(){
  int a, b;
  int *p_a = &a;
  int *p_b = &b;

  cin >> a >> b;
  update(p_a, p_b);

  printf("%d\n%d", a, b);

  return 0;
}

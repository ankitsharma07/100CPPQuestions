#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int integer;
  long longInteger;
  char character;
  float floatValue;
  double longFloatValue;

  scanf("%d %ld %c %f %lf", &integer, &longInteger, &character, &floatValue, &longFloatValue);

  printf("%d", integer);
  printf("\n %ld", longInteger);
  printf("\n %c", character);
  printf("\n %f", floatValue);
  printf("\n %lf", longFloatValue);

  return 0;
}

#include <iostream>
#include <random>
using namespace std;

int sum = 0;
int n = 3000;

int main(){

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n * n; j++) {
      sum++;
    }
  }
}

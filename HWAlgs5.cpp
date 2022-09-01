#include <iostream>
#include <random>
using namespace std;

int sum = 0;
int n = 200;

int main(){
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i * i; j++) {
      for(int k = 0; k < j; k++){
        sum++;
      }
    }
  }
}

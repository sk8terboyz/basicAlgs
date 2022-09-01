#include <iostream>
#include <random>
using namespace std;

int sum = 0;
int n = 450;

int main(){
  for(int i = 1; i < n; ++i) {
    for(int j = 1; j < i * i; ++j) {
      if(j % i == 0){
        for(int k = 0; k < j; ++k)
        sum++;
      }
    }
  }
}

#include <iostream>
#include <cstdio>
#include "battery.cpp"
using namespace std;


int batteryRemain=10;
void init(){
  batteryRemain=getBatRemain();
}

int main(){
  init();  
  cout << batteryRemain;
}

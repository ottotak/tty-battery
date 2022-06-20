#include <iostream>
#include <cstdio>
#include "battery.cpp"
#include <string.h>
#include "asciiarts.cpp"
using namespace std;


int batteryRemain=10;
void init(){
  batteryRemain=getBatRemain();
}

void renderBlock(int colcode){
  cout << "\033[" << colcode << "m  " << "\033[0m";
}
void render(int num){
  renderBlock(40);
}

int main(){
  init();  
  cout << batteryRemain << "%" << endl;
  for(int i = 0 ; i < batteryRemain ; i ++){
    render(2);
  }
  cout << zero;
}


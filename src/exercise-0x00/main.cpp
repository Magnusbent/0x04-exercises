#include <iostream>
using namespace std;
  std::cout << "Exercise 0x00" << std::endl;
  int findmax(int a, int b, int c,){
  if (a>=b && a>=c)
  return a; 
  if(b>=a && b>=c)
  return b;
  else 
    return c;}
int main() {
    int x = 2, y = 4, z = 6;
  int maxværdi=findmax(x,y,z);
  cout<<"Den største værdi er: "<< maxværdi << endl;
  return 0;
}

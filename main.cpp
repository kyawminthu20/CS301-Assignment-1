#include <iostream>
#include "libraries/number_bucket.h"
#include <stack>
using namespace std;

int main() {
  std::cout << "Hello World!\n";

  stack<int> test;

  cout << test.size() << endl;
  test.push(10);
  test.push(20);
  test.push(30);
  cout << test.size() << endl;
  
  while(!test.empty())
  {
    cout << test.top() << endl;
    test.pop();
    
  }
  cout << test.size() << endl;


  number_bucket test1;

  test1.push(300);
  test1.push(400);
  test1.push(700);

  while(!test1.empty())
  {
    cout << test1.top() << endl;
    test1.pop();
    
  }
  cout << test1.size() << endl;


} 
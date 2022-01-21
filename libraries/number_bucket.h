////////////////////////////////////////////////////////////
// Headers
//Ref http://users.cis.fiu.edu/~weiss/Deltoid/vcstl/templates
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <iostream>
#include <Stack.h>
using namespace std;


class number_bucket: public Stack {

  public:
     // Default Constructor and Destructor
    number_bucket(){
      stack<int> var_stack;
      }
    ~number_bucket();

    int push(int n)
    {
      var_stack.push(n); 
    }
    int pop()
    {
      var_stack.pop();
    }
    int empty();

    int get_size()
    {
      return var_stack.size();
    }

    int top()
    {
      return var_stack.top();
    }

    int size()
    {
      return var_stack.size();
    }

    void list_elements()
    {
      for(int i = 0; i < var_stack.size(); i++)
        cout << "hello" << endl;
    }






  private:



    

};

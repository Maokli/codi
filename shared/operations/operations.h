#ifndef operations_H
#define operations_H
#include <iostream>
using namespace std;

namespace operations
{
  class operation {
    public:
    string type;
    virtual void execute();
    operation();
    ~operation();
  };
  class print_operation : public operation 
  {
    private:
    string value_to_print;
    public:
    virtual void execute();
    print_operation(string value_to_print);
  };

  // class if_operation : public operation 
  // {
  //   //TODO
  //   private:
  //   string value_to_print;
  // };
} // namespace name
#endif

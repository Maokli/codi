#include "operations.h"

namespace operations {

  operation::operation() {}
  operation::~operation() {}
  void operation::execute() { /* Do nothing */}
  print_operation :: print_operation(string value_to_print)
  {
    this->value_to_print = value_to_print;
  }
  
  void print_operation :: execute()
  {
    //We just print the value
    cout << (this->value_to_print);
  }
}

#include "operation_parser.h"
#include "../shared/constants.h"
using namespace constants;

namespace operation_parser
{
  operation* operation_parser :: parse_operation(string line)
  {
    // We scan for keywords
    // We return print operation
    if (int pos = line.find(PRINT) != string::npos) 
    {
      //Define borders for string to print
      int posToStart = pos + PRINT.length();
      int posToEnd = line.find(INSTRUCTION_END);
      int l = line.length();
      string valueToPrint = line.substr(posToStart, posToEnd - posToStart);
      
      //We declare our print Operation
      print_operation* op_to_return = new print_operation(valueToPrint);

      return op_to_return;
    }

    string syntaxErr = "syntax error";
    print_operation* op = new print_operation(syntaxErr);
    return op; 
  }
  operation_parser::~operation_parser(){}
} // namespace operation_parser

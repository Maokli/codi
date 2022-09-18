#include <iostream>
#include "file_parser/file_parser.h"
using namespace std;
using namespace file_parser;


/// @brief Executes the main compiler
/// @return nothing
int main(int argc,char* argv[])
{
  string filePath = argv[1];
  file_parser::file_parser file_parser;
  file_parser.parseFile(filePath);

  cout << "\nThanks for using the godless language\n";
  return 0;
}
#include "file_parser.h"
#include <iostream>
#include <fstream>
using namespace std;

namespace file_parser{
  void file_parser :: parseFile(string fileName)
    {
      string line;
      // Read from the text file
      ifstream MyReadFile(fileName);

      // Read the file line by line
      while (getline (MyReadFile, line)) {
        // parse the line as operation and add to queue
        operation_queuer.queue_and_parse_operation(line);
      }

      //execute all the operations in the queue
      operation_queuer.execute_operations_queue();

      // Close the file
      MyReadFile.close();
    }
}
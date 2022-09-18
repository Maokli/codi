#include "../operation_queuer/operation_queuer.h"
#include <iostream>
using namespace std;
using namespace operation_queuer;

namespace file_parser {
  class file_parser {
    private:
    operation_queuer::operation_queuer operation_queuer;
    public:
    void parseFile(string fileName);
  };
}
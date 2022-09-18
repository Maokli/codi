#include "../shared/operations/operations.h"
using namespace operations;

namespace operation_parser
{
  class operation_parser {
    public:
    operation* parse_operation(string line);
    ~operation_parser();
  };
} // namespace operation_parser

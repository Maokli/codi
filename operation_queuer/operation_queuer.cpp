#include "operation_queuer.h"
using namespace operations;

namespace operation_queuer
{
  void operation_queuer::queue_and_parse_operation(string line)
  {
    operation* operation = operation_parser.parse_operation(line);
    operations_queue.enqueue(operation);
  }

  void operation_queuer::execute_operations_queue()
  {
    operations_queue.execute_and_empty_queue();
  }
} // namespace operation_queuer

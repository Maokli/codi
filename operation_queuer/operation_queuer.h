#include "operations_queue/operations_queue.h"
#include "../operation_parser/operation_parser.h"
using namespace operations_queue;
using namespace operation_parser;

namespace operation_queuer {
  class operation_queuer
  {
  private:
    operation_parser::operation_parser operation_parser;
    operations_queue::operations_queue operations_queue;
  public:
    /// @brief parses operation and then queues it
    /// @param line operation to parse and queue
    void queue_and_parse_operation(string line);

    /// @brief executes all the operations in the queue
    void execute_operations_queue();
  };
}

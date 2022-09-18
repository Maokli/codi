#include "../../shared/operations/operations.h"
using namespace operations;

namespace operations_queue
{
  typedef struct operation_node {
    operation* op;
    operation_node* next;
  } operation_node;

  class operations_queue {
    private:
    operation_node* queue = NULL;

    /// @brief executes the topmost operation then dequeue it
    void execute_then_dequeue();

    public:
    /// @brief adds an operation to the queue
    /// @param operation the operation to add
    void enqueue(operation* operation);

    /// @brief execute and empty all the queue
    void execute_and_empty_queue();

  };
} // namespace operations_queue

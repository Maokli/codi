#include "operations_queue.h"
using namespace operations;

namespace operations_queue
{
  void operations_queue :: enqueue(operation* operation)
  {
    // Create new node
    operation_node* new_op = (operation_node*)malloc(sizeof(operation_node));
    new_op->op = operation;
    new_op->next = NULL;

    // We place the node in the queue
    if(this->queue == NULL)
      this->queue = new_op;
    else
      (this->queue)->next = new_op;
  }
  
  void operations_queue :: execute_then_dequeue()
  {
    if(this->queue == NULL) return;

    // We execute the topmost operation
    (*(queue->op)).execute();

    //We dequeue
    operation_node* op_to_dequeue = queue;
    queue = queue->next;
    free(op_to_dequeue);
  }

  void operations_queue :: execute_and_empty_queue()
  {
    while(queue != NULL)
      execute_then_dequeue();
  }
} // namespace operations_queue
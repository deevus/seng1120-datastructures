#ifndef NODE_H_DEFINED
#define NODE_H_DEFINED

#include "../Flight.h"

using namespace assign1;
typedef Flight value_type;

class Node {
public:
  Node();
  Node(const value_type& init_data = value_type(), Node* next = NULL, Node* prev = NULL);
  Node(const Node* node);

  void set_data(const value_type& new_data);
  void set_next(Node* new_next);
  void set_prev(Node* new_prev);

  value_type Data() const;

  const Node* Next() const;
  Node* Next();

  const Node* Prev() const;
  Node* Prev();

private:
  value_type data_field;
  Node* next_field;
  Node* prev_field;
};

#endif
#ifndef NODE_H_DEFINED
#define NODE_H_DEFINED

#include "../Flight.h"

using namespace assign1;
typedef Flight value_type;

class Node {
public:
  Node();
  Node(const value_type& init_data, Node* init_link);
  Node(const Node* node);

  void set_data(const value_type& new_data);
  void set_link(Node* new_link);

  value_type Data() const;

  const Node* Link() const;
  Node* Link();

private:
  value_type data_field;
  Node* link_field;
};

#endif
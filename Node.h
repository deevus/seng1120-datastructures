#include <cstdlib>

#ifndef value_type
  typedef double value_type;
#endif

class Node {
public:
  Node(
    const value_type& init_data = value_type(), 
    Node* init_link = NULL
  )
  { data_field = init_data; link_field = init_link; }

  void set_data(const value_type& new_data) { data_field = new_data; }
  void set_link(Node* new_link) { link_field = new_link; }

  value_type Data() const { return data_field; }

  const Node* Link() const { return link_field; }
  Node* Link() { return link_field; }

private:
  value_type data_field;
  Node* link_field;
};

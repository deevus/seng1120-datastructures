#include <cstdlib>

#ifndef value_type
  typedef double value_type;
#endif

class Node {
public:
  Node(const value_type& init_data, Node* init_link);

  void set_data(const value_type& new_data);
  void set_link(Node* new_link);

  value_type Data() const;

  const Node* Link() const;
  Node* Link();

private:
  value_type data_field;
  Node* link_field;
};

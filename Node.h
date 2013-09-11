/**************************/
/* Simon Hartcher         */
/* C3185790               */
/* Software Engineering 2 */
/**************************/

#ifndef NODE_H_DEFINED
#define NODE_H_DEFINED

#include "../Flight.h"

using namespace assign1;
typedef Flight value_type;

class Node {
public:
  Node();
  //Pre-condition: None
  //Post-condition: Empty Node class is returned

  Node(const value_type& init_data = value_type(), 
    Node* next = NULL, Node* prev = NULL);
  //Pre-condition: init_data is not null.
  //Post-condition: New Node is created with given values.

  Node(const Node* node);
  //Pre-condition: node is not null.
  //Post-condition: Deep copy of node is created

  void set_data(const value_type& new_data);
  //Pre-condition: value_type is not null.
  //Post-condition: Node data is set to new_data.

  void set_next(Node* new_next);
  //Pre-condition: None
  //Post-condition: Sets next to new_next

  void set_prev(Node* new_prev);
  //Pre-condition: None
  //Post-condition: Sets previous to new_prev

  value_type Data() const;
  //Pre-condition: None
  //Post-condition: The data from the node is returned

  const Node* Next() const;
  Node* Next();
  //Pre-condition: None
  //Post-condition: The next Node is returned

  const Node* Prev() const;
  Node* Prev();
  //Pre-condition: None
  //Post-condition: The previous Node is returned

private:
  value_type data_field;
  Node* next_field;
  Node* prev_field;
};

#endif
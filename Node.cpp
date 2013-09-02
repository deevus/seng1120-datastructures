#include "Node.h"
#include <iostream>

using namespace std;
    
Node::Node(const value_type& init_data = value_type(), Node* init_link = NULL) { 
  data_field = init_data; 
  link_field = init_link; 
}

Node::Node(const Node* node) {
  data_field = node->data_field;
  link_field = node->link_field;
}

void Node::set_data(const value_type& new_data) { 
  data_field = new_data; 
}

void Node::set_link(Node* new_link) { 
  link_field = new_link; 
}

value_type Node::Data() const { 
  return data_field; 
}

const Node* Node::Link() const { 
  return link_field; 
}

Node* Node::Link() { 
  return link_field; 
}

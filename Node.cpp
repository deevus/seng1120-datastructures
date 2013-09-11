#include "Node.h"

using namespace std;

Node::Node() {
  next_field = prev_field = NULL; 
}
    
Node::Node(const value_type& init_data, Node* next, Node* prev) { 
  data_field = init_data; 
  next_field = next; 
  prev_field = prev; 
}

Node::Node(const Node* node) {
  data_field = node->data_field;
  next_field = node->next_field;
  prev_field = node->prev_field;
}

void Node::set_data(const value_type& new_data) { 
  data_field = new_data; 
}

void Node::set_next(Node* new_next) { 
  next_field = new_next; 
}

void Node::set_prev(Node* new_prev) {
  prev_field = new_prev;
}

value_type Node::Data() const { 
  return data_field; 
}

const Node* Node::Next() const { 
  return next_field; 
}

Node* Node::Next() { 
  return next_field; 
}

const Node* Node::Prev() const {
  return prev_field;
}

Node* Node::Prev() {
  return prev_field;
}

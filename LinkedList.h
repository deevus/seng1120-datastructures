#ifndef LINKEDLIST_H_DEFINED
#define LINKEDLIST_H_DEFINED

#include "Node.h"

class LinkedList {
public:
  LinkedList();

  ~LinkedList();

  Node* get_head();
  Node* get_tail();

  const Node* get_head() const;
  const Node* get_tail() const;

  void AddAfterTail(Node* entry);
  void AddBeforeHead(Node* entry);
  void AddAfterNode(Node* new_entry, Node* target);
  int Size();
  const int Size() const;

private:
  Node* head;
  Node* tail;
  int size;
};

ostream& operator<< (ostream& out, const LinkedList &ll);

#endif 
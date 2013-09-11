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

  void InsertAfterTail(Node* entry);
  void InsertBeforeHead(Node* entry);
  void InsertBeforeNode(Node* entry, Node* target);
  void InsertAfterNode(Node* new_entry, Node* target);
  int Size();
  const int Size() const;

private:
  Node* head;
  Node* tail;
  int size;
};

ostream& operator<< (ostream& out, const LinkedList &ll);

#endif 
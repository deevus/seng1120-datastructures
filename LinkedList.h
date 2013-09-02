#include "Node.h"

class LinkedList {
public:
  LinkedList() { head = NULL; tail = NULL; }

  ~LinkedList();

  Node* get_head();
  Node* get_tail();

  const Node* get_head() const;
  const Node* get_tail() const;

  void AddAfterTail(Node* entry);
  void AddBeforeHead(Node* entry);
  void AddAfterNode(Node* new_entry, Node* target);
  int Size();

private:
  Node* head;
  Node* tail;
};

ostream& operator<< (ostream& out, const LinkedList &ll);

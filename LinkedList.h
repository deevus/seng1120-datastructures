#include "Node.h"

class LinkedList {
public:
  LinkedList() { head = NULL; tail = NULL; }

  Node* get_head();
  Node* get_tail();

  void AddAfterTail(Node* entry);
  void AddBeforeHead(Node* entry);
  void AddAfterNode(const Node* new_entry, const Node& target);

private:
  Node* head;
  Node* tail;
};

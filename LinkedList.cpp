#include "LinkedList.h"

Node* LinkedList::get_head() {
  return head;
};

Node* LinkedList::get_tail() {
  return tail;
}

void LinkedList::AddAfterTail(Node* entry) {
  tail->set_link(entry);
  tail = entry;
}

void LinkedList::AddBeforeHead(Node* entry) {
  entry->set_link(head);
  head = entry;
}

void LinkedList::AddAfterNode(Node* new_entry, const Node& target) {
  
}


#include "LinkedList.h"
#include <iostream>

LinkedList::~LinkedList() {
  Node * current = head;
  Node * next = NULL;
  while (current != NULL) {
    next = current->Link();
    delete current;
    current = next;
  }
}

Node* LinkedList::get_head() {
  return head;
};

Node* LinkedList::get_tail() {
  return tail;
}

const Node* LinkedList::get_head() const {
  return head;
};

const Node* LinkedList::get_tail() const {
  return tail;
}

void LinkedList::AddAfterTail(Node* entry) {
  //if the tail is NULL, its an empty list
  //we can set the head and tail to the new entry
  if (tail == NULL) {
    head = entry;
    tail = entry;
  } else {
    tail->set_link(entry);
    tail = entry;
  }
}

void LinkedList::AddBeforeHead(Node* entry) {
  entry->set_link(head);
  head = entry;
}

void LinkedList::AddAfterNode(Node* new_entry, Node* target) {
  new_entry->set_link(target->Link());
  target->set_link(new_entry);
}

int LinkedList::Size() {
  const Node * current = head;
  int count = 0;
  while (current != NULL) {
    count++;
    current = current->Link();
  }
  return count;
}

ostream& operator<< (ostream& out, const LinkedList &ll) {
  const Node * current = ll.get_head();
  while (current != NULL) {
    out << current->Data() << endl;
    current = current->Link();
  }
  return out;
}


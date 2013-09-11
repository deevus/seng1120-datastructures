#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() { 
  head = NULL; 
  tail = NULL; 
  size = 0;
}

LinkedList::~LinkedList() {
  Node * current = head;
  Node * next = NULL;
  do {
    next = current->Next();
    delete current;
    current = next;
  } while (next != NULL);
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

void LinkedList::InsertAfterTail(Node* entry) {
  //if the tail is NULL, its an empty list
  //we can set the head and tail to the new entry
  if (tail == NULL) {
    head = entry;
    tail = entry;
  } else {
    //set prev of new node to the tail
    entry->set_prev(tail);
    //set next of tail to new node
    tail->set_next(entry);
    //new node is now tail
    tail = entry;
  }

  size++;
}

void LinkedList::InsertBeforeHead(Node* entry) {
  InsertBeforeNode(entry, head);
}

void LinkedList::InsertAfterNode(Node* new_entry, Node* target) {
  //set next of new node to the next of the target
  Node* next = target->Next();
  new_entry->set_next(next);

  //prev of next is the new node
  if (next != NULL) {
    next->set_prev(new_entry);
  }

  //prev of new node is now the target
  new_entry->set_prev(target);

  //set target's link to the new node
  target->set_next(new_entry);

  //update tail if target is tail
  if (target == tail) {
    tail = new_entry;
  }

  size++;
}

void LinkedList::InsertBeforeNode(Node* entry, Node* target) {
  //set new entry to head if target is head
  if (target == head) {
    head = entry;
  }
  else {
    Node* prev = target->Prev();
    prev->set_next(entry);
    entry->set_prev(prev);
  }

  //target's new prev is entry
  target->set_prev(entry);

  //set next of entry to target
  entry->set_next(target);

  size++;
}

int LinkedList::Size() {
  return size;
}

const int LinkedList::Size() const { 
  return size;
}

ostream& operator<< (ostream& out, const LinkedList &ll) {
  const Node * current = ll.get_head();
  int count = 0;
  while (count != ll.Size()) {
    out << current->Data() << endl;
    current = current->Next();
    count++;
  }
  return out;
}

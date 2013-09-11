/**************************/
/* Simon Hartcher         */
/* C3185790               */
/* Software Engineering 2 */
/**************************/

#ifndef LINKEDLIST_H_DEFINED
#define LINKEDLIST_H_DEFINED

#include "Node.h"

class LinkedList {
public:
  LinkedList();
  //Pre-condition: None
  //Post-condition: Returns empty linked list

  ~LinkedList();
  //Pre-condition: None
  //Post-condition: Linked list and all connected nodes will be freed

  const Node* get_head() const;
  Node* get_head();
  //Pre-condition: None
  //Post-condition: Returns Node head pointer

  const Node* get_tail() const;
  Node* get_tail();
  //Pre-condition: None
  //Post-condition: Returns Node tail pointer

  void InsertAfterTail(Node* entry);
  //Pre-condition: Entry is not null
  //Post-condition: Entry will become the new tail, with the old tail pointing
  //to it via next

  void InsertBeforeHead(Node* entry);
  //Pre-condition: Entry is not null.
  //Post-condition: Entry is the new head pointer. Now points next to old head
  //pointer

  void InsertBeforeNode(Node* entry, Node* target);
  //Pre-condition: Entry, target is not null. Target is a Node in the list.
  //Post-condition: Entry is inserted before the target Node.

  void InsertAfterNode(Node* new_entry, Node* target);
  //Pre-condition: New_entry, target is not null. Target is a Node in the list.
  //Post-condition: Entry is inserted after the target Node.

  const size_t Size() const;
  size_t Size();
  //Pre-condition: None
  //Post-condition: Current size of the list is returned

private:
  Node* head;
  Node* tail;
  size_t size;
};

ostream& operator<< (ostream& out, const LinkedList &ll);

#endif 
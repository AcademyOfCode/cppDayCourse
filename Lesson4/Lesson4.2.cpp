// Basic linked list passing head pointer


#include <iostream>

using namespace std;

struct Node;
void addNode(int data, Node *&head);
void addNodeToTail(int data, Node *&head);
void addNodeToHead(int data, Node *&head);
void addToPos(int data, int pos, Node *&head);
void removeNode(int data, Node *&head);
void printList();

struct Node {
  int data;
  Node *next;
};



void addNode(int data, Node *&head) {
  Node *newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  Node *current = head;
  if (head == NULL) {
    head = newNode;
    return;
  }
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newNode;
  return;
}

void addNodeToHead(int data, Node *&head, Node *&tail) {
  Node *newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  if (head == NULL) {
    head = tail = newNode;
  }
  else {
    newNode->next = head;
    head = newNode;
  }
}

void addNodeToTail(int data, Node *&head, Node *&tail) {
  Node *newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  if (tail == NULL) {
    head = tail = newNode;
  }
  else {
    tail->next = newNode;
    tail = newNode;
  }
}

void addToPos(int data, int pos, Node *&head) {
  Node *newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  Node *current = head;
  Node *prev = NULL;
  for (int i = 0; i < pos; i++) {
    if (current == NULL) {
      cout << "Position is out of bounds" << endl;
      return;
    }
    else {
      prev = current;
      current = current->next;
    }
  }

  prev->next = newNode;
  newNode->next = current;
  return;
}

void removeNode(int data, Node *&head, Node *&tail) {
  Node *current = head;
  Node *prev = NULL;
  while (current != NULL) {
    if (current->data == data) {
      if (current == head) {
        head = current->next;
      }
      else {
        prev->next = current->next;
        if (current == tail) {
          tail = prev;
        }
      }
      delete current;
      return;
    }
    else {
      prev = current;
      current = current->next;
    }
  }
  cout << "This item is not in the list" << endl;
  return;
}

void printList(Node *&head) {
  Node *current = head;
  while (current != NULL) {
    cout << current->data << endl;
    current = current->next;
  }

}

int main() {
  Node *head = NULL;
  Node *tail = NULL;

  Node *secondList = NULL;

  int data;
  addNode(11, secondList);
  addNode(10, head);
  printList(head);
  cout << "Enter new data" << endl;
  cin >> data;
  addNode(data, head);
  printList(head);
  printList(secondList);
}

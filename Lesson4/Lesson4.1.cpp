// Basic linked list using global head and tail variables


#include <iostream>

using namespace std;

void addNode(int data);
void addNodeToTail(int data);
void addNodeToHead(int data);
void addToPos(int data, int pos);
void removeNode(int data);
void printList();

struct Node {
  int data;
  Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void addNode(int data) {
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

void addNodeToHead(int data) {
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

void addNodeToTail(int data) {
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

void addToPos(int data, int pos) {
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

void removeNode(int data) {
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

void printList() {
  Node *current = head;
  while (current != NULL) {
    cout << current->data << endl;
    current = current->next;
  }

}

int main() {
  int data;
  addNode(10);
  printList();
  cout << "Enter new data" << endl;
  cin >> data;
  addNode(data);
  printList();
}

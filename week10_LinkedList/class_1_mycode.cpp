#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~Node() {
        cout << "Destructor called for: " << this->data << endl;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int length(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}
void createTail(Node* head, Node* &tail){
    Node* temp=head;
    while(temp -> next != nullptr){
        temp=temp -> next;
    }
    tail=temp;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    if (position < 1 || position > length(head) + 1) {
        cout << "Cannot insert, please enter a valid position" << endl;
        return;
    }

    if (position == 1) {
        insertAtHead(head, tail, data);
    }
    else if (position == length(head) + 1) {
        insertAtTail(head, tail, data);
    }
    else {
        Node* newNode = new Node(data);
        Node* temp = head;
        int count = 1;
        while (count < position - 1) {
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void deleteNode(Node* &head, Node* &tail, int position) {
  //empty list
  if(head == NULL) {
    cout << "Cannot delete, coz LL is empty" << endl;
    return;
  }

  if(head == tail) {
    //single element
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }

  int len = length(head);

  //delete from head
  if(position == 1) {
    //first node ko delete kardo
    Node* temp = head;
    head = head->next;
    //head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  else if(position == len) {
    //last node ko delete krdo\

    //find prev
    Node* prev = head;
    while(prev -> next != tail ){
      prev = prev -> next;
    }

    //prev node ka link null karo
    prev -> next = NULL;

    //node delete kro
    delete tail;

    //update tail
    tail = prev;

  }
  else {
    //middle me koi node ko delete krna h 

    //step1: set prev/curr pointers
    Node* prev = NULL;
    Node* curr = head;
    while(position != 1) {
      position--;
      prev = curr;
      curr = curr->next;
    }

    //step2: prev -> next me curr ka next node add kro
    prev->next = curr->next;

    //step3: node isolate krdo
    curr->next = NULL;
    //step4: delte node
    delete curr;

  }

}

int main()
{
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(40);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=NULL;

    // // insertAtHead(first,fourth,500);
    // insertAtTail(first,fourth,500);


    // print(first);
    // cout << length(first);

    Node* head=NULL; 
    Node* tail=NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(head,tail,40);
    print(head);
    createTail(head,tail);
    cout << tail->data << endl;


    insertAtPosition(head, tail, 25, 1); // Inserting 25 at position 2
    print(head);

    insertAtPosition(head, tail, 45, 3); // Inserting 45 at the end
    print(head);

    deleteNode(head,tail,1);
    print(head);



    
    return 0;
}
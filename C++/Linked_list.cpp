#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define ss set<string>
#define mii map<int,int>
#define msi map<string,int>


class Node{
public:
    int value;
    Node* next;
};

void printList(Node* n){
    while(n!=NULL){
        cout<<n->value<<endl;
        n = n->next;
    }
}


void insertAtTheFront(Node** head, int newValue){
    // TODO: 1. Prepare a new Node.
    Node* newNode = new Node();
    newNode->value = newValue;

    // TODO: 2. Put it in front of the current head.
    newNode->next = *head;        

    // TODO: 3. Move head of the list to point to the new node.
    *head = newNode;

}


void insertAtTheEnd(Node** head, int newValue){
    //TODO: 1. Prepare a new node.
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;

    //TODO: 2. If linked list is empty, newNode will be the head node.
    if(*head == NULL){
        *head = newNode;
        return;
    }

    //TODO: 3. Find the last node.
    Node* last = *head;
    while(last->next != NULL){
        last = last->next;
    }

    //TODO: 4. Insert new node after last node. (at the end) 
    last->next = newNode;
}

void insertAfter(Node* previous, int newValue){
    //TODO: 1. Check if previous node is NULL.
    if(previous==NULL){
        cout<<"Previous cannot be NULL"<<endl;
        return;
    }

    //TODO: 2. Prepare a new node.
    Node* newNode = new Node();
    newNode->value = newValue;

    //TODO: 3. Insert new node after previous.
    newNode->next = previous->next;
    previous->next = newNode;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //TODO: Start your code here:

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();


    head->value = 1;
    head->next = second; 
    second->value = 5;
    second->next = third;
    third->value = 3;
    third->next = NULL;

    insertAtTheFront(&head, -1);
    insertAtTheFront(&head, -2);

    insertAtTheEnd(&head, 6);
    insertAtTheEnd(&head, 8);

    insertAfter(head, 2);
    insertAfter(second, 4);

    printList(head);

    return 0;
}

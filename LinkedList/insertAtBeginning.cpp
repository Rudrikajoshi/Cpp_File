#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* createLinkedList(int arr[], int ind, int size, Node* prev){
    //Base case
    if(ind == size)
        return prev;

    Node *temp;
    temp = new Node(arr[ind]);
    temp -> next = prev;
    return createLinkedList(arr, ind + 1, size, temp);
}

int main(){
    Node *head;
    head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    head = createLinkedList(arr,0, 5, head);

    Node *temp;
    temp = head;

    while(temp){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
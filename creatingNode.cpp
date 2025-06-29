#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value){
      data = value;
      next = NULL;
    }
};

int main(){
   // Node A1(28); static way

   //dynamic way
  Node *head;
  head = new Node(4);

  cout<<head->data<<endl;
  cout<<head->next<<endl;
}
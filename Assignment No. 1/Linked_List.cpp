#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node* tail = NULL;
struct Node* head = tail ;
void AddatFirst(int val){
      struct Node* temp = new struct Node();
        temp ->  data = val;
        temp -> next = head;
        head = temp;
        if(tail == NULL){
            tail = head;
        }
        


      }
void Addatlast(int val){
    struct Node* temp = new struct Node();
     temp -> data = val;
     temp -> next = NULL;
     tail -> next = temp;
     tail = tail -> next;
}
void display(){
    struct Node *ptr = head ;
    while(ptr != NULL){
        cout<<ptr -> data<<" ";
        ptr = ptr -> next;
    }
    cout<<endl;
}
int main(){
      AddatFirst(20);
      Addatlast(30);
      Addatlast(40);
      AddatFirst(50);
      display();


}
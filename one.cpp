#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;
    Node(int number):data(number),next(nullptr){}
};
class Linklist{
public:
    Node * Head;
    Linklist():Head(nullptr){}
    void creation(int data){
        Node * Newnode=new Node(data);
        Head=Newnode;
        Newnode->next=nullptr;

    }
    void insert_first(int data){
        Node * Newnode=new Node(data);
        Newnode->next=Head;
        Head=Newnode;

    }
    void insert_last(int data){

    }

    void printing(){
        Node * printing_node=Head;
        while(printing_node!=nullptr){
            // cout<<"hello"<<endl;
            cout<<printing_node->data<<"<--------";
            printing_node=printing_node->next;
        }
        cout<<endl;

    }
};

int main(){
    Linklist l1;
    l1.creation(10);
    l1.insert_first(100);
    l1.printing();

}
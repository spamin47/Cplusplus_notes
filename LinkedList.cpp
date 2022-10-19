#include <iostream>
using namespace std;

//Data
class Student{
    int id;
    public:
        Student(int student_id): id(student_id){};
        int get_student_id();
};

int Student::get_student_id(){
    return id;
};

//LinkedList 
class Node{
    Student* student;
    
    public:
        Node*  next_node;
        Node();
        Student* get_student();
        void assign_student(Student* new_student);
        Node* get_next_node();
};

Node::Node(){
    student = nullptr;
    next_node = nullptr; //nullptr is the best initiation value to end your list
}
Student* Node::get_student(){
    return student;
}
void Node::assign_student(Student* new_student){
    student = new_student;
}
Node* Node::get_next_node(){
    return next_node;
}

int main(){
    Student s0(10);
    Student s1(12);
    cout<<s0.get_student_id()<<endl;

    Node *head =nullptr;
    if(head ==nullptr){
        head = new Node;
        head->assign_student(&s0);
    }

    //go through the list and print out its values
    // Node* temp_node = head;
    // while(temp_node !=nullptr){
    //     cout<<"Student: "<<temp_node->get_student()->get_student_id()<<endl;
    //     temp_node = temp_node->get_next_node();
    // }

    Node* temp_node = head;
    Node* tail = nullptr;
    while(temp_node!=nullptr){
        cout<<"test"<<endl;
        if(temp_node->get_next_node()==nullptr){
            //add a new node
            temp_node->next_node = new Node;
            temp_node->next_node->assign_student(&s1);
            temp_node->next_node->next_node = nullptr;
        }
        temp_node = temp_node->next_node->get_next_node();
        cout<<temp_node<<endl;
    }

    temp_node = head;
    while(temp_node !=nullptr){
        cout<<"Student: "<<temp_node->get_student()->get_student_id()<<endl;
        temp_node = temp_node->get_next_node();
    }

    return 0;
}
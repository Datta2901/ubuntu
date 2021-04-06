#include <bits/stdc++.h>
#include <queue>
#include <fstream>
#include <stack>
#include <string.h>
using namespace std;

//class Node is defined with data members
class Node{
public:

    string firstName;
    string lastName;
    int age;
    string dob;
    Node *next;
    Node *left;
    Node *right;
};

//function to display the contents of node
void display(Node *temp){

    cout << "First Name - " << temp->firstName << endl;
    cout << "Last Name - " << temp->lastName << endl;
    cout << "Age - " << temp->age << endl;
    cout << "Date Of Birth - " << temp->dob << endl;
}

class LinkedList{

private:
    Node *head;
    int size = 0;

public:
    // constructor for LinkedList class
    LinkedList(){
        head = NULL;
    }
    // To change the head of linked list
    void changeHead(Node *val){
        head = val;
    }

    // to assign the data to the node
    void setData(string fst, string lst, int a, string db, Node *newNode){

        newNode->firstName = fst;
        newNode->lastName = lst;
        newNode->age = a;
        newNode->dob = db;
    }
    // to create the first node of the linkedlist
    void firstNode(string fst, string lst, int a, string db){
        Node *newNode = new Node();
        setData(fst, lst, a, db, newNode);
        newNode->next = head;
        head = newNode;
    }
    // To push a node at the starting of the linkedlist
    void prepend(string fst, string lst, int a, string db){
        size++;
        if (head == NULL){
            firstNode(fst, lst, a, db);
            return;
        }
        else{
            Node *newNode = new Node();
            setData(fst, lst, a, db, newNode);
            newNode->next = head;
            head = newNode;
        }
    }
    // To push a node at the end of the Linkedlist
    void append(string fst, string lst, int a, string db){
        size++;
        if (head == NULL){
            firstNode(fst, lst, a, db);
            return;
        }
        else{
            Node *newNode = new Node();
            setData(fst, lst, a, db, newNode);
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
    }
    // removing a element fron the ending of the queue
    Node *pop(){
        size--;
        if (head == NULL){
            cout << "[-]Empty List!!" << endl;
            return NULL;
        }

        else{
            Node *ptr = head, *prev = head;
            while (ptr->next != NULL){
                prev = ptr;
                ptr = ptr->next;
            }
            Node *temp = ptr;
            prev->next = ptr->next;
            return temp;
        }
    }

    //removing element from the starting of the queue
    Node *popFirst(){
        size--;
        if (head == NULL){
            return NULL;
        }
        
        else{
            Node *temp = head;
            head = head->next;
            return temp;
        }
    }

    // To know the current size of the queue(LinkedList implementation)
    int sizeVal(){
        return size;
    }

    //To know the starting address of the queue(LinkedList implementation)
    Node *headVal(){
        return head;
    }
};

class Stack{
private:
    LinkedList ll;
    int size = 0;

public:
    
    void push(string fst, string lst, int a, string db){
        ll.prepend(fst, lst, a, db);
        size++;
    }

    // To push a node into a Stack(LinkedList implementation) 
    void push(Node *node){
        ll.prepend(node->firstName, node->lastName, node->age, node->dob);
        delete node;
        size++;
    }
    // To remove the node in a Stack
    Node *pop(){
        Node *temp = ll.popFirst();
        --size;
        return temp;
    }

    // To know the size of the Stack;
    int sizeVal(){
        return size;
    }
    // T0 return the address of the starting node
    Node *headVal(){
        return ll.headVal();
    }
};

class Queue{
private:
    LinkedList ll;
    int size = 0;

public:
    //Add the element to queue(using linkedList implementation)
    void enqueue(string fst, string lst, int a, string dob){

        ll.prepend(fst, lst, a, dob);
        size++;
    }
    
    void enqueue(Node *node){

        ll.prepend(node->firstName, node->lastName, node->age, node->dob);
        delete node;
        size++;
    }

    Node *dequeue(){

        Node *temp = ll.pop();
        return temp;
        size--;
    }

    int sizeVal(){

        return size;
    }

    Node *headVal(){
        return ll.headVal();
    }

    void disp(){
        Node *h = ll.headVal();
        cout << h->dob;
    }
};

class BinaryTree{

public:
    Node *newNode(string fst, string lst, int a, string db){
        Node *node = new Node();
        node->firstName = fst;
        node->lastName = lst;
        node->age = a;
        node->dob = db;

        node->left = NULL;
        node->right = NULL;

        return (node);
    }

    void traversePreOrder(Node *temp){
        if (temp != NULL){
            display(temp);
            traversePreOrder(temp->left);
            traversePreOrder(temp->right);
        }
    }

    void traverseInOrder(Node *temp){
        if (temp != NULL){
            traverseInOrder(temp->left);
            display(temp);
            traverseInOrder(temp->right);
        }
    }

    void traversePostOrder(Node *temp){
        if (temp != NULL){
            traversePostOrder(temp->left);
            traversePostOrder(temp->right);
            display(temp);
        }
    }

    Node *InsertNode(Node *root, string fst, string lst, int a, string db){
        if (root == NULL){
            root = newNode(fst, lst, a, db);
            return root;
        }
        else{
            queue<Node *> InputQueue;
            InputQueue.push(root);

            while (!InputQueue.empty()){
                Node *tmp = InputQueue.front();
                InputQueue.pop();

                if (tmp->left != NULL)
                    InputQueue.push(tmp->left);
                else{
                    tmp->left = newNode(fst, lst, a, db);
                    return root;
                }

                if (tmp->right != NULL)
                    InputQueue.push(tmp->right);
                else{
                    tmp->right = newNode(fst, lst, a, db);
                    return root;
                }
            }
        }
    }
};


struct Node *getTail(struct Node *cur){
    while (cur != NULL && cur->next != NULL)
        cur = cur->next;
    return cur;
}

struct Node *partition(struct Node *head, struct Node *end, struct Node **newHead, struct Node **newEnd){
    struct Node *pivot = end;
    struct Node *prev = NULL, *cur = head, *tail = pivot;

    while (cur != pivot)
    {
        if (cur->firstName < pivot->firstName)
        {
            if ((*newHead) == NULL)
                (*newHead) = cur;

            prev = cur;
            cur = cur->next;
        }
        else
        {
            if (prev)
                prev->next = cur->next;
            struct Node *tmp = cur->next;
            cur->next = NULL;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }

    if ((*newHead) == NULL)
        (*newHead) = pivot;

    (*newEnd) = tail;

    return pivot;
}

struct Node *quickSortRecur(struct Node *head, struct Node *end){
    if (!head || head == end)
        return head;

    Node *newHead = NULL, *newEnd = NULL;

    struct Node *pivot = partition(head, end, &newHead, &newEnd);

    if (newHead != pivot)
    {
        struct Node *tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;

        newHead = quickSortRecur(newHead, tmp);

        tmp = getTail(newHead);
        tmp->next = pivot;
    }

    pivot->next = quickSortRecur(pivot->next, newEnd);

    return newHead;
}

void quickSort(struct Node **headRef)
{
    (*headRef) = quickSortRecur(*headRef, getTail(*headRef));
    return;
}

int main()
{
    Queue InputQueue;// Storing the input in a queue
    int count = 0;
    ifstream fin;
    fin.open("input.txt");
    string line;
    while (fin){
        getline(fin, line);
        string delimiter = ", ";
        size_t pos = 0;
        string token;
        string tempArr[4];// temporary array to store input
        int i = 0;

        while((pos = line.find(delimiter)) != string::npos){
            token = line.substr(0, pos);
            tempArr[i] = token;
            line.erase(0, pos + delimiter.length());
            ++i;
        }
        tempArr[3] = line;
        tempArr[2] = tempArr[1];
        istringstream ss(tempArr[0]);
        string word;
        i = 0;
        while (ss >> word){
            tempArr[i] = word;
            i++;
        }
        stringstream num(tempArr[2]);
        int x = 0;
        num >> x;
        if(x != 0)
        InputQueue.enqueue(tempArr[0], tempArr[1], x, tempArr[3]);
    }
    Queue qB;
    int s = InputQueue.sizeVal() - 1;
    while (s >= 0){
        Node *temp = InputQueue.dequeue();
        display(temp);
        qB.enqueue(temp);
        s--;
    }
    cout << "Press Any Key to continue the process\n";
    char UserChoice;
    cin >> UserChoice;
    
    Stack st;
    s = qB.sizeVal();
    while (s != 0)
    {
        Node *tmp = qB.dequeue();
        st.push(tmp);
        --s;
    }

    Queue qC;
    s = st.sizeVal();
    while (s != 0){
        Node *tmp = st.pop();
        qC.enqueue(tmp);
        s--;
    }

    Queue qD;
    s = qC.sizeVal();
    while (s != 0){
        Node *tmp = qC.dequeue();
        display(tmp);
        qD.enqueue(tmp);
        --s;
    }

    cout << "Press Any Key to continue the process\n";
    cin >> UserChoice;

    BinaryTree bt;
    Node *root = NULL;
    s = qD.sizeVal();

    while (s != 0){

        Node *tmp = qD.dequeue();
        root = bt.InsertNode(root, tmp->firstName, tmp->lastName, tmp->age, tmp->dob);
        --s;
    }
    cout << root->age;
    bt.traversePreOrder(root);

    cout << "Press Any Key to continue the process\n";
    cin >> UserChoice;

    bt.traversePostOrder(root);

    cout << "Press Any Key to continue the process\n";
    cin >> UserChoice;

    LinkedList lt;
    stack<Node *> stac;
    Node *curr = root;

    while (curr != NULL || stac.empty() == false)
    {
        while (curr != NULL)
        {
            stac.push(curr);
            curr = curr->left;
        }
        curr = stac.top();
        stac.pop();
        lt.append(curr->firstName, curr->lastName, curr->age, curr->dob);
        curr = curr->right;
    }

    Node *hd = lt.headVal();
    while (hd != NULL)
    {
        display(hd);
        hd = hd->next;
    }

    cout << "Press Any Key to continue the process\n";
    cin >> UserChoice;
    Node *a = lt.headVal();
    quickSort(&a);

    Node *hdt = a;
    while (hdt != NULL)
    {
        display(hdt);
        hdt = hdt->next;
    }

    cout << "Press Any Key to continue the process\n";
    cin >> UserChoice;

    string f, l, d;
    int ag;
    cout << "Enter FirstName LastName, age, date of birth respectively\n";
    cin >> f >> l >> ag >> d;
    lt.changeHead(a);
    lt.append(f, l, ag, d);
    a = lt.headVal();
    quickSort(&a);
    lt.changeHead(a);
    hdt = a;
    while (hdt != NULL){
        display(hdt);
        hdt = hdt->next;
    }
    cout << "Press Any Key to continue the process\n";
    cin >> UserChoice;
    return 0;
}

#include <bits/stdc++.h>
#include <queue>
#include <fstream>
#include <stack>
#include <string.h>
using namespace std;

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

void display(Node *temp){
    cout << "[+]First Name - " << temp->firstName << endl;
    cout << "[+]Last Name - " << temp->lastName << endl;
    cout << "[+]Age - " << temp->age << endl;
    cout << "[+]Date Of Birth - " << temp->dob << endl
         << endl;
}

class LinkedList
{
private:
    Node *head;
    int size = 0;

public:
    LinkedList()
    {
        head = NULL;
    }

    void changeHead(Node *val)
    {
        head = val;
    }

    void setData(string fst, string lst, int a, string db, Node *newNode)
    {
        newNode->firstName = fst;
        newNode->lastName = lst;
        newNode->age = a;
        newNode->dob = db;
    }
    void firstNode(string fst, string lst, int a, string db)
    {
        Node *newNode = new Node();
        setData(fst, lst, a, db, newNode);
        newNode->next = head;
        head = newNode;
    }

    void prepend(string fst, string lst, int a, string db)
    {
        size++;
        if (head == NULL)
        {
            firstNode(fst, lst, a, db);
            return;
        }
        else
        {
            Node *newNode = new Node();
            setData(fst, lst, a, db, newNode);
            newNode->next = head;
            head = newNode;
        }
    }

    void append(string fst, string lst, int a, string db)
    {
        size++;
        if (head == NULL)
        {
            firstNode(fst, lst, a, db);
            return;
        }
        else
        {
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

    Node *pop()
    {
        size--;
        if (head == NULL)
        {
            cout << "[-]Empty List!!" << endl;
            return NULL;
        }
        else
        {
            Node *ptr = head, *prev = head;
            while (ptr->next != NULL)
            {
                prev = ptr;
                ptr = ptr->next;
            }
            Node *temp = ptr;
            prev->next = ptr->next;
            return temp;
        }
    }
    Node *popFirst()
    {
        size--;
        if (head == NULL)
        {
            return NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            return temp;
        }
    }

    int sizeVal()
    {
        return size;
    }

    Node *headVal()
    {
        return head;
    }
};

class Stack
{
private:
    LinkedList ll;
    int size = 0;

public:
    Stack()
    {
    }
    void push(string fst, string lst, int a, string db)
    {
        ll.prepend(fst, lst, a, db);
        size++;
    }

    void push(Node *node)
    {
        ll.prepend(node->firstName, node->lastName, node->age, node->dob);
        delete node;
        size++;
    }
    Node *pop()
    {
        Node *temp = ll.popFirst();
        --size;
        return temp;
    }

    int sizeVal()
    {
        return size;
    }

    Node *headVal()
    {
        return ll.headVal();
    }
};

class Queue
{
private:
    LinkedList ll;
    int size = 0;

public:
    Queue() {}

    void enqueue(string fst, string lst, int a, string dob)
    {
        ll.prepend(fst, lst, a, dob);
        size++;
    }
    void enqueue(Node *node)
    {
        ll.prepend(node->firstName, node->lastName, node->age, node->dob);
        delete node;
        size++;
    }
    Node *dequeue()
    {
        Node *temp = ll.pop();
        return temp;
        size--;
    }

    int sizeVal()
    {
        return size;
    }

    Node *headVal()
    {
        return ll.headVal();
    }

    void disp()
    {
        Node *h = ll.headVal();
        cout << h->dob;
    }
};

class BinaryTree
{

public:
    Node *newNode(string fst, string lst, int a, string db)
    {
        Node *node = new Node();
        node->firstName = fst;
        node->lastName = lst;
        node->age = a;
        node->dob = db;

        node->left = NULL;
        node->right = NULL;

        return (node);
    }

    void traversePreOrder(Node *temp)
    {
        if (temp != NULL)
        {
            display(temp);
            traversePreOrder(temp->left);
            traversePreOrder(temp->right);
        }
    }

    void traverseInOrder(Node *temp)
    {
        if (temp != NULL)
        {
            traverseInOrder(temp->left);
            display(temp);
            traverseInOrder(temp->right);
        }
    }

    void traversePostOrder(Node *temp)
    {
        if (temp != NULL)
        {
            traversePostOrder(temp->left);
            traversePostOrder(temp->right);
            display(temp);
        }
    }

    Node *InsertNode(Node *root, string fst, string lst, int a, string db)
    {
        if (root == NULL)
        {
            root = newNode(fst, lst, a, db);
            return root;
        }
        else
        {
            queue<Node *> q;
            q.push(root);

            while (!q.empty())
            {
                Node *tmp = q.front();
                q.pop();

                if (tmp->left != NULL)
                    q.push(tmp->left);
                else
                {
                    tmp->left = newNode(fst, lst, a, db);
                    return root;
                }

                if (tmp->right != NULL)
                    q.push(tmp->right);
                else
                {
                    tmp->right = newNode(fst, lst, a, db);
                    return root;
                }
            }
        }
    }
};
struct Node *getTail(struct Node *cur)
{
    while (cur != NULL && cur->next != NULL)
        cur = cur->next;
    return cur;
}

struct Node *partition(struct Node *head, struct Node *end,
                       struct Node **newHead, struct Node **newEnd)
{
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

struct Node *quickSortRecur(struct Node *head, struct Node *end)
{
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
    Queue q;
    ifstream fin;
    fin.open("input.txt");
    string line;
    while (fin)
    {
        getline(fin, line);
        string delimiter = ", ";
        size_t pos = 0;
        string token;
        string arr[4];
        int i = 0;
        while ((pos = line.find(delimiter)) != string::npos)
        {
            token = line.substr(0, pos);
            arr[i] = token;
            line.erase(0, pos + delimiter.length());
            ++i;
        }
        arr[3] = line;
        arr[2] = arr[1];
        istringstream ss(arr[0]);
        string word;
        i = 0;
        while (ss >> word)
        {
            arr[i] = word;
            i++;
        }
        stringstream num(arr[2]);
        int x = 0;
        num >> x;

        q.enqueue(arr[0], arr[1], x, arr[3]);
    }
    Queue qB;
    int s = q.sizeVal() - 1;
    while (s != 0)
    {
        Node *temp = q.dequeue();
        display(temp);
        qB.enqueue(temp);
        --s;
    }
    system("pause");

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
    while (s != 0)
    {
        Node *tmp = st.pop();
        qC.enqueue(tmp);
        s--;
    }

    Queue qD;
    s = qC.sizeVal();
    while (s != 0)
    {
        Node *tmp = qC.dequeue();
        display(tmp);
        qD.enqueue(tmp);
        --s;
    }

    system("pause");
    BinaryTree bt;
    Node *root = NULL;
    s = qD.sizeVal();

    while (s != 0)
    {
        Node *tmp = qD.dequeue();
        root = bt.InsertNode(root, tmp->firstName, tmp->lastName, tmp->age, tmp->dob);
        --s;
    }
    cout << root->age;
    bt.traversePreOrder(root);

    system("pause");

    bt.traversePostOrder(root);

    system("pause");
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

    system("pause");
    Node *a = lt.headVal();
    quickSort(&a);

    Node *hdt = a;
    while (hdt != NULL)
    {
        display(hdt);
        hdt = hdt->next;
    }

    system("pause");
    string f, l, d;
    int ag;
    cout << "[+] Enter another name, age and date of birth\n";
    cin >> f >> l >> ag >> d;
    lt.changeHead(a);
    lt.append(f, l, ag, d);
    a = lt.headVal();
    quickSort(&a);
    lt.changeHead(a);
    hdt = a;
    while (hdt != NULL)
    {
        display(hdt);
        hdt = hdt->next;
    }
    system("pause");
    cout << "Bye Bye!!";
    return 0;
}

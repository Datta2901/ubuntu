#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include<conio.h>
#include <graphics.h>
using namespace std;

void clrscr(){
system("cls");
}

/queue using linked list/
class queue1{
    public:
        char fname[50];
        char lname[50];
        int age,d,m,y;
        queue1* next;
        queue1 *front = NULL;      //initializing front and rear equal to null
        queue1 *rear = NULL;

        //constructor to initialize the string
        queue1(){
            strcpy(fname ,"xxx");
            strcpy(lname ,"xxx");
            age = 0;
            d =0;
            m =0;
            y = 0;
        }

        //function to insert elements into queue
void enqueue(char ufname[],char ulname[], int uage, int id, int im, int iy) {
            queue1* newNode;
            newNode = (queue1*)malloc(sizeof(queue1));
            strcpy(newNode->fname,ufname);
            strcpy(newNode->lname,ulname);
            newNode->age = uage;
            newNode->d = id;
            newNode->m = im;
            newNode->y = iy;

            newNode->next = NULL;
            if (front == NULL)
                front = rear = newNode;
            else
                {
                rear->next = newNode;
                rear = newNode;
            }
        }

        //function to remove/delete elements from queue that returns object of type queue1
queue1 dequeue()
        {
            queue1 r;
            if (front == NULL)
                cout << "queue is empty";
            else {
                queue1* temp = front;
                front = front->next;
                strcpy(r.fname , temp->fname);
                strcpy(r.lname , temp->lname);
                r.age = temp->age;
                r.d = temp->d;
                r.m = temp->m;
                r.y = temp->y;
                free(temp);
            }
            return r;
        }

        //function to display the elements present in the queue
void queuedisplay() {
            int i = 1;
            if (front == NULL)
                cout<<"queue is empty";
            else {
                queue1* temp = front;
                cout<<"The elements present in the queue are:\n";
                while(temp->next!=NULL) {
                    printf("-number %d\nName:%s %s\nAge :%d \nDob :%d-%d-%d\n",i++, temp->fname,temp->lname, temp->age, temp->d, temp->m, temp->y);
                    temp = temp->next;
                }
                printf("-number %d\nName:%s %s\nAge :%d \nDob :%d-%d-%d\n", i++, temp->fname,temp->lname, temp->age, temp->d, temp->m, temp->y);
            }
        }

        //function to count the number of elements in the queue
int count1() {
            int count2 = 0;
            queue1* curr = front;
            while (curr != NULL) {
                count2++;
                curr = curr->next;
            }
            return count2;
        }

};

//class to use stack processing
class stack1
 {
    public:
        char fname[50];
        char lname[50];
        int age,d,m,y;
        stack1* next;
        stack1*top=NULL;

        //constructor to initialize string
        stack1() {
            strcpy(fname, "xxx");
            strcpy(lname, "xxx");
            age =0;
            d = 0;
            m =0;
            y = 0;
        }

        //function to insert elements into the stack
void push(char ufname[],char ulname[], int uage, int id, int im, int iy) {
            stack1* newnode = (stack1*)malloc(sizeof(stack1));
            strcpy(newnode->lname, ulname);
            strcpy(newnode->fname, ufname);
            newnode->age = uage;
            newnode->d = id;
            newnode->m = im;
            newnode->y = iy;

            newnode->next = top;
            top = newnode;
        }

        //function to remove an element from the stack
stack1 pop() {
            stack1 temp,*temp2;
            if (top == NULL)
                cout << "Stack Underflow" << endl;
            else {
                strcpy(temp.fname, top->fname);
                strcpy(temp.lname, top->lname);
                temp.age = top->age;
                temp.d = top->d;
                temp.m = top->m;
                temp.y = top->y;

                temp2 = top;
                top = top->next;
                free(temp2);
            }
            return temp;
        }

        //function to display the elements of the stack
void display() {
        stack1* ptr;
            if (top == NULL)
                cout<<"stack is empty";
            else {
                ptr =top;
                int i = 1;
                cout << "The elements present in the stack are:\n";
                while (ptr != NULL) {
                    printf("-number %d\nName:%s %s\nAge :%d\nDob :%d-%d-%d\n", i++, ptr->fname,ptr->lname, ptr ->age, ptr->d, ptr->m, ptr->y);
                    ptr = ptr->next;
                }
            }
            cout << endl;
        }
};

class list1*head=NULL;
//class of linked list ADT
class list1 {
public:
    char fname[50];
    char lname[50];
    int age, d, m, y;
    list1* next;

    //constructor to initialize string
list1(){
        strcpy(fname,"xxx");
        strcpy(lname,"xxx");
        age =0;
        d =0;
        m =0;
        y = 0;
    }

    //function to add elements into the linked list
void insert1(list1** head_ref,char ufname[],char ulname[], int uage, int id, int im, int iy) {
        list1* new_node = new list1();
        list1* last = *head_ref;
        strcpy(new_node->fname,ufname);
        strcpy(new_node->lname,ulname);
        new_node->age = uage;
        new_node->d = id;
        new_node->m = im;
        new_node->y = iy;
        new_node->next = NULL;

        if (*head_ref == NULL){
            *head_ref = new_node;
            return;
        }
        while (last->next != NULL)
            last = last->next;

        last->next = new_node;
        return;
    }

    //function to display the elements present in the stack
void display() {
         list1* current = head;
        if (head == NULL) {
            printf("List is empty\n");
            return;
        }
        printf("\nThe elements present in the linked list are: \n");
        int i = 1;
        while (current != NULL) {
            printf("-number %d\nName:%s %s\nAge :%d \nDoB :%d-%d-%d\n\n", i++, current->fname,current->lname, current->age, current->d, current->m, current->y);
            current = current->next;
        }
        printf("\n");
    }

    //function to ge the address of the last element
list1* getTail(list1* cur){
        while (cur != NULL && cur->next != NULL)
            cur = cur->next;
        return cur;
    }

    //function to partition the linked list
list1* partition1(list1* head,list1* end1,list1** newHead,list1** newEnd)
    {
        list1* pivot = end1;
        list1* prev = NULL, * cur = head, * tail = pivot;

        while (cur != pivot)
        {
            if (strcmp(cur->fname,pivot->fname)<0){
                if ((*newHead) == NULL)
                    (*newHead) = cur;

                prev = cur;
                cur = cur->next;
            }
            else{
                if (prev)
                    prev->next = cur->next;
                list1* tmp = cur->next;
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

    //To sort the elements of the linked list
list1* quickSortRecur(list1* head, list1* end1)
    {
        if (!head || head == end1)
            return head;

        list1* newHead = NULL, * newEnd = NULL;
         list1* pivot = partition1(head, end1, &newHead, &newEnd);

        if (newHead != pivot)
        {
           list1* tmp = newHead;
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

    //function to quicksort the linked list
void quickSort( list1** headRef)
    {
        (*headRef) = quickSortRecur(*headRef, getTail(*headRef));
        return;
    }

};
class tree*root = NULL;

//class to use tree processing
class tree {
    public:
        char fname[50];
        char lname[50];
        int age,d,m,y;
       tree* left,* right;
        //constructor to initialize string
        tree() {
            strcpy(fname,"xxx");
            strcpy(lname,"xxx");
            age =0;
            d =0;
            m =0;
            y = 0;
        }

        //function to create a new node of element
tree* CreateNode(char ufname[],char ulname[], int uage, int id, int im, int iy){
            tree* newNode = new tree();
          /*  if (!newNode) {
                cout << "error\n";
                return NULL;
            }*/

            strcpy(newNode->fname, ufname);
            strcpy(newNode->lname, ulname);
            newNode->age = uage;
            newNode->d = id;
            newNode->m = im;
            newNode->y = iy;
            newNode->left =NULL; newNode->right = NULL;
            return newNode;
        }
        //function to transfer the new element to tree
tree* insert1(tree* root, char ufname[],char ulname[], int uage, int id, int im, int iy){
            tree* newnode = CreateNode(ufname,ulname,uage,id,im,iy);
            tree* x = root;
            tree* y = NULL;

            while (x != NULL) {
                y = x;
                if (strcmp(ufname,x->fname)<0)
                    x = x->left;
                else
                    x = x->right;
            }
            if (y == NULL)
                y = newnode;
            else if (strcmp(ufname,y->fname)<0)
                y->left = newnode;
            else
                y->right = newnode;

            return y;
        }
        //function to print the preorder traversal of the tree
void printPreorder(tree* node){
            if (node == NULL)
                return;
            cout << "Name:" << node->fname<<" "<<node->lname << endl << "Age :" << node->age << "\nDoB :" << node->d << "-" << node->m << "-" << node->y<<endl<<endl;

            printPreorder(node->left);
            printPreorder(node->right);
        }
        //function to print the postorder traversal of the tree
void printPostorder(tree* node){
            if (node == NULL)
                return;
            printPostorder(node->left);
            printPostorder(node->right);
            cout << "Name:" << node->fname<<" "<<node->lname << endl << "Age :" << node->age << "\nDoB :" << node->d << "-" << node->m << "-" << node->y << endl<<endl;
        }

        //function to remove an element from the tree in inorder traversal
void remove1(tree* root,list1 &l){
            if (root == NULL)
                return;
            remove1(root->left,l);
            l.insert1(&head,root->fname,root->lname,root->age,root->d, root->m, root->y);    //to add the removed element into a linked list
            remove1(root->right,l);
        }
};
void gr(){
int graphicdriver=DETECT,graphicmode;

	//calling initgraph with parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");
setcolor(10);
settextstyle(8, HORIZ_DIR, 4);
	//Printing message for user
	outtextxy(130, 35 , "DSA ASSIGNMENT-3");

	setcolor(15);
		settextstyle(3, HORIZ_DIR,2);
		outtextxy(250, 200, "DONE BY");
		setcolor(13);
outtextxy(250,250,"AKASH KOOTANGAL-10");
setcolor(11);
outtextxy(250,300,"THEJASWIN.S-29");
setcolor(14);
outtextxy(250,350,"ARAMREDDY HARICHANDANA-09");
setcolor(12);
outtextxy(250,400,"D SAI NIHARIKA-40");
getch();
}
//main function
int main()
{
    //gr();
stringstream ss;
string fname,lname;
string agestr,dstr,mstr;
string ystr,filepath;
int age,d,m,y,coun=0;
char n1[50],n2[50];
ifstream file;
queue1 q,objq;
     stack1 s, objs;
     tree t, objt;
list1 l, objl;

cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tRube Goldberg Machine\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tBy:09,10,29,40";
    _getch();
    clrscr();
    filepath="input.txt";

    file.open(filepath);
    if (file.is_open()) {
//to see if the file has been opened
        while (true) {
                //to read in the entries one by one
                file >> ws; //used to remove the white spaces
                getline(file, fname, ' '); file >> ws;
                if(file.eof())
                    break;
                getline(file, lname, ','); file >> ws;
                getline(file, agestr, ','); file >> ws;
                getline(file, dstr, '-'); file >> ws;
                getline(file, mstr, '-'); file >> ws;
                getline(file, ystr);

                //converting the read in strings to integers
                ss.str(agestr);
                ss >> age;
                ss.clear();

                ss.str(dstr);
                ss >> d;
                ss.clear();

                ss.str(mstr);
                ss >> m;
                ss.clear();

                ss.str(ystr);
                ss >> y;
                ss.clear();

                //used to convert the string into character array

                strcpy(n1,fname.c_str());
                strcpy(n2,lname.c_str());
                // start the queueing process
                q.enqueue(n1,n2, age, d, m, y);

            }
        file.close();

        // to dequeue , display and enqueue again
        clrscr();
        coun = q.count1();
        int i = 1;
        cout<<endl<<"Dequeing......"<<endl<<"printing elements...."<<endl;
        while(i<=coun){
             objq = q.dequeue();
            cout << "\n -number "<<i++ << "\nName: " << objq.fname<<" "<<objq.lname << "\nAge : " << objq.age << "\nDoB : " << objq.d << "-" << objq.m << "-" << objq.y<<endl;
            q.enqueue(objq.fname,objq.lname, objq.age, objq.d, objq.m, objq.y);
        }
        cout<<endl<<"All elements requeued successfully"<<endl;
        cout << "\nPress any key to reverse the order of the queue...";
        _getch();
        clrscr();

        //to dequeue into a stack
        i = coun;
        while (i--) {
            objq = q.dequeue();
            s.push(objq.fname,objq.lname, objq.age, objq.d, objq.m, objq.y);
        }

        //to push from the stack and enqueue it
        i = coun;
        while (i--) {
            objs = s.pop();
            q.enqueue(objs.fname,objs.lname, objs.age, objs.d, objs.m, objs.y);
        }

        //display the queue
        i = 1;
        cout << endl << "\t\t\t\tReversed order of Queue using stack ";
        while (i <= coun) {
            objq = q.dequeue();
            cout << "\n- number " << i++ << "\nName: " << objq.fname<<" "<<objq.lname << "\nAge : " << objq.age << "\nDoB : " << objq.d << "-" << objq.m << "-" << objq.y<<endl;
            q.enqueue(objq.fname,objq.lname, objq.age, objq.d, objq.m, objq.y);
        }
        cout << "\nelements have been requeued..."<<endl;
        cout << "\nPress any key to transfer the elements from a queue into a tree...";
        _getch();
        clrscr();

        //dequeue and insert it into tree
        i = coun;
        while (i--) {
            objq = q.dequeue();
            if(i==coun-1)
                root=t.insert1(root, objq.fname,objq.lname, objq.age, objq.d, objq.m, objq.y);
            else
                t.insert1(root, objq.fname,objq.lname, objq.age, objq.d, objq.m, objq.y);
        }

        //print the elements in the tree in the various forms
        cout << "\nThe elements have been successfully transfered"<<endl;
        cout << "\nPress any key to print the preorder traversal of the tree...";
        _getch();
        clrscr();

        cout << "\t\t\t\t Preorder Traversal\nprinting.....\n";
        t.printPreorder(root);
        cout << "\nPress any key to print the postorder traversal of the tree...";
        _getch();
        clrscr();
        cout << "\t\t\t\t Postorder Traversal\nprinting...\n";
        t.printPostorder(root);

        cout << "\nPress any key to transfer all the elements from tree to a linked list...";
        _getch();
        clrscr();
        //transfer the elements from the tree to a linked list
        t.remove1(root, l);
        cout << "\nsuccessfully transfered";

        //display the elements
        cout << "\nPress any key to display the elements...";
        _getch();
        clrscr();
        cout << "\t\t\t\tLinked List\nprinting...";
        l.display();

        cout << "\nPress any key to sort these elements...";
        _getch();
        clrscr();
        l.quickSort(&head);
        cout << "\t\t\t\t Sorted Linked List\nprinting...";
        l.display();

        //read in and add another element
        cout << "\nPress any key to add element into the sorted list...";
        _getch();
        clrscr();

        cout << "\t\t\t\t\nEnter your first name:";
        cin >> n1;
        cout<<"enter your last name:";
        cin>>n2;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter the day: ";
        cin >> d;
        cout << "Enter the month: ";
        cin >> m;
        cout << "Enter the year: ";
        cin>> y;
        l.insert1(&head, n1,n2, age, d, m, y);
        l.quickSort(&head);
        cout << "\nPress any key ";
        _getch();
        clrscr();
        cout << "\t\t\t\tLinked List\nprinting...";
        l.display();
        //end
        cout << "Press any key ";
        _getch();
        clrscr();
        cout << "\nProcessing completed!!";
        gr();
    }
    else
        cout<<"\n cant open the file";
    return 0;
}
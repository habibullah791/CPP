#include <iostream>
#include <string>
using namespace std;

// Node class
class Node
{
public:
    int data;
    Node *next;

    // Node Constructor
    Node()
    {
        data = 1;
        next = NULL;
    }
};

// LinkList  class
class LinkList
{
    Node *Head;
    Node *Tail;

public:
    // LinkList Constructor
    LinkList()
    {
        Head = NULL;
        Tail = NULL;
    }

    // function to display the element of the list
    void displayListData();

    // Function to insert in the link list
    void insertAtBeginning(int data);
    void insertAtAnyPosition(int data, int pos);
    void insertAtEnd(int data);

    // Function to delete from the link list
    void deleteFromBeginning();
    void deleteAtAnyPosition(int pos);
    void deleteFromEnd();

    // Reverse the list
    void reverseList();
};

// Member function definition aoutside the linklist class
// Inserting at the end of the list

void LinkList::insertAtEnd(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (Head == NULL)
    {
        Head = newNode;
        return;
    }

    Node *temp;
    temp = Head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}
// Inserting at the end of the list
void LinkList::insertAtBeginning(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (Head == NULL)
    {
        Head = newNode;
        return;
    }

    Node *temp;
    temp = Head;

    newNode->next = temp;
    Head = newNode;
}
// Inserting at any position of the list
void LinkList::insertAtAnyPosition(int data, int pos)
{
    Node *temp;
    Node *prev;
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (Head == NULL)
    {
        Head = newNode;
        return;
    }
    else if (pos == 1)
    {
        newNode->next = temp;
        Head = newNode;
    }
    int count = 0;
    temp = Head;
    prev = temp;

    while (count < pos - 1)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    newNode->next = temp;
    prev->next = newNode;
}

// Inserting at any position of the list
void LinkList::deleteFromBeginning()
{
    Node *temp;
    temp = Head;

    if (Head == NULL)
    {
        return;
    }

    temp = temp->next;
    Head = temp;
}

// delete from end  of the list
void LinkList::deleteFromEnd()
{
    Node *temp;
    Node *prev;
    temp = Head;
    if (Head == NULL)
    {
        Head == NULL;
    }

    else if (temp->next == NULL)
    {
        Head = NULL;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
}

// delete from any pos of the list
void LinkList::deleteAtAnyPosition(int pos)
{
    Node *temp;
    Node *prev;
    temp = Head;

    if (Head == NULL)
    {
        Head = NULL;
    }
    else if (pos == 1)
    {
        temp = temp->next;
        Head = temp;
    }
    else
    {
        int count = 0;

        while (count < pos - 1)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        prev->next = temp->next;
    }
}

// Reverse the list
void LinkList::reverseList()
{
    cout<<"Enter\n";
    Node *current, *prev, *next;
    cout<<"node\n";

    current = Head;
    prev = NULL;
    next = NULL;
    cout<<"NULL\n";

    while (current != NULL)
    {
    cout<<"Loop\n";
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;

    }

    Head = prev;
}
// Display the list items
void LinkList::displayListData()
{
    Node *temp;
    temp = Head;

    if (Head == NULL)
    {
        cout << "Ops! The list is empty\n";
    }

    cout << "Elements in list \n";
    while (temp != NULL)
    {
        cout << "Data : " << temp->data << endl;
        temp = temp->next;
    }
}

void displayChoices(LinkList listObject)
{
    int iterator, number, cases, choice, pos;

choices:
    cout << "---------------------------------------\n";
    cout << "------   Chose One to Perform   -------\n";
    cout << "---------------------------------------\n";
    cout << "1. Add at the end\n";
    cout << "2. Add at the beginning\n";
    cout << "3. Add at any position\n";
    cout << "4. Delete from the start\n";
    cout << "5. Delete from the end\n";
    cout << "6. Delete from any position\n";
    cout << "7. Reverse the List\n";
    cout << "8. Display the List Items\n";
    cout << "9. press 0 to quit\n";

    cin >> cases;
    switch (cases)
    {
    case 1:
        cout << "How much number you want to add at the end\n";
        cin >> iterator;

        cout << "Enter the numbers \n";
        for (int i = 0; i < iterator; i++)
        {
            cin >> number;
            listObject.insertAtEnd(number);
        }
        system("cls");
        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }
    case 2:
        cout << "How much number you want to add at the beginning\n";
        cin >> iterator;

        cout << "Enter the numbers \n";
        for (int i = 0; i < iterator; i++)
        {
            cin >> number;
            listObject.insertAtBeginning(number);
        }
        system("cls");
        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }
    case 3:
        cout << "Enter the position\n";
        cin >> pos;
        cout << "Enter the Number\n";
        cin >> number;

        listObject.insertAtAnyPosition(number, pos);

        system("cls");
        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }
    case 4:

        listObject.deleteFromBeginning();
        system("cls");
        listObject.displayListData();

        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }
    case 5:

        listObject.deleteFromEnd();
        system("cls");
        listObject.displayListData();

        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }
    case 6:
        cout << "Enter the position\n";
        cin >> pos;

        listObject.deleteAtAnyPosition(pos);
        // system("cls");
        listObject.displayListData();

        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }
    case 7:

        listObject.reverseList();
        // system("cls");
        listObject.displayListData();

        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }

    case 8:
        system("cls");
        listObject.displayListData();
        cout << "1 to perform action / 0 to Quit\n";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        else if (choice == 1)
        {
            goto choices;
        }
        else
        {
            break;
        }

    case 0:
        system("cls");
        cout << "\nThanks For using it >-\n";
        break;
    }
}
//
int main()
{
    LinkList listObject;

    // function to perforn task on user choice
    displayChoices(listObject);
}
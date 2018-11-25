#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next;

};
Node *head = NULL; // Head pointer variable to point to the nodes
class Stack {
public:
	void Push(int val1);
	void Pop();
	void Display();
};
void ::Stack::Push(int val1) {
	Node *temp = new Node;
	temp->data = val1;
	temp->next = head;
	head = temp;

}

void ::Stack::Pop() {
	if (head == NULL) {

		cout << "The list is Empty" << endl;
	}
	else {
		Node *temp;
		temp = head;
		head = head->next;
		cout << "deleted" << ends << temp->data<<endl<<endl;
		free(temp);
	}
}
void ::Stack::Display()
{
	Node *temp;
	temp = head;
	while (temp != NULL)
	{
		cout << ends << temp->data << endl;
		temp = temp->next;
	}

}
int main(int argc, char const *argv[]) {
	Stack obj1;

	int ch, numb;
	while (1) {
		cout << "1. To push the object in the stack" << endl;
		cout << "2. To pop the object in the stack" << endl;
		cout << "3. To Display the object from the stack" << endl;
		cout << "4. To Exit the program" << endl << endl;
		cout << "Enter yourt choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter the Number to  push" << endl;
			cin >> numb;
			obj1.Push(numb);
			break;
		case 2:
			obj1.Pop();
			break;
		case 3:
			obj1.Display();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "The input is inavalid" << endl;
			break;
		}

	}
	return 0;
}

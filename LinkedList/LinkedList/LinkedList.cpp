#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next;

};
Node *head = NULL; // Head pointer variable to point to the nodes
class Linkedlist {
public:
	void Append(int);
	void Pop();
	void Display();
	void AtPosition(int,int);
	void InsertAtPosition(int,int);
	void OddEven();
};
void ::Linkedlist::Append(int val1) {
	Node *temp = new Node;
	temp->data = val1;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		//head->next = NULL;
	}
	else
	{

		Node *temp2 = head;
		while (temp2->next != NULL) {
			temp2=temp2->next;
		}
		temp2->next = temp;
	
	
	}

}

void ::Linkedlist::Pop() {
	if (head == NULL) {

		cout << "The list is Empty" << endl;
	}
	else {
		Node *temp;
		temp = head;
		head = head->next;
		cout << "deleted" << ends << temp->data << endl << endl;
		free(temp);
	}
}
void ::Linkedlist::Display()
{
	Node *temp;
	temp = head;
	if (temp == NULL) {
		cout << "NO Node to display" << endl;
	}
	else {
		while (temp != NULL)
		{
			cout << ends <<"-->"<< temp->data;
			temp = temp->next;
		}
		cout << endl << endl;
	}
}
void ::Linkedlist::AtPosition(int val1,int position) {
	Node* temp = new Node;
	temp->data = val1;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		head->next = NULL;
		

	}
	else {
		Node* last = head;
		int p = 0;
		if (position == 1) {
			temp->next = head;

		}
		while (last != NULL) {
			if (p == position - 2) {
				temp->next = last->next;
				last->next = temp;
				cout << "Data Inserted at position " << position << endl;

			}
			else {
				last = last->next;

			}
			p++;
		}
	}

}
void ::Linkedlist::InsertAtPosition(int val1,int position) {
	Node* temp = new Node;
	temp->data = val1;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		head->next = NULL;


	}
	else {
		Node* last = head;
		int p = 0;
		if (position == 1) {
			temp->next = head;

		}
		while (last != NULL) {
			if (p == position - 1) {
				temp->next = last->next;
				last->next = temp;
				cout << "Data Inserted at position " << position << endl;

			}
			else {
				last = last->next;

			}
			p++;
		}
	}

}

void ::Linkedlist::OddEven()
{
	Node* odd = NULL;
	Node* even = NULL;
	Node* oddTail = NULL;
	Node* evenTail = NULL;
	Node* temp = head;
	Node* curr = head;
	while (curr != NULL)
	{
		if (curr->data & 1)
		{
			if (odd == NULL)
			{
				odd = oddTail = curr;
			}
			else
			{
				oddTail->next = curr;
				oddTail = oddTail->next;
			}
		}
		else {
			if (even == NULL)
			{
				even = evenTail = curr;
			}
			else
			{
				evenTail->next = curr;
				evenTail = curr;

			}
		}
		curr = curr->next;

	}

	if (even)
	{
		temp = even;
		evenTail->next = odd;
	}
	else
	{
		head = odd;

	}
	if (oddTail)
	{
		oddTail->next = NULL;
	}
}
int main(int argc, char const *argv[]) {
	Linkedlist obj1;

	int ch, numb,pos,data;
	while (1) {
		cout << "1. To Append the value in the stack" << endl;
		cout << "2. To delete the value from stack" << endl;
		cout << "3. To Display the object from the stack" << endl;
		cout << "4. To Enter at a given position" << endl << endl;
		cout << "5. To After a given position" << endl << endl;
		cout << "8. To Exit the program" << endl << endl;
		cout << "Enter yourt choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter the Number to Append" << endl;
			cin >> numb;
			obj1.Append(numb);
			break;
		case 2:
			obj1.Pop();
			break;
		case 3:
			obj1.Display();
			break;
		case 4:
			cout << "Enter the position to insert";
			cin >> pos;
			cout << "Enter the data to insert";
			cin >> data;

			obj1.AtPosition(data,pos);
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "The input is invalid" << endl;
			break;
		}

	}
	return 0;
}

#include "DetectMemoryLeak.h"
#include "Node.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>
using std::cout;

// DO NOT MODIFY ANY LINE ABOVE OR ADD EXTRA INCLUDES

/*! 
 *  \brief     DM2126 Assignment 2
 *  \details   Submit the whole solution, but only this file will be used to grade
 *  \author    <John Doe>
 *  \date      2015 
 *  \note      <Admin ID>
 */

//*******************************************************************//
// Linked list stuff
//*******************************************************************//
LinkedList::LinkedList()
{
	//Empty list
	head = NULL;
}

LinkedList::~LinkedList()
{
}

void LinkedList::push_front(int data)
{
	if (head == NULL)
	{
		head = new Node(data);
	}
	else
	{
		Node* node = new Node(data);
		node->next = head;
		//Update head node
		head = node;
	}
}

void LinkedList::push_back(int data)
{
	if (!head)
	{
		push_front(data);
	}
	else
	{
		Node* newNode = new Node(data);
		Node* prev = head;
		//traverse node to the final
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		//link the last to the newnode
		prev->next = newNode;
		//link new node to null since its at the end
		newNode->next = NULL;
	}
}

int LinkedList::pop_front()
{
	Node* curr = head;
	
	if (head == NULL)
	{
		return 0;
	}
	else
	{
		head = head->next;
	}
	return curr->data;
}

int LinkedList::pop_back()
{
	Node *curr = head;
	Node *prev = head;
	int temp = 0;
	if (head == NULL)
	{
		return 0;
	}

	else if (head->next == NULL)
	{
		head = NULL;
		return curr->data;
	}
	else
	{
		while (curr->next != NULL)
		{
			prev = curr;
			curr = curr->next;
		}
		prev->next = NULL;
		temp = curr->data;
		delete curr;
		return temp;
	}
}
void LinkedList::insert_at(int pos, int data)
{

}

int LinkedList::pop_at(int pos)
{
	return 0;
}
size_t LinkedList::size()
{
	Node* curr = head;
	int size = 0;
	while (curr != NULL)
	{
		curr = curr->next;
		++size;
	}
	return size;
}

//*******************************************************************//
// Queue stuff
//*******************************************************************//
Queue::Queue() 
{
	front = NULL;
	back = NULL;
}

Queue::~Queue()
{
}

void Queue::enqueue(int data)
{
}

int Queue::dequeue()
{
	return 0;
}

size_t Queue::size()
{
	return 0;
}

//*******************************************************************//
// Stack stuff
//*******************************************************************//
Stack::Stack()
{

}

Stack::~Stack()
{

}

void Stack::push(int data)
{
}

int Stack::pop()
{
	return 0;
}

size_t Stack::size()
{
	return 0;
}

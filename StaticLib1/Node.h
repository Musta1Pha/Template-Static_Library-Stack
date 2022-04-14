#pragma once
#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
	Node(T data);
	void Afficher() const;
	Node<T>* GetNode();
	void SetNode(Node<T>* n);
	~Node();
	template class <T> friend class Stack;
private:
	T Data;
	Node<T>* Next;

};

template <class T>
Node<T>::Node(T Data)
{
	this->Data = Data;
	this->Next = nullptr;
}

template <class T>
void Node<T>::Afficher()const
{
	cout << this->Data << endl;
}

template <class T>
Node<T>* Node<T>::GetNode()
{
	return this->Next;
}

template <class T>
void Node<T>::SetNode(Node<T>* n)
{
	this->Next = n;
}

template <class T>
Node<T>::~Node()
{
	delete this->Next;
	this->Next = 0;
}

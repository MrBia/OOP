#include "Node.h"



void Node::setData(NhanVien data)
{
	this->data = data;
}

NhanVien Node::getData()
{
	return this->data;
}

void Node::setPre(Node * pre)
{
	this->pre = pre;
}

Node * Node::getPre()
{
	return this->pre;
}

void Node::setNext(Node * next)
{
	this->next = next;
}

Node * Node::getNext()
{
	return this->next;
}

Node::Node(NhanVien data, Node* pre, Node* next)
{
	this->data = data;
	this->pre = pre;
	this->next = next;
}

Node::Node()
{
}


Node::~Node()
{
}

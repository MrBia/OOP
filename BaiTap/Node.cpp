#include "Node.h"



void Node::setData(NhanVien data)
{
	this->data = data;
}

NhanVien Node::getData()
{
	return this->data;
}

Node::Node(NhanVien data, Node* pre, Node* next)
{
	this->data = data;
	this->pre = pre;
	this->next = next;
}


Node::~Node()
{
}

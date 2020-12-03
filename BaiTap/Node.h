#pragma once
#include "NhanVien.h"
class Node
{
public:
	Node* pre;
	Node* next;
	NhanVien data;
public:
	void setData(NhanVien data);
	NhanVien getData();
	void setPre(Node* pre);
	Node* getPre();
	void setNext(Node* next);
	Node* getNext();
	Node(NhanVien data, Node* pre, Node* next);
	Node();
	~Node();
};


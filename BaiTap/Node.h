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
	Node(NhanVien data, Node* pre, Node* next);
	~Node();
};


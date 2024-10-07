#include<iostream>
#include<queue>
#include"Header.h"
using namespace std;

tree::tree()
{
	root = nullptr;
	length = 0;
}

bool tree::isEmpty()
{
	return length == 0;
}

void tree::printbyqueue()
{
	if (root == nullptr) return;
	queue<BSTNode*> q;
	q.push(root);
	while (!q.empty()) {
		BSTNode* cur = q.front();
		cout << cur->data << endl;
		if(cur->left != nullptr)q.push(cur->left);
		if (cur->right != nullptr)q.push(cur->right);
		q.pop();
	}
}


bool check(int value, int CurrentValue)
{
	return value < CurrentValue;
}

BSTNode* NewNode(int value)
{
	BSTNode* NewLeaf = new BSTNode;
	NewLeaf->data = value;
	NewLeaf->right = nullptr;
	NewLeaf->left = nullptr;
	return NewLeaf;
}


void tree::insert(int value)
{
	if (root == nullptr)
	{
		root = NewNode(value);
		length++;
		return;
	}

	BSTNode* cur = root;
	while (true)
	{
		if (value == cur->data) return;

		if (value < cur->data)
		{
			if (cur->left != nullptr)
			{
				cur = cur->left;
			}
			else
			{
				cur->left = NewNode(value);
				length++;
				return;
			}

		}
		else if (value > cur->data)
		{
			if (cur->right != nullptr)
			{
				cur = cur->right;
			}
			else
			{
				cur->right = NewNode(value);
				length++;
				return;
			}

		}
	}
}


void tree::Delete(int value)
{
	/*BSTNode* cur = root;
	find(cur,value);
	if (cur->data == value)
	{
		if (cur->left == nullptr && cur->right == nullptr)
		{
			BSTNode* c = root;
			cur = nullptr;
			delete c;
		}
		else if (cur->left == nullptr && cur->right != nullptr)
		{
			BSTNode* c = root;
			cur = nullptr;
			delete c;
		}
		else if (cur->left != nullptr && cur->right == nullptr)
		{
			BSTNode* c = root;
			cur = nullptr;
			delete c;
		}
		if (cur->left != nullptr && cur->right != nullptr)
		{
			BSTNode* c = root;
			cur = nullptr;
			delete c;
		}
	}*/
}

bool find(BSTNode* cur,int value)
{
	if (cur == nullptr) return false;
	else if (cur->data == value) 
	{
		return true; 
	}
	else if (cur->data > value) return find(cur->left,value);
	else return find(cur->right, value);
}

void tree::search(int value) 
{
	BSTNode* cur = root;
	if(find(cur,value))
	cout << "True it dose exist" << endl;
	else
	cout << "false it dose not exist" << endl;

}


void treeprint(BSTNode* cur)
{
	if (cur == nullptr)return;

	treeprint(cur->left);
	cout << cur->data << endl;
	treeprint(cur->right);


}


void tree::print()
{
	BSTNode* cur = root;
	treeprint(cur);
}

int tree::MinValue()
{
	BSTNode* cur = root;


	while (cur->left != nullptr)
		cur = cur->left;
	
	return cur->data;

	
}

int tree::MaxValue()
{
	BSTNode* cur = root;

	while (cur->right != nullptr)
		cur = cur->right;
	
	return cur->data;
	
	
}

void deletetree(BSTNode* cur)
{
	if (cur->right != nullptr)
	{
		deletetree( cur->right);
		cur->right = nullptr;

	}
	if (cur->left != nullptr )
	{
		deletetree( cur->left);
		cur->left = nullptr;

	}
	if (cur->left == nullptr && cur->right == nullptr)
	{
		BSTNode* c = cur;
		cur = nullptr;
		delete c;
	}
}

tree::~tree()
{
	BSTNode* cur = root;
	deletetree(cur);
	root = nullptr;
}

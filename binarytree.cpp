//BINARY SEARCH TREE CREATING INSERTING AND SEARCHING IMPLEMENTATION
#include<bits/stdc++.h>
using namespace std;
struct BSTnode
{
	int data;
	BSTnode* left;
	BSTnode* right;
};
BSTnode* createNode(int data)
{
	BSTnode* newNode= new BSTnode();
	newNode->data=data;
	newNode->left= NULL;
	newNode->right= NULL;
	return newNode;
}
BSTnode* Insert(BSTnode* rootptr, int data)
{
	if(rootptr== NULL)
	{
		rootptr = createNode(data);
	}
	else
	if(data <=rootptr->data)
	{
		rootptr->left = Insert(rootptr->left, data);
	}
	else
	{
		rootptr->right = Insert(rootptr->right, data);
	}
 return rootptr; 
}
bool search(BSTnode* rootptr, int data)
{
	if(rootptr== NULL)
					return false;
	else
	if(rootptr->data== data)
					return true;
	else 
	if(data<= rootptr->data)
					return search(rootptr->left, data);
	else 
	if (data> rootptr->data)
					return search(rootptr->right, data);
}
int FindHeight(struct BSTnode* rootptr)
{
	if(rootptr == NULL)
	{
		return -1;
	}
	else
	{
		return max(FindHeight(rootptr->left),FindHeight(rootptr->right));
	}
}
int main()
{
	BSTnode* rootptr;
	//rootptr=NULL;
	rootptr = Insert(rootptr,15);	
	rootptr = Insert(rootptr,10);	
	rootptr = Insert(rootptr,20);
	rootptr = Insert(rootptr,25);
	rootptr = Insert(rootptr,8);
	rootptr = Insert(rootptr, 5);
	rootptr = Insert(rootptr, 75);
	rootptr = Insert(rootptr,12);
int n;
/*cout<<"ENTER THE NUMBER TO BE SEARCHED"<<endl;
cin>>n;
if(search(rootptr, n)== true)
cout<<"FOUND"<<endl;
else
cout<<"NOT FOUND"<<endl;*/
cout<<"MAXIMUM HEIGHT IS : "<<(FindHeight(rootptr));
return 0;
}
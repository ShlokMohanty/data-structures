#include<bits/stdc++.h>
using namespace std;
class Node
{
	int data ;
	Node *next;
};
Node *head;
void Reverse(Node *head)
{
Node *temp,*current,*prev;
	current = head;
	prev = NULL;
while(current!=NULL)
{
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
}
	head = prev;
	return head;
}

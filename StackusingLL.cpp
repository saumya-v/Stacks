#include<iostream>
#include<climits>
using namespace std;
class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};
class StackUsingLL {
	Node *head;
	int size;

	public :

	StackUsingLL() {
		head=NULL;
		size=0;
	}
	int issize() {
		return size;
	}

	bool isEmpty() {

		return size == 0;
	}
	void push(int element) {
		Node *newnode=new Node(element);
		newnode->next=head;
		head=newnode;
		size++;
	}
	int pop() {
		if(isEmpty()) {
			return -1;
		}
		int ans=head->data;
		Node *temp=head;
		head=head->next;
		delete temp;
		size--;
		return ans;
	}

	int top() {
		if(isEmpty()) {
			return -1;
		}
		return head->data;
	}
};
int main(){
    StackUsingLL s;
    s.push(9);
    s.push(3);
    s.push(4);
    s.push(8);
    cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.issize() << endl;

	cout << s.isEmpty() << endl;
    cout<<s.top()<<endl;
}

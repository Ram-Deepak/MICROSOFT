#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
    Node() : data(0), prev(nullptr), next(nullptr) {}
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
    Node(int val, Node *prev, Node *next) : data(val), prev(prev), next(next) {}
};

class MyCircularDeque{
	public:
		int size;
		Node *head, *tail;
		int len = 0;
		MyCircularDeque(int k){
			head = new Node(0);
			tail = new Node(0);
			head->next = tail;
			tail->prev = head;
			size = k;
		}
		
		bool insertFront(int value){
			if(isFull())
				return false;
			Node *newNode = new Node(value);
			newNode->next = head->next;
			newNode->prev = head;
			head->next->prev = newNode;
			head->next = newNode;
			len++;
			return true;
		}
		
		bool insertLast(int value){
			if(isFull())
				return false;
			Node *newNode = new Node(value);
			newNode->prev = tail->prev;
			newNode->next = tail;
			tail->prev->next = newNode;
			tail->prev = newNode;
			len++;
			return true;
		}
		
		bool deleteFront(){
			if(isEmpty())
				return false;
			head->next->next->prev = head;
			head->next = head->next->next;
			len--;
			return true;
		}
		
		bool deleteLast(){
			if(isEmpty())
				return false;
			tail->prev->prev->next = tail;
			tail->prev = tail->prev->prev;
			len--;
			return true;
		}
		
		int getFront(){
			if(isEmpty())
				return -1;
			return head->next->data;
		}
		
		int getRear(){
			if(isEmpty())
				return -1;
			return tail->prev->data;
		}
		
		bool isEmpty(){
			return len==0;
		}
		
		bool isFull(){
			return len==size;
		}
};

int main(){
	int n;
	cin >> n;
	vector<int> operations;
	for(int op=0; op<n; op++){
		int operation;
		cin >> operation;
		operations.push_back(operation);
	}
	vector<int> perform;
	for(int op=0; op<n; op++){
		int operation;
		cin >> operation;
		perform.push_back(operation);
	}
	MyCircularDeque *mcdq;
	vector<int> outputs;
	for(int op=0; op<n; op++){
		if(operations[op]==1){
			mcdq = new MyCircularDeque(perform[op]);
			outputs.push_back(-2);
		}
		else if(operations[op]==2){
			bool result = mcdq->insertFront(perform[op]);
		}
		else if(operations[op]==3){
			bool result = mcdq->insertLast(perform[op]);
		}
		else if(operations[op]==4){
			bool result = mcdq->deleteFront();
			if(result)
				outputs.push_back(1001);
			else
				outputs.push_back(-1001);
		}
		else if(operations[op]==5){
			bool result = mcdq->deleteLast();
			if(result)
				outputs.push_back(1001);
			else
				outputs.push_back(-1001);
		}
		else if(operations[op]==6){
			int val = mcdq->getFront();
			outputs.push_back(val);
		}
		else if(operations[op]==7){
			int val = mcdq->getRear();
			outputs.push_back(val);
		}
		else if(operations[op]==8){
			bool result = mcdq->isEmpty();
			if(result)
				outputs.push_back(1001);
			else
				outputs.push_back(-1001);
		}
		else if(operations[op]==9){
			bool result = mcdq->isFull();
			if(result)
				outputs.push_back(1001);
			else
				outputs.push_back(-1001);
		}
	}
	cout <<"[null";
	for(int output=1; output<n; output++){
		if(outputs[output]==-2)
			cout << ", null";
		else if(outputs[output]==1001)
			cout << ", true";
		else if(outputs[output]==-1001)
			cout << ", false";
		else
			cout << ", " << outputs[output];
	}
	cout <<"]";
}  

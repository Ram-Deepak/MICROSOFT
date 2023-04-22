#include<bits/stdc++.h>

using namespace std;

class Queue{
    public:
        int *queue;
        int front = 0, rear = -1;
        int len = 0, size;
        
        Queue(int n){
            queue = (int *)malloc(sizeof(int)*n));
            size = n;
        }
        
        bool enQueue(int val){
            if(isFull())
                return false;
            rear = (rear+1)%size;
            queue[rear] = val;
            len++;
            return true;
        }
        
        bool deQueue(){
        	if(isEmpty())
        		return false;
        	front = (front+1)%size;
        	len--;
        	return true;
        }
        
        int Front(){
        	if(isEmpty())
        		return -1;
        	return queue[front];
        }
        
        int Rear(){
        	if(isEmpty())
        		return -1;
        	return queue[rear];
        }
        
        bool isFull(){
        	return len==size;
        }
        
        bool isEmpty(){
        	return len==0;
        }        
};

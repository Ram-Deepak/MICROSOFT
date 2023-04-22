#include<bits/stdc++.h>

using namespace std;

class MaxHeap{
	MaxHeap(){}
	
	void max_heapify(vector<int>& array, int index){
		int largest = index;
		int leftChild = 2*index+1;
		int rightChild = 2*index+2;
		
		if(leftChild<array.size() and array[leftChild] > array[largest])
			largest = leftChild;
		if(rightChild<array.size() and array[rightChild] > array[largest])
			largest = rightChild;
		
		if(largest != index){
			int temp = array[index];
			array[index] = array[largest];
			array[largest] = temp;
			max_heapify(array, largest);
		}
	}
	
	void build_max_heap(vector<int>& array){
		int l = array.size();
		for(int index=(l/2)-1; index>=0; index--)
			max_heapify(array, index);
	}
	
	void delete_max(vector<int>& array){
		int last = array[array.size()-1];
		int temp = array[0];
		array[0] = array[last];
		array[last] = temp;
		array.pop_back();
		max_heapify(array, 0);
	}
	
	void insert(vector<int>& array, int element){
		array.push_back(element);
		int pos = array.size()-1;
		while(pos>0){
			if(array[pos] > array[(pos-1)/2]){
				int temp = array[pos];
				array[pos] = array[(pos-1)/2];
				array[(pos-1)/2] = temp;
				pos = (pos-1)/2;
			}
			else
				break;
		}
	}
};

int main(){
	int n;
	cin >> n;
	vector<int> array;
	for(int index=0; index<n; index++)}
		int val;
		cin >> val;
		array.push_back(val);
	}

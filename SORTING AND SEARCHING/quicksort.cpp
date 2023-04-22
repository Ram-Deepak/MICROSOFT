#include<bits/stdc++.h>

using namespace std;

void swap(vector<int>&array, int index, int nextIndex){
    int temp = array[index];
    array[index] = array[nextIndex];
    array[nextIndex] = temp;
}

void quickSort(vector<int>& array, int left, int right){
    if(left>=right)
        return;
    int pivot = left;
    int lower = left+1, upper = left+1;
    int index = left+1;
    while(lower<=right && upper<=right){
        if(array[index]>array[pivot])
            upper++;
        else{
            swap(array, index, lower);
            lower++;
            upper++;
        } 
        index++;
    }
    swap(array, pivot, lower-1);
    upper--;
    lower--;
    quickSort(array, left, lower-1);
    quickSort(array, lower+1, upper);
}

int main(){
    int n;
    cin >> n;
    vector<int> array;
    for(int index=0; index<n; index++){
        int val;
        cin >> val;
        array.push_back(val);
    }
    quickSort(array, 0, n-1);
    for(int number : array){
        cout << number << " ";
    }
    cout << endl;
    return 0;
}

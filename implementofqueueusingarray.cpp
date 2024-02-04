#include <bits/stdc++.h> 
#include<queue>
#include<iostream>
class Queue {
private:
    int* arr;
    int size;
    int front1;
    int rear;

public:


    Queue() {
        size = 100001;
        arr = new int[100001];
        front1= 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(front1==rear){
            return 1;
        }
        return 0;
    }

    void enqueue(int data) {
        if(rear==size){
            // cout<<"Queue is full"<endl;
            return;
        }
        else{
            arr[rear++] = data;
        }
    }

    int dequeue() {
        if(front1==rear){
            return -1;
        }
        int ans = arr[front1];
        
            
            arr[front1] =-1;
            front1++;
            if(front1==rear){
                front1 = 0;
                rear = 0;
            }

        
        return ans;
    }

    int front() {
        // Implement the front() function
        if(front1==rear){
            return -1;
        }
        return arr[front1];

        
    }
};
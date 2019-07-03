#include "MinHeap.hpp"


MinHeap::MinHeap(){
    int* array = new int[0];
    unsigned int capacity = 0;
    int size = 0;
}

void MinHeap::swim(){
    for(int i = 0; i < size; i--){
        if(array[size] < array[size]){
            int temp = array[size];
            array[size]= array[size/2];
            array[size/2] = temp;
    }
    }
}

void MinHeap::sink(int i){
    if(array[i] > array[2*i] && array[(2*i) +1]){
        return;
    }
    else if(array[i] > array[2*i]){
        int temp = array [i];
        array[i] = array[2*i];
        array[2*i]= temp;
    }
    else if(array[i] > array[(2*i)+1]){
        int temp = array[i];
        array[i] = array[(2*i)+1];
        array[(2*i)+1]= temp;
    }
}


  /** search(int i, int data)
   * Recursively searches for data in the MinHeap's subtree rooted at i,
   * returning true if the data is found and false if i is greater than or
   * equal to size or data is less than the MinHeap's value at i.
   */
  bool MinHeap::search(int i, int data){
      if(i >= size){
          return false;
      }
      else if(array[i] == data){
          return true;
      }
      else if(data < array[i]){
          return false;
      }
      else{
          search(i++,data);
        }
        
      
  }

  /** erase(int i, int data)
   * Recursively searches for data in the MinHeap's subtree rooted at i,
   * calling remove on i if data is found in the tree.
   * Does nothing if data is not found in the subtree.
   */
  void MinHeap::erase(int i, int data){}


  /** push(int data)
   * Inserts data into the MinHeap such that the heap order property is
   * preserved.
   * Assumes duplicate elements will not be pushed.
   */
  void MinHeap::push(int data){}

  /** count()
   * Returns the number of elements in the MinHeap.
   */
  int MinHeap::count(){return 0;}

  /** pop()
   * Removes and returns the minimum element in the MinHeap, preserving the
   * heap order property.
   * Throws an error if the heap is empty.
   */
  int MinHeap::pop(){return 0;}

  /** peek()
   * Returns the minimum element in the MinHeap without modifying its contents.
   * Throws an error if the heap is empty.
   */
  int MinHeap::peek(){
      return 0;
  }

  /** search(int data)
   * Searches the MinHeap for the given data, returning true if the data is
   * found and false otherwise.
   */
  bool MinHeap::search(int data){
      return true;
  }

  /** remove(int i)
   * Removes the element at index i in the MinHeap tree (indexed left-to-right,
   * top-to-bottom) and returns its value.
   * Throws an error if the heap is empty or the index is out of bounds.
   */
  int MinHeap::remove(int i){
      return 0;
  }

  /** erase(int data)
   * Searches the MinHeap for the given data, and deletes it if it's found,
   * preserving the heap order property.
   * Does nothing if data is not found.
   */
  void MinHeap::erase(int data){}

  /** print()
   * Prints the contents of the MinHeap tree to the ostream from left-to-right,
   * top-to-bottom.
   */
  void MinHeap::print(std::ostream& oss){}


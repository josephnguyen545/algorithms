#include "Graph.hpp"
#include <vector>
#include <iostream>

 Graph::Graph(unsigned int n){
    if(!n){
        throw "No Length";
    }
    //create new matrix 
    int** temp = new int*[n];
    for(int i = 0; i < n; ++i){
        temp[i] = new int[n];
    }
    //fill matrix with 0's 
    for(int i = 0; i < n; i++){
        data.push_back(0);
        for(int j = 0; j < n; j++){
            temp[i][j] = 0;

         }
    }
    matrix = temp;
    size = n;
}

 Graph::~Graph(){
}

 unsigned int Graph::node_count(){
    return size;
}

 unsigned int Graph::edge_count(){
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(matrix[i][j]){
                count++;
            }
        }
    }
    return count;
}

 int Graph::get_value(unsigned int v){
    return data.at(v);
}

 void Graph::set_value(unsigned int v, int val){
    if(v >= size){
        throw "Not in range";
    }
    data[v] = val;
}

 int Graph::weight(unsigned int v, unsigned int w){
    if(w >= size || v >= size){
        throw "Not in range";
    }
    return matrix[v][w];
}

 bool Graph::has_edge(unsigned int v, unsigned int w){
    if(w >= size || v >= size){
        throw "Not in range";
    }
    return matrix[v][w];
}

 void Graph::add_edge(unsigned int v, unsigned int w, int weight){
    if(v == w){
        throw "self contained node";
    }else if(weight == 0){
        throw "use remove_edge";
    }else if(v >= size || w >= size){
        throw "N/A";
    }else{
        matrix[v][w] = weight;
    }
}

 void Graph::remove_edge(unsigned int v, unsigned int w){
    matrix[v][w] ? matrix[v][w] = 0 : throw "edge doesn't exist";
}

 std::vector<int> Graph::neighbors(unsigned int v){
    if(v >= size){
        throw "Not in range";
    }
    std::vector<int> ret;
    for(int i = 0; i < size; ++i){
        if(matrix[v][i]){
            ret.push_back(i);
        }
    }
    return ret;
 }
#pragma once
#include <vector>

class Sumvector
{
private:
    int size;                   
    int num_threads;            
    std::vector<int>values;    
    int result;           
    void calc_sum_part(int l_index, int r_index, int index); 
public:
    Sumvector(int _size, int _num_threads);
    ~Sumvector();
    int calculate_using_threads();   
    int calculate_without_threads(); 
    void printArray();            
};

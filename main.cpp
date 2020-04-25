#include<thread>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

void asciiToVector(vector<int> &arr)
{
    ifstream inputFile("input.in");
    if(inputFile.good()){ //Check if file exists then open the file
        int currentNumber;
        while (inputFile >> currentNumber)
            arr.push_back(currentNumber); //push data to the vector
    }
}
void swap(int* a, int* b)
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (vector<int>& arr, int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    { 
        
        if (arr[j] <= pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]);
    return (i + 1); 
} 
void quickSort(vector<int>& arr, int low, int high) 
{ 
    if (low < high) 
    { 
        
        int pi = partition(arr, low, high); 
        
        thread t1([&]{
            quickSort(arr, low, pi-1);
        });
        thread t2([&]{
            quickSort(arr, pi+1, high);
        });
        t1.join();
        t2.join();
    } 
    
} 
void printToFile(vector<int>& arr){
    ofstream myFile;
    myFile.open("output.in");
    for(int i = 1 ; i<=arr.size()-1 ; ++i)
        myFile<<arr[i]<<" ";
    myFile.close();
}
int main() 
{ 
    vector<int> arr;
    asciiToVector(std::ref(arr));
    quickSort(arr, 0, arr.size()-1); 
    printToFile(arr);
    return 0; 
} 
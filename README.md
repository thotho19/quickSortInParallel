# QUICK SORT IN PARALLEL FOR 10,000K NUMBER
``
The Main Problem is write a Quick Sort algorithm in c++ to sort 10,000 random numbers by using the multi-threading concept?
``
<br>
## Parallel sort
Sorting a list of elements is a very common operation. A sequential sorting algorithm may not be efficient enough when we have to sort a huge volume of data. Therefore, parallel algorithms are used in sorting but not fastest way.
## Quick Sort in parallel 
Hyper quick sort is an implementation of quick sort on hypercube. Its steps are as follows :-
- Divide the unsorted list among each node.
- Sort each node locally.
- From node 0, broadcast the median value.
- Split each list locally, then exchange the halves across the highest dimension.
- Repeat steps 3 and 4 in parallel until the dimension reaches 0.
## Advantages of Multithreaded Processes
- Multithreading allow to execution of multiple parts of a program at the same time.
- Multithreading are lightweight processes.
- huge data can be processed easily.
## Disadvantages of Multithreaded Processes
- First of all, threads cannot speed up execution of code. They do not make the computer run faster. All they can do is increase the efficiency of the computer by using time that would otherwise be wasted.
- the cost of creating a thread will create more overhead than distributing the task.
- single thread will be faster than multithreading depeend on execution time.
- The number of processors has to a be a power of 2.
Very High communication overhead.
## TIME BENCHMARKS IN [MULTI-THREADING] ALOGRITHM
| Iteration | Execution time in MS| Execution time in SECONDS |Sorted|
| :----------:|:-------------:| :-----:|:-----:|
| 1  | 689.687ms| 0.689687s|**TRUE**|
| 2 | 729.155ms| 0.729155s|**TRUE**|
| 3 | 708.939ms| 0.708939s|**TRUE**|

## TIME BENCHMARKS IN [RECURSION] ONLY ALOGRITHM
| Iteration | Execution time in MS| Execution time in SECONDS |Sorted|
| :----------:|:-------------:| :-----:|:-----:|
| 1  | 11.031ms| 0.011031s|**TRUE**|
| 2 | 13.41ms| 0.01341s|**TRUE**|
| 3 | 9.899ms| 0.009899s|**TRUE**|

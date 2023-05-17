Priority Queue 
------------------------------------------------------
// N.B :  priority Queue basically refers to the `max priority queue` . that means first element is always larger One .
// To make a min priority queue use this line only in declaration :
 
 ``` 
 priority_queue< data_type , vector < data_type > , greater< data_type > > que_name ;
 ```

Priority queues are a type of container adapters, specifically designed such that `the first element of the queue is the 
greatest of all elements` in the queue and elements are in `non increasing order` (hence we can see that each element of the 
queue has a priority {fixed order}).
```
                #include <iostream>
                #include <queue>

                using namespace std;

                void showpq(priority_queue<int> gq){
                    priority_queue<int> g = gq;
                    while (!g.empty()) {
                        cout << '\t' << g.top();
                        g.pop();
                    }
                    cout << '\n';
                }

                int main(){
                    priority_queue<int> gquiz;
                    gquiz.push(10);
                    gquiz.push(30);
                    gquiz.push(20);
                    gquiz.push(5);
                    gquiz.push(1);

                    cout << "The priority queue gquiz is : ";
                    showpq(gquiz);

                    cout << "\ngquiz.size() : " << gquiz.size();
                    cout << "\ngquiz.top() : " << gquiz.top();

                    cout << "\ngquiz.pop() : ";
                    gquiz.pop();
                    showpq(gquiz);

                    return 0;
                }
                
```

Output: 
```
The priority queue gquiz is :     30    20    10    5    1

gquiz.size() : 5
gquiz.top() : 30
gquiz.pop() :     20    10    5    1
```

### How to create a min heap for priority queue? 

                                
// Syntax to create a min heap for priority queue 
           `priority_queue <int, vector<int>, greater<int>> g = gq;  `
           

                #include <iostream>
                #include <queue>

                using namespace std;

                void showpq(
                    priority_queue<int, vector<int>, greater<int> > gq){
                    
                    priority_queue<int, vector<int>, greater<int> > g = gq;
                    while (!g.empty()) {
                        cout << '\t' << g.top();
                        g.pop();
                    }
                    cout << '\n';
                }

                int main()
                {
                    priority_queue<int, vector<int>, greater<int> > gquiz;
                    gquiz.push(10);
                    gquiz.push(30);
                    gquiz.push(20);
                    gquiz.push(5);
                    gquiz.push(1);

                    cout << "The priority queue gquiz is : ";
                    showpq(gquiz);

                    cout << "\ngquiz.size() : " << gquiz.size();
                    cout << "\ngquiz.top() : " << gquiz.top();

                    cout << "\ngquiz.pop() : ";
                    gquiz.pop();
                    showpq(gquiz);

                    return 0;

      }
      
Output: 

```
The priority queue gquiz is :     1    5    10    20    30

gquiz.size() : 5
gquiz.top() : 1
gquiz.pop() :     5    10    20    30

```

Note : The above syntax may be difficult to remember, so in case of numeric values, we can multiply the values with -1 and use max heap to get the effect of min heap.

### Methods of priority queue are: 

      
`pq.empty()`  - returns whether the queue is empty.

`pq.size()` - returns the size of the queue.

`pq.top() `- Returns a reference to the top most element of the queue

`pq.push( g ) `- adds the element ‘g’ at the end of the queue.

`pq.pop()` – pop() function deletes the first element of the queue.

`pq1.swap(pq2)` L– This function is used to swap the contents of one pq with another pq of same type and size.

`pq.emplace(g)` – used to insert a new element , the new element is added to the top of the priority queue.


`priority_queue:: value_type` – Represents the type of object stored as an element in a priority_queue. It acts as a synonym for the template parameter.https://www.geeksforgeeks.org/priority_queue-value_type-in-c-stl/





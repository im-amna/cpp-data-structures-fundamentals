#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    // Array
    int arr[] = {10, 20, 30, 40};

    cout << "Array: ";
    for(int i = 0; i < 4; i++)
        cout << arr[i] << " ";

    cout << endl;

    // Vector
    vector<int> v = {5, 2, 8, 1};

    sort(v.begin(), v.end());

    cout << "Vector: ";
    for(int n : v)
        cout << n << " ";

    cout << endl;

    // Set
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(10);

    cout << "Set: ";
    for(int n : s)
        cout << n << " ";

    cout << endl;

    // Unordered Map
    unordered_map<string, int> marks;

    marks["Ali"] = 90;
    marks["Sara"] = 95;

    cout << "Hash Map:" << endl;

    for(auto p : marks)
        cout << p.first << " : " << p.second << endl;

    // Priority Queue (Max Heap)
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(20);

    cout << "Max Heap Top: " << maxHeap.top() << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);

    cout << "Min Heap Top: " << minHeap.top() << endl;

    return 0;
}

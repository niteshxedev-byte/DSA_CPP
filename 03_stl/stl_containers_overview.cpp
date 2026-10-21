#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm> // for demo algorithms
#include <iterator>  // for ostream_iterator

using namespace std;

// Helper to print any container that supports begin/end and iterator dereference to printable type
template <typename Container>
void printContainer(const Container& c, const string& name) {
    cout << name << ": ";
    for (const auto& elem : c) {
        cout << elem << ' ';
    }
    cout << endl;
}

// Specialized printer for map-like containers (key,value)
template <typename K, typename V>
void printContainer(const map<K,V>& m, const string& name) {
    cout << name << ": ";
    for (const auto& p : m) {
        cout << '[' << p.first << "->" << p.second << "] ";
    }
    cout << endl;
}
template <typename K, typename V>
void printContainer(const unordered_map<K,V>& um, const string& name) {
    cout << name << ": ";
    for (const auto& p : um) {
        cout << '[' << p.first << "->" << p.second << "] ";
    }
    cout << endl;
}

// Sequence Containers -------------------------------------------------
void demoVector() {
    vector<int> v = {1,2,3,4,5};
    v.push_back(6);
    v.insert(v.begin()+2, 99); // insert 99 at index 2
    printContainer(v, "vector");
}

void demoDeque() {
    deque<int> d = {10,20,30};
    d.push_front(5);
    d.push_back(40);
    printContainer(d, "deque");
}

void demoList() {
    list<int> lst = {7,8,9};
    lst.push_back(1);
    lst.push_front(0);
    printContainer(lst, "list");
}

void demoArray() {
    array<int,5> arr = {{1,2,3,4,5}}; // double braces for aggregate init
    // arrays have fixed size; we can modify elements
    arr[2] = 99;
    printContainer(arr, "array");
}

// Associative Containers (Tree-based) -------------------------------
void demoSet() {
    set<int> s = {5,1,3,4,2};
    s.insert(6);
    printContainer(s, "set");
}

void demoMap() {
    map<string,int> m;
    m["apple"] = 3;
    m["banana"] = 5;
    m["cherry"] = 2;
    printContainer(m, "map");
}

// Unordered Associative Containers (Hash-based) --------------------
void demoUnorderedSet() {
    unordered_set<int> us = {10,20,30,40};
    us.insert(50);
    printContainer(us, "unordered_set");
}

void demoUnorderedMap() {
    unordered_map<string,int> um;
    um["x"] = 100;
    um["y"] = 200;
    um["z"] = 300;
    printContainer(um, "unordered_map");
}

// Container Adaptors ------------------------------------------------
void demoStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    // To show contents we pop into a temporary vector
    vector<int> tmp;
    while (!st.empty()) {
        tmp.push_back(st.top());
        st.pop();
    }
    // reverse to show original order
    reverse(tmp.begin(), tmp.end());
    printContainer(tmp, "stack (contents)");
}

void demoQueue() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    vector<int> tmp;
    while (!q.empty()) {
        tmp.push_back(q.front());
        q.pop();
    }
    printContainer(tmp, "queue (contents)");
}

void demoPriorityQueue() {
    priority_queue<int> pq; // max-heap by default
    pq.push(5);
    pq.push(1);
    pq.push(9);
    pq.push(3);
    vector<int> tmp;
    while (!pq.empty()) {
        tmp.push_back(pq.top());
        pq.pop();
    }
    printContainer(tmp, "priority_queue (contents, descending)");
}

// Main -----------------------------------------------------------------
int main() {
    cout << "=== Sequence Containers ===" << endl;
    demoVector();
    demoDeque();
    demoList();
    demoArray();

    cout << "\n=== Associative Containers (Tree-based) ===" << endl;
    demoSet();
    demoMap();

    cout << "\n=== Unordered Associative Containers (Hash-based) ===" << endl;
    demoUnorderedSet();
    demoUnorderedMap();

    cout << "\n=== Container Adaptors ===" << endl;
    demoStack();
    demoQueue();
    demoPriorityQueue();

    return 0;
}
# Vector - STL

**Vector is a dynamic array that can automatically resize itself as elements are added or removed.**

### Header File

```c++
#include <vector>
```


### Syntax:
```c++
// Structure

keyword<type> name(size);
```

# Declaration and Initializations
### Basic Declaration:
```c++
// Creates a vector that increases size dynamically

vector<int> vc;         // Dynamically grows in size
vector<int> vc(5);      // Fixed size 
```

### Initialization at the time of Declaration:

```c++
vector<int> vc {1, 2, 3};       // 1 2 3

vector<int> vc = {2, 3, 4};     // 2 3 4
```

### Initialized with same values:

```c++
// arguments (repeated, value)

vector<int> vc(4, 2);        // 2 2 2 2
```

### Declared from another vector:

```c++
vector<int> vc = {1,2,3};

vector<int> vc2(vc);        // vc2 is a copy of vc
```

### Declared from an array


```c++
int arr[] = {1, 2, 3};
	
vector<int> vc2(begin(arr), end(arr));     // 1 2 3
```

# Useful Functions and Methods

### assign()

- Can copy values from another
- Can copy a specific value multiple times
- Overwrites previous values

```c++
vector<int> vc;

vc.assign(iterator.begin(), iterator.end());     // Uses another DS
vc.assign(size, value);                          // Copies 
```

### clear()

- Removes all elements of the vector

```c++
vector<int> vc = {1,2,3};
vc.clear();                  // No Value
```

### size()

- Returns the number of elements in a vector 

```c++
vector<int> vc = {1, 2, 3};

cout << vc.size() << endl;      // 3
```

### capacity()

- Returns how many elements the vector can contain 

```c++
vector<int> vc(5);
vc.assign(3, 1);
	
cout << vc.capacity() << endl;          // 5
cout << vc.size() << endl;              // 3
```






### at()

- Returns the value stored at specific index

```c++

vector<int> vc = {2, 3, 4};

cout << vc.at(1) << endl;       // 3
```
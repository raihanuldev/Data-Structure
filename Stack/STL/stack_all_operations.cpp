// User function Template for C++
//geekforgeeks Problem-
// Function to push an element into the stack.
void insert(stack<int> &s, int x) {
    s.push(x);
}

// Function to remove top element from stack.
void remove(stack<int> &s) {
    if(!s.empty()){
        s.pop();
    }
    
}

// Function to print the top element of stack.
void headOf_Stack(stack<int> &s) {
    int x = s.top();
        cout << x << " " << endl;
}

// Function to search an element in the stack.
bool find(stack<int> s, int val) {
    bool exists = false;
    

    while(!s.empty())
    {
        int x = s.top();
        if(x==val)
        {
            exists = true;
            break;
        }
        else{
            s.pop();
        }
    }

    if (exists == true) {
        return true;
    } else {
        return false;
    }
}
 #include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int *top;
    int *next;
    
    int n,s;
    
    int freespot;
    
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        // Top ko intialise krdiya
        for(int i=0;i<n;i++){
            top[i] = -1;
        }
        
        // Next ko intialise krdo
        for(int i=0;i<s;i++){
            next[i] = i+1;
        }
        
        // Update last Index value to -1
        next[s-1] = -1;
        
        // Intialise free spot;
        freespot = 0;
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Check for Overflow
        if(freespot == -1){
            return false;
        }
        
        // Find Index -> kha mujhe push krna hai
        int index = freespot;
        
        // Update freespot -> 
        freespot = next[index];
        
        // Insert element into array
        arr[index] = x;
        
        // Update next
        next[index] = top[m-1];
        
        // Update TOP
        top[m-1] = index;
        
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Check Underflow cond -> Stack Khalii hai
        if(top[m-1] == -1){
            return -1;
        }
        
        int index = top[m-1];
        
        top[m-1] = next[index];
        
        next[index] = freespot;
        
        freespot = index;
        
        return arr[index];
    }
};
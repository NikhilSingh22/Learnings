class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);
    }

    int dequeue() {
        int t;
        if(!output.empty())
        {
           t = output.top();
            output.pop();
        }
        else
        {
            if(input.empty())
            {
                return -1;
            }
            
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            t = output.top();
            output.pop();
        }
        return t;
    }
  
  
  
//   leetcode 
   stack<int>input,output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int t;
        if(!output.empty())
        {
            t = output.top();
            output.pop();
        }
        else
        {
            if(input.empty())
            return -1;
            
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            t = output.top();
            output.pop();
        }
        return t;
    }
    
    int peek() {
       if(output.empty())
       {
           if(input.empty())
           {
               return -1;
           }
           else
           {
               while(!input.empty())
               {
                   output.push(input.top());
                   input.pop();
               }
           }
       }
       return output.top();
    }
    
    bool empty() {
        if(output.empty()&& input.empty())
            return true;
        else 
            return false;
    }
};

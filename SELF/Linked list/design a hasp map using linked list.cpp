// Implement MyHashSet class:

// void add(key) Inserts the value key into the HashSet.
// bool contains(key) Returns whether the value key exists in the HashSet or not.
// void remove(key) Removes the value key in the HashSet. If key does not exist in the HashSet, do nothing.

 struct Listnode 
    {
        int val;
        Listnode* next;
        Listnode(int x) : val(x),next(nullptr){}
    };

    Listnode* head;

    MyHashSet() {
       head = new Listnode(-1);
    }
    
    void add(int key) {
        Listnode *temp = head;
        if(contains(key)) return;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next= new Listnode(key);
    }
    
    void remove(int key) {
       Listnode *temp = head;
       Listnode *prev;

       while(temp)
       {
           if(temp->val==key)
           {
               if(!prev) temp=temp->next;
               else prev->next=temp->next;
           }
           else{
               prev=temp;
           }
           temp=temp->next;
       }
    }
    
    bool contains(int key) {
        Listnode * temp = head;
        while(temp)
        {
            if(temp->val==key)
             return true;
            
            temp=temp->next;
        }
        return false;
    }
};

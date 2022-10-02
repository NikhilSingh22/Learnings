struct Listnode
    {
        int key;
        int value;
        Listnode * next;
        Listnode(int x , int y): key(x),value(y),next(nullptr) {}
    };

    Listnode * head;
    MyHashMap() {
        head = new Listnode(-1,-1);
    }
    
    void put(int key, int value) {
        Listnode *temp = head;

        while(temp->next)
        {
            temp=temp->next; // it must move to next before checking or putting, otherwise error.
            if(temp->key == key)
            { 
                temp->value=value;
                return;
            }
        }
        temp->next = new Listnode(key,value);
    }
    
    int get(int key) {
        Listnode *temp = head;

        while(temp)
        {
            if(temp->key == key)
            {
                return temp->value;
            }
            temp=temp->next;
        }
        return -1;
    }
    
    void remove(int key) {
        Listnode *temp =head;
        Listnode *prev;
        while(temp)
        {
            if(temp->key == key)
            {
                if(!prev) temp = temp->next;
                else prev->next = temp->next;
            }
            else{
                prev = temp;
            }
            temp=temp->next;
        }
    }
};

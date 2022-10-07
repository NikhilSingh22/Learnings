void towersolve(int from , int to , int aux , int n , int &x)
    {
        x++;
        if(n==1)
        {
            cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
            return;
        }
        towersolve(from,aux,to,n-1,x);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        towersolve(aux,to,from,n-1,x);
    }
    
    long long toh(int N, int from, int to, int aux) {
        int x = 0;
        towersolve(from,to,aux,N,x);
        return x;
    }

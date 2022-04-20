class ATM {
    private:
    vector<long long> v;

public:
    ATM() {
        vector<long long> v1(5,0);
        v=v1;
    }
    
    void deposit(vector<int> b) {
        for(long long i=0;i<b.size();i++)
        {
            v[i]+=b[i];
        }
    }
    
    vector<int> withdraw(int amount) {
    vector<int> notes{20,50,100,200,500};
    // notes.push_back(20);
    // notes.push_back(50);
    // notes.push_back(100);
    // notes.push_back(200);
    // notes.push_back(500);
        vector<int> v2(5,0);
        for(int i=4;i>=0;i--)
        {
            if(notes[i]!=0&&amount>=notes[i])
            {
                long long x=amount/notes[i];
                x=min(x,v[i]);
                amount-=x*notes[i];
                v2[i]+=x;
            }
           
        }
        if(amount==0)
        {
            for(int i=0;i<5;i++)
            {
                v[i]-=v2[i];
            }
            return v2;
        }
        else
        return {-1};
    }
};
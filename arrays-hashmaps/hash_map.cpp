#include <bits/stdc++.h>
#include <cmath>

using namespace std;

typedef struct Node
{
    int key;
    int value;
    struct Node *next = nullptr;
} Node;

class HashMap
{
public:
    Node **buckets;
    int cap;
    int sz = 0;
    int lg = 0;
    double maxLoad = 0.75;
    const double PHI = 1.61803398875;
    const unsigned long long C = pow(2, 64) / PHI;
    HashMap(int initCap = 8)
    {
        if (initCap < 8)
            initCap = 8;

        // Set to power of 2
        double lg = log2(initCap);
        if (lg != floor(lg))
        {
            lg = ceil(lg);
            initCap = pow(2, lg);
        }
        cap = initCap;
        // Init array
        buckets = new Node *[cap];
        for (int i = 0; i < cap; i++)
        {
            buckets[i] = nullptr;
        }
        this->lg = lg;
    }
    ~HashMap()
    {
        for (int i = 0; i < cap; i++)
        {
            Node *current = buckets[i];
            if (current)
            {
                Node *to_delete;
                while (current)
                {
                    to_delete = current;
                    current = current->next;
                    delete to_delete;
                }
            }
        }
        delete[] buckets;
    }
    const unsigned long long hash(int key)
    {
        return C * key;
    }
    const int indexFor(int key)
    {
        return hash(key) >> (64 - lg);
    }
};

int main()
{
    HashMap map(93);
    cout << "HashMap created with capacity: " << map.cap << endl;
    cout << "HashMap size: " << map.sz << endl;
    cout << "HashMap key index for 5: " << map.indexFor(5) << endl;
    cout << "Hash value for key 5: " << map.hash(5) << endl;
    return 0;
}
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
    double maxLoad = 0.75;
    int shift = 0;
    const unsigned long long C = 11400714819323198485ull;
    HashMap(int initCap = 8) // handle rule of 3
    {
        if (initCap < 8)
            initCap = 8;

        // Set to power of 2
        if ((initCap & (initCap - 1)) != 0)
            initCap = 8;

        cap = initCap;
        shift = log2(cap);
        // Init array
        buckets = new Node *[cap];
        for (int i = 0; i < cap; i++)
        {
            buckets[i] = nullptr;
        }
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
    unsigned long long hash(int key) const
    {
        return C * key;
    }
    int indexFor(int key) const
    {
        return hash(key) >> (64 - shift);
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
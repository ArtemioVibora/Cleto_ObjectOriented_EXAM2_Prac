#include <iostream>

using namespace std;

class Counter
{
private:
    int count;
public:
    void init_count()
    {
        count = 0;
    }    

    void incCount()
    {
        ++count;
    }

    int getCount()
    {
        return count;
    }
};

int main()
{
    Counter c1, c2;

    c1.init_count();
    c2.init_count();

    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;

    c1.incCount();
    c2.incCount();
    c2.incCount();
    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;
}

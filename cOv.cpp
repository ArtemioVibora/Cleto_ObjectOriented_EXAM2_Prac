#include <iostream>

using namespace std;

class Counter
{
    private:
        int count;
    public:
        Counter() : count(0) {}
        
        void operator ++ ()
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

    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;

    ++c1;
    ++c2;
    ++c2;

    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;
}

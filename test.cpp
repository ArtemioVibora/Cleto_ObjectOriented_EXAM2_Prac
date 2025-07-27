#include <iostream>

using namespace std;

class test
{
    private:
        static int count;
    public:
        test() { count++; }

        int getCount()
        {
            return count;
        }

};

int test::count = 0;

int main()
{
    test t1, t2, t3;
    cout << "count is " << t1.getCount() << endl;
    cout << "count is " << t2.getCount() << endl;
    cout << "count is " << t3.getCount() << endl;
}

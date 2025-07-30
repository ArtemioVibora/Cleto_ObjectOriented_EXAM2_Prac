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
    int input;

    Counter c1;

    while(input != 3)
    {
        cout << "Enter: ";
        cin >> input;
        if (input == 1)
            ++c1;
        else if (input == 2)
            cout << "c1 = " << c1.getCount() << endl;
    }
}

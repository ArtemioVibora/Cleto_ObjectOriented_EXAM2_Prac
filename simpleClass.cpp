#include <iostream>

using namespace std;

class simpleClass
{
    private:
        int someData;
    public:
        void setData(int data)
        {
            someData = data;
        }

        void showData()
        {
            cout << "Data is " << someData << endl;
        }
};

int main()
{
    simpleClass sc;

    sc.setData(100);
    sc.showData();
}

#include <iostream>

using namespace std;

class Length
{
    private:
        int feet;
        float inches;
    public:
        Length() : feet(0), inches(0.0f) {};
        Length(int ft, float in) : feet(ft) , inches(in) {}

        void getLength()
        {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;

            while (inches >= 12)
            {
                inches = inches - 12;
                ++feet;
            }
        }

        void showLength() const
        {
            cout << feet << " feet and " << inches << " inches." << endl;
        }

        Length addLength(const Length&) const; 
};

Length Length::addLength(const Length& l2) const
{
    Length temp;

    temp.inches = inches + l2.inches;
    temp.feet = feet + l2.feet;

    while(temp.inches >= 12)
    {
        temp.inches = temp.inches - 12;
        ++temp.feet;
    }

    return temp;
}

int main()
{
    Length l1, l3;
    Length l2(11, 6.25);

    l1.getLength();
    l3 = l1.addLength(l2);


    cout << endl << "Length 1 = "; l1.showLength();
    cout << "Length 2 = "; l2.showLength();
    cout << "Length 3 = "; l3.showLength();
}

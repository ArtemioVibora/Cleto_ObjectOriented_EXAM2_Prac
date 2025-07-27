#include <iostream>

using namespace std;

class Length
{
private:
    int feet;
    float inches;

public:
    void setLength(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    void getLength()
    {
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter Inches: ";
        cin >> inches;
    }

    void showLength()
    {
        cout << feet << " feet and " << inches << " inches. " << endl; 
    }
};

int main()
{
    Length len1, len2;

    len1.setLength(11, 6.25);
    len2.getLength();

    cout << "Length 1" << endl;
    len1.showLength();
    cout << "Length 2" << endl;
    len2.showLength();
}

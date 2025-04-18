#include <iostream>
using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;

    public:
        Arithmetic(T a, T b);
        T add();
        T subtract();
        
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add() {
    T c = a + b;
    return c;
}

template<class T>
T Arithmetic<T>::subtract()
{
    T c = a - b;
    return c;
}

int main()
{
    float a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    Arithmetic<float> ar(a, b); 

    cout << ar.add() << endl;
    cout << ar.subtract() << endl;
    return 0;
}
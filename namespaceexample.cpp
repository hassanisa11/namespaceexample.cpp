#include <iostream>
using namespace std;

// create a namespace called mynamespace
namespace mynamespace
{
    int myvariable = 10;
    void myfunction()
    {
        cout << "Hello from mynamespace!" << endl;
    }
}
int main()
{
    // accessing the variable and function from the namespace
    cout << "vairable from namespace: " << mynamespace::myvariable << endl;
    // acessing the function from the namespace
    mynamespace::myfunction();
    return 0;
}
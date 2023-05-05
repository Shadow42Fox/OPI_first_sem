#include <iostream>
using namespace std;

int getSum(int x, int y) {
    return x + y;
}
int getMul(int x, int y) {
    cout << "      getMul(" << x << ", " << y << ") = ";
    return x * y;
}

int main(int argc, char* argv[])
{
    system("color F5");

    int parm1 = 5;
    for (int i = 0; i < 5; i++)
    {
        int parm2 = parm1 + i;
        int result_getSum = getSum(parm1, parm2);
        cout << "i = " << i;
        cout << " getSum(" << parm1 << ", " << parm2 << ") = " << result_getSum << endl;
    }
    int result_getMul = getMul(2, 3);
    cout << result_getMul << endl;

    system("pause");
    return 0;
}
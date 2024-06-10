#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int intValue = 3;
    long longValue = 12345678912345L;
    char charValue = 'a';
    float floatValue = 334.23f;
    double doubleValue = 14049.30493;

    cout << intValue << endl;
    cout << longValue << endl;
    cout << charValue << endl;
    cout << fixed << setprecision(3) << floatValue << endl;
    cout << fixed << setprecision(6) << doubleValue << endl;

    return 0;
}

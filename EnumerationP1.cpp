#include <iostream>
using namespace std;
enum EnumBits
{
    one = 1,
    two = 2,
    four = 4,
    eight = 8
};

enum Randoms
{
    BigCount = 20,
    IntCount = 3
};

int main(void)
{
  // Basic Mathimatical operations
    cout << (one + two) << endl;  
    cout << (four - two) << endl;   
    cout << (two * eight) << endl;  
    cout << (eight / two) << endl;  

    // Some bitwise operations
    cout << (one | two) << endl;    
    cout << (two & four) << endl;   
    cout << (two ^ eight) << endl;  
    cout << (eight << 1) << endl;   
    cout << (eight >> 1) << endl;   

    
    int intArray[IntCount];

    int someVal = 5 + BigCount;

    return 0;  
}

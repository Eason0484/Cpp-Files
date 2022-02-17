#include <iostream>
int main(int argc, char *argv[])
{
    using namespace std;
    cout << "Usage: ";
    for (int i = 1; i < argc; i++)
    {
        cout << argv[i] << " ";
    }
    getchar();
    return 0;
}

/*
 * argc = argument count, 表示传入main函数的数组元素个数，为int类型，
 * argv = argument vector, 表示传入main函数的指针数组，为char**类型。
 * 第一个数组元素argv[0]是程序名称，并且包含程序所在的完整路径。
 * argc至少为1，即argv数组至少包含程序名。
 */

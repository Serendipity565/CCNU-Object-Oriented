#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Usage: myfilecopy <source_file> <destination_file>" << endl;
        return 1;
    }

    string sourceFile = argv[1];
    string destinationFile = argv[2];

    // 打开源文件
    ifstream src(sourceFile, ios::binary);
    if (!src)
    {
        cerr << "Error: Could not open source file " << sourceFile << endl;
        return 1;
    }

    // 打开目标文件
    ofstream dest(destinationFile, ios::binary);
    if (!dest)
    {
        cerr << "Error: Could not open destination file " << destinationFile << endl;
        return 1;
    }

    // 拷贝文件内容
    dest << src.rdbuf();

    cout << "File copied successfully from " << sourceFile << " to " << destinationFile << endl;

    return 0;
}
#include <iostream>

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::stod;
using std::strtod;
using std::string;

double cpp_ftoc(const char* str) {
    double temperature = stod(str);
    return ((temperature - 32)*5/9);
}

double c_ctof(const char* str) {
    double temperature = strtod(str, nullptr);
    return ((temperature*1.8)+32);
}

int main(int argc, char ** argv) {
    char userinput[0];
    cin >> userinput;
    cout << cpp_ftoc(userinput) << endl;
    cout << c_ctof(userinput) << endl;
    cout << argc << " total arguments, program name is " << argv[0] << "\n";

    return 0;
}
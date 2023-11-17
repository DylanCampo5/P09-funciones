#include <cctype>

std::string change_case(const std::string &input) {
    std::string result = input;
    for (char &c : result) {
        if (std::isupper(c)) {
            c = std::tolower(c);
        } else if (std::islower(c)) {
            c = std::toupper(c);
        }
    }
    return result;
}

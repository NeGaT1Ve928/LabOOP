#include "DecString.h"
#include <bitset>

using namespace std;

DecString::DecString(string _name, string _val) :
        name(_name + " (DecString)") {
    val = to_string(
            BinaryToDecimal(
                    ConvertToBinary(_val)
            )
    );
}

DecString DecString::operator+(DecString a) {
    string result = to_string(atol(this->val.c_str()) + atol(a.GetVal().c_str()));

    return DecString(this->name, result);
}


DecString DecString::operator-(DecString a) {
    string result = to_string(atol(this->val.c_str()) - atol(a.GetVal().c_str()));

    return DecString(this->name, result);
}
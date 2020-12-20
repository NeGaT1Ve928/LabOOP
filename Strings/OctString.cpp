#include "OctString.h"

using namespace std;

OctString::OctString(string _name, string _val) :
        name(_name + " (OctString)") {
    val = to_string(
            DecimalToOct(
                    BinaryToDecimal(
                            ConvertToBinary(_val)
                    )
            )
    );
}

OctString OctString::operator+(OctString a) {
    string result = to_string(
            DecimalToOct(
                    OctToDec(atol(this->val.c_str()))
                    +
                    OctToDec(atol(a.GetVal().c_str()))
            )
    );

    return OctString(this->name, result);
}


OctString OctString::operator-(OctString a) {
    string result = to_string(
            DecimalToOct(
                    OctToDec(atol(this->val.c_str()))
                    -
                    OctToDec(atol(a.GetVal().c_str()))
            )
    );

    return OctString(this->name, result);
}
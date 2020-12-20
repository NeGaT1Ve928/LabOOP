#include "HexString.h"
#include <iostream>

using namespace std;

HexString::HexString(string _name, string _val) :
        name(_name + " (HexString)") {
    val = DecimalToHex(
            BinaryToDecimal(
                    ConvertToBinary(_val)
            )
    );
}

HexString HexString::operator+(HexString a) {
    string result =
            DecimalToHex(
                    HexadecimalToDecimal(this->val)
                    +
                    HexadecimalToDecimal(a.GetVal())
            );


    return HexString(this->name, result);
}


HexString HexString::operator-(HexString a) {
    string result =
            DecimalToHex(
                    HexadecimalToDecimal(this->val)
                    -
                    HexadecimalToDecimal(a.GetVal())
            );

    return HexString(this->name, result);
}
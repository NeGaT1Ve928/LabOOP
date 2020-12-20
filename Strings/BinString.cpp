#include "BinString.h"
#include <bitset>

using namespace std;

BinString::BinString(string _name, string _val) :
        name(_name + " (BinString)") {
    val = ConvertToBinary(_val);
}

BinString BinString::operator+(BinString a) {
    string result =
            ConvertToBinary(
                    to_string(BinaryToDecimal(this->val) + BinaryToDecimal(a.GetVal()))
            );


    return BinString(this->name, result);
}


BinString BinString::operator-(BinString a) {
    string result =
            ConvertToBinary(
                    to_string(BinaryToDecimal(this->val) - BinaryToDecimal(a.GetVal()))
            );

    return BinString(this->name, result);
}
#include "SymbString.h"

using namespace std;

SymbString::SymbString(string _name, string _val) :
        name(_name + " (SymbString)") {
    val = _val;
}


SymbString SymbString::operator+(SymbString a) {
    string result = this ->val + a.GetVal();

    return SymbString(this->name, result);
}


SymbString SymbString::operator-(SymbString a) {
    string result = sub(this->val, a.GetVal());

    return SymbString(this->name, result);
}

string SymbString::sub(const string &s1, const string &s2) const {
    int pos1 = s1.find(s2);

    string res = s1.substr(0, pos1 - 1) + s1.substr(pos1 + s2.size(), string::npos);

    return res;
}
#include "Action.h"

class ShowBin: public Action {
public:
    ShowBin() : name("Show binary value"){}
    void Operate(AString*);
    const std::string& GetName() const {return name;}

private:
    std::string name;
};

extern ShowBin show_bin;
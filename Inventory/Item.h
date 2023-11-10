#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std ;

class Item {
protected:
    string category ;
    string name ;
    int code ;
private:

public:
    Item(string name , string category , int code);
    string getName();
    string getCategory();
    int getCode();
};


#endif // ITEM_H

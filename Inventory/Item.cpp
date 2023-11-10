#include "Item.h"

Item::Item(string name, string category , int code ){
this->name = name;
this->category = category;
this->code = code ;
}

string Item::getName(){
return this->name;
}

string Item::getCategory(){
return this->category ;
}

int Item::getCode(){
return this->code;
}

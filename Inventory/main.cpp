#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "Item.h"
using namespace std;

int main()
{
    vector<Item> receipt ;
    string name,category ;
    int code ;


    while(true){
        cout<<"Add an element to the receipt or exit by typing '0' \n";
        cout<<"Name: " ;
        cin>>name;

        if (name[0] == '0'){
            break;
        }
        cout<<"Category: ";
        cin>>category ;
        cout<<"Code: " ;
        cin>>code ;
        Item * current_Item = new Item(name,category,code);
        receipt.push_back(* current_Item);
    }

    for(int i = 0 ; i < receipt.size() ; i++){
            cout<<"\n"<<receipt[i].getName();
        }

    return 0;
}


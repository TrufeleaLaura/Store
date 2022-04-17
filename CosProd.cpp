//
// Created by Laura on 4/13/2022.
//

#include "CosProd.h"
#include <assert.h>
using std::shuffle;

void List::addlist(const Produs& s) {
    this->listproducts.push_back(s);
}
void List::emptylist() {
    this->listproducts.clear();
}

void List::addrandomlist(vector<Produs> originalprod, size_t howMany) {
    shuffle(originalprod.begin(), originalprod.end(), std::default_random_engine(std::random_device{}())); //amesteca vectorul v
    while (listproducts.size() <= howMany && originalprod.size() > 0) {
        listproducts.push_back(originalprod.back());
        originalprod.pop_back();
    }
}
const vector<Produs>& List::getallfromlist() {
    return this->listproducts;
}

void testeCos(){
    List teste;
    Produs prod1{ "aaa","bbb","ccc",38.5 };
    Produs prod2{ "lll","gfhc","ooo",55 };
    teste.addlist(prod1);
    teste.addlist(prod2);
    assert(teste.getallfromlist().size()==2);
    teste.emptylist();
    assert(teste.getallfromlist().size()==0);

}

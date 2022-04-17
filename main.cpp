#include "UI.h"
#include "VectorDinamicTemplate.h"
#include <iostream>
//#define _CRTDBG_MAP_ALLOC
#include "Pet.h"
#include "testall.h"
#include "CosProd.h"
//#include <crtdbg.h>
using std::cout;
using std::endl;


void testAll() {
    testeEnt();
    testecmp();
    cout << "Au fost trecute testele pentru entitati." << endl;
    testeCos();
    cout<<"teste trecute pentru cosprod"<<endl;
    testerepo();
    cout << "Au fost trecute testele pentru repository." << endl;
    testeservice();
    //testAll<VectorDinamic<Pet>>();
    cout << "Au fost trecute testele pentru service." << endl<<endl<<endl;

}
void startApp() {
    ProdRepo repo;
    ProdValidator val;
    ProdService srv{ repo,val };
    ConsoleUI ui{ srv };

    ui.run();
}
int main() {
    //int* v=new int[10];
    testAll();
    startApp();


}
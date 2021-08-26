#include <iostream>
#include <stdlib.h>

#include "UI_LoginManagementUI.h"
#include "UI_AdminManagementUI.h"
#include "UI_HomeScreenUI.h"
#include "BL_RouteBL.h"
#include "Share_FunctionName.h"
#include "Share_BL.h"

#include "BL_AdminManagementBL.h"
#include "BL_ReaderManagementBL.h"

using namespace std;

int main()
{
    UI_LoginManagementUI loginManagementUI;
    UI_AdminManagementUI adminManagementUI;
    UI_ReaderManagementUI readerManagementUI;
    UI_HomeScreenUI homeScreenUI;
    BL_RouteBL routeBL;
    Share_FunctionName functionName;
    Share_BL bl;

    string functionId;
    bool response;

    loginManagementUI.Login();
    bl.ClearScreen();

    do{
        functionId = homeScreenUI.HomeScreen();
        response = routeBL.Route_HomeScreen(functionId);
    }while(!response);


    cout << endl << endl << "Hello welcome to my library!" << endl;

    return 0;
}

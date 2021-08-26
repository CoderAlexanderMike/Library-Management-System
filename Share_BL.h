#ifndef SHARE_BL_H
#define SHARE_BL_H

#include<iostream>
#include <stdlib.h>

using namespace std;

class Share_BL
{
    public:
        Share_BL();
        virtual ~Share_BL();

        void ClearScreen();

        bool bolResponse;
        string strResponse;

    protected:

    private:

};

#endif // SHARE_BL_H

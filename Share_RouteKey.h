#ifndef SHARE_ROUTEKEY_H
#define SHARE_ROUTEKEY_H

#include <iostream>

using namespace std;

class Share_RouteKey
{
    public:
        Share_RouteKey();
        virtual ~Share_RouteKey();

        string const r_key_one = "1.";
        string const r_key_two = "2.";
        string const r_key_three = "3.";
        string const r_key_four = "4.";
        string const r_key_five = "5.";
        string const r_key_a = "a";
        string const r_key_b = "b";
        string const r_key_c = "c";
        string const r_key_d = "d";
        string const r_key_e = "e";
        string const r_key_f = "f";
        string const r_logout = "l";
        string const r_save = "s";
        string const r_back = "y";
        string const r_home = "z";

    protected:

    private:
};

#endif // SHARE_ROUTEKEY_H

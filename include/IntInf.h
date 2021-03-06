//
//  IntInf.hpp
//  ECE309Tester
//
//  Created by Christian Burke on 11/19/18.
//  Copyright © 2018 Christian Burke. All rights reserved.
//

#ifndef IntInf_h
#define IntInf_h

#include <stdio.h>

namespace ece309{

class IntInf {
public:
    bool is_int;
    bool pos_inf;
    bool neg_inf;
    int val;
    
    
    IntInf(bool isPosInf = true)        //Base constructor is +inf
    {
        if(isPosInf)    //if we want a +inf
        {
            is_int = false;
            val = 0;
            pos_inf = true;
            neg_inf = false;
        }
        if(!isPosInf)   //if we want a -inf
        {
            is_int = false;
            val = 0;
            pos_inf = false;
            neg_inf = true;
        }
    }
    
    IntInf(int x)
    {
        is_int = true;
        val = x;
        pos_inf = false;
        neg_inf = false;
    }
    
    void operator= (const int &num);
    IntInf operator+ (const IntInf &ref);
    IntInf operator- (const IntInf &ref);
    IntInf operator* (const IntInf &ref);
    IntInf operator/ (const IntInf &ref);
    bool operator== (const IntInf &ref);
    bool operator> (const IntInf &ref);
    bool operator< (const IntInf &ref);

};

}

#endif /* IntInf_h */

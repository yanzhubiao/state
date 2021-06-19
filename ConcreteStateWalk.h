#pragma once

#include "State.h"

#include <iostream>
using namespace std;

#include "Context.h"

class ConcreteStateWalk : public State
{
public:
     void standAction(Context* context)
     {
         cout << "walk --> stand" << endl;
         context->changStateStand();
     };

     void walkAction(Context* context)
    {
        cout << "walk --> walk failed" << endl;
     };

     void attackAction(Context* context)
    {
        cout << "walk --> attack failed" << endl;
     };

     void onBegin()
    {
        cout << "walk begin" << endl;
     };

     void onEnd()
    {
        cout << "walk end" << endl;
    };
};
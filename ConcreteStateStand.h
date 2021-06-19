#pragma once

#include "State.h"

#include <iostream>
using namespace std;

#include "Context.h"

class ConcreteStateStand : public State
{
public:
     void standAction(Context* context)
    {
        cout << "stand --> stand failed" << endl;
     }

     void walkAction(Context* context)
    {
        cout << "stand --> walk" << endl;
        context->changStateWalk();
     }

     void attackAction(Context* context)
    {
         cout << "stand --> attack" << endl;
         context->changStateAttack();
     }

     void onBegin()
     {
        cout << "stand begin" << endl;
     }

     void onEnd()
    {
        cout << "stand end" << endl;
     }
};
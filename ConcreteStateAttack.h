#pragma once
#include "State.h"
#include <iostream>

#include "Context.h"

using namespace std;

class ConcreteStateAttack : public State
{
public:
     void standAction(Context* context)
     {
        cout << "attack --> stand" << endl;
        context->changStateStand();
     }
    
     void walkAction(Context* context)
     {
        cout << "attack --> walk failed" << endl;
     }
    
     void attackAction(Context* context)
    {
        cout << "attack --> attack failed" << endl;
     }
    
     void onBegin()
    {
        cout << "attack begin" << endl;
     }
    
     void onEnd()
     {
        cout << "attack end" << endl;
     }
};
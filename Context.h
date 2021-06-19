#pragma once

class State;
class ConcreteStateAttack;
class ConcreteStateWalk;
class ConcreteStateStand;

class Context
{
public:
    Context();
    virtual ~Context();

    void standAction();
    void walkAction();
    void attackAction();

    void changStateAttack();
    void changStateWalk();
    void changStateStand();

private:
    void changeState(State* state);

private:
    State* curState_;

    ConcreteStateAttack* attackState;
    ConcreteStateWalk* WalkState;
    ConcreteStateStand* standState;

};
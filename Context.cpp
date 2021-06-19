#include "ConcreteStateAttack.h"
#include "ConcreteStateStand.h"
#include "ConcreteStateWalk.h"

Context::Context() {
    attackState = new ConcreteStateAttack();
    WalkState = new ConcreteStateWalk();
    standState = new ConcreteStateStand();
    curState_ = standState;
}

Context::~Context()
{
    delete attackState;
    delete WalkState;
    delete standState;
}

void Context::standAction()
{
    curState_->standAction(this);
}

void Context::walkAction()
{
    curState_->walkAction(this);
}

void Context::attackAction()
{
    curState_->attackAction(this);
}

void Context::changStateAttack()
{
    changeState(attackState);
}

void Context::changStateWalk()
{
    changeState(WalkState);
}

void Context::changStateStand()
{
    changeState(standState);
}


void Context::changeState(State* state)
{
    curState_->onEnd();
    curState_ = state;
    curState_->onBegin();
}
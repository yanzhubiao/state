#pragma once

class Context;
class State
{
public:
    State() {}
    virtual ~State() {}
    virtual void standAction(Context* context) = 0;
    virtual void walkAction(Context* context) = 0;
    virtual void attackAction(Context* context) = 0;
    virtual void onBegin() = 0;
    virtual void onEnd() = 0;
};
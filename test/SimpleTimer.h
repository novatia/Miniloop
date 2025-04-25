#pragma once
#include "../src/GTimedLoop.h"
namespace MiniLoop {

    class SimpleTimer :
        public MiniLoop::GTimedLoop
    {
    public:
        unsigned long Count=0;
        void Tick() override;
        void Setup() override;
    };
}
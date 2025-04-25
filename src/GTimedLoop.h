/*
 Name:		GTimedLoop.h
 Created:	11/27/2023 08:25:24 AM
 Author:	A.Novati
*/
#pragma once
#include "GLoop.h"

namespace MiniLoop {

    class GTimedLoop : public MiniLoop::GLoop
    {
    public:
        unsigned long TickTimer = 0;

        /// <summary>
        /// If overrided then need to call base class in order to achieve timing functions
        /// </summary>
        virtual void Update();

        virtual void Setup() = 0;

        virtual void Tick() = 0;

    protected:
        unsigned long m_CurrentTime = 0;
        unsigned long m_LastTick = 0;
    };
}
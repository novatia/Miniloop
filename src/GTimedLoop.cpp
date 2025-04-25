/*
 Name:		GTimedLoop.cpp
 Created:	11/27/2023 08:25:24 AM
 Author:	A.Novati
*/
#include <arduino.h>
#include "GTimedLoop.h"

void MiniLoop::GTimedLoop::Update() 
{
    m_CurrentTime = millis();

    if (m_CurrentTime >= ( m_LastTick + TickTimer ))
    {
        m_LastTick = m_CurrentTime;
        Tick();
    }
}
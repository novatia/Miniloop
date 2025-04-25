/*
 Name:		MiniLoop.ino
 Created:	11/27/2023 08:25:24 AM
 Author:	A.Novati
*/
#include "test/SimpleTimer.h"

using namespace MiniLoop;

SimpleTimer g_SimpleTimer;

// the setup function runs once when you press reset or power the board
void setup() {
    g_SimpleTimer.TickTimer = 1000;
}

// the loop function runs over and over again until power down or reset
void loop() {
    g_SimpleTimer.Update();
}

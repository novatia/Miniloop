#include <arduino.h>
#include <string.h>

#include "SimpleTimer.h"

using namespace std;
using namespace MiniLoop;

void SimpleTimer::Tick()
{

    Count++;

    String count = String(Count);

    Serial.print("Tick:" + count+"\r\n");
}

void SimpleTimer::Setup()
{

}

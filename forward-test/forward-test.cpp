#include <iostream>
#include "Configuration.h"
#include "Engine.h"

int main() {
    Configuration configuration = Configuration(20, 0);
    Engine engine = Engine(&configuration);
    engine.start();
    system("pause");
}
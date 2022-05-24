#include "testlibrary.h"
Led test(13);
void setup() {}
void loop() {
    // Power on the LED
    test.on();
    delay(1000);
    // Power off the LED
    test.off();
    delay(1000);
}

# i2c_oled
A 128x64 I2C OLED driver ported for Mbed.

## How to use this library?

### Step 1: Copy files to your project
First, download the source code in the [Releases](https://github.com/nep-0/i2c_oled/releases) page.

Then, copy `i2c_oled.h`, `i2c_oled.cpp`, `font.h` and `genshin.h` into your project, which is usually at `C:\Users\<username>\Mbed Programs\<projectname>` for Mbed Studio Windows users.

### Step 2: Edit `i2c_oled.h` to configure the pins
Edit lines 7 & 8 to the pins you need. Note that you don't have to choose ones that support i2c peripheral. Any GPIO pin will work.
```cpp
DigitalOut OLED_SCL(D3);
DigitalOut OLED_SDA(D4);
```

### Step 3: Try using it in your `main.cpp`!
Here is an example.
```cpp
#include "mbed.h"
#include "i2c_oled.h"

int main() {
  DigitalOut VCC(D2);
  VCC=1; // Power the screen by setting the pin high. This is not recommended.

  ThisThread::sleep_for(100ms);
  OLED_Init();
  OLED_Genshin();
}
```

## FAQ

### What if I don't want [Genshin Impact](https://ys.mihoyo.com/) in my program?
[Genshin Impact](https://ys.mihoyo.com/) is an excellent open-world fantasy game. You should definitely try it.

`OLED_Genshin()` is actually a helper function to help you verify that you have done the steps above correctly. If you use other functions to display, please note that they only write to a buffer. You need to send the buffer to the screen. Here is an example.
```cpp
#include "mbed.h"
#include "i2c_oled.h"

int main() {
  DigitalOut VCC(D2);
  VCC=1; // Power the screen by setting the pin high. This is not recommended.

  ThisThread::sleep_for(100ms);
  OLED_Init();
  OLED_ShowStringBuffered(0, 0, "Genshin Impact", 8, 1);
  OLED_SendBuffer();
}
```

### Is it possible to remove [Genshin Impact](https://ys.mihoyo.com/) from my program completely?
Yes, but it is not recommended. [Genshin Impact](https://ys.mihoyo.com/) is an excellent open-world fantasy game. You should definitely try it.

### The [Genshin Impact](https://ys.mihoyo.com/) image is so great! How can I use my own image?
You can download the tutorial on the [Releases](https://github.com/nep-0/i2c_oled/releases) page. It is in Chinese.

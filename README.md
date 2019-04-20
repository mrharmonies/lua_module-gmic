# lua_module-gmic
Lua module written in C for interfacing with libgmic from G'MIC. G'MIC (GREYC's Magic for Image Computing) is a free and open-source 
framework for image processing. This Lua module provide one function called ```gmic([gmic command string])```. The ```gmic command string``` is passed to ```gmic_call()``` declared in ```gmic_libc.h```

# usage example
```
Lua 5.3.5  Copyright (C) 1994-2018 Lua.org, PUC-Rio
> require("lua_gmic")
> gmic("lion.jpg -display") -- displays lion.jpg image file
> gmic("lion.jpg -rotate 45 -display") -- rotate lion.jpg 40 degree clockwise and display the result
> gmic("400,400 rorschach 3% -display") -- render rorschach-like inkblots and display it
```
# screenshot
Test image can be viewed with ```gmic("testimage2d 500 -display")```

![](https://drive.google.com/uc?id=1QwVww7fvu4fbLzgqlPB7VAFbt2-bUQfe)

Cartoon effect ```gmic("solat.jpg +cartoon 3,80,15 -display")```

![](https://drive.google.com/uc?id=1arO57YkfJiIeb5WTOLKDmFHFMcsDyw2R)

Fire edges effect. ```gmic("lion.jpg +fire_edges , -display")```

![](https://drive.google.com/uc?id=1wD6zJodEdms1ZCGdi6s860FJ3zVsYl9r)

# download
Binary releases can be download [here](https://github.com/mrharmonies/lua_module-gmic/releases)

# compilation
You must first have ```libgmic``` ready. Download them from their website, extract and copy all file to compilation folder and compile the main source file ```lua_gmic.c``` with your favorite C compiler, e.g ```gcc -L. -shared -fPIC -o lua_gmic.dll lua_gmic.c -llua -lcgmicstatic```.

# license
MIT License

Copyright (c) 2019 Mohd Kholid Yaacob

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

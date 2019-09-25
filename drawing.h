# Rajzoloprog-C-
Rajzoló program. A progi áll egy kordinata , teglalap, kör ,drawing és swg osztályból
#include "swg.h"
#include <fstream>

void saveToswg(const drawing C,string filename){
ofstream output(filename);
output
<< "<svg heigth=\"100\" widht=\"100\">"
<<"circel cx=\"50\" cy=\"40\" r=\"5\" stroke=\"black\"
"stroke-widht=\"3\" file=\"none\"/>
<<"</svg>"<<endl;
}

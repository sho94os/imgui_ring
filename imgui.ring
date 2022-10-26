
if iswindows()
	loadlib("build/Release/imgu_ring.dll") 
but ismacosx()
	LoadLib("build/Release/imgu_ring.dylib")
else
	loadlib("build/Release/imgu_ring.so") 
ok


load "constant.rh"
load "funktions.ring"
load "classes.ring"

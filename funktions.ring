
func ImVec2  x,y 
    oImVec2 = new ImVec2(x,y)
    return oImVec2

func ImVec4  x,y,z,w 
    oImVec4 = new ImVec4(x,y,z,w)
    return oImVec4

func GPData vData 
	if isObject(vData)
		return vData.Data()
	ok
	return vData

func ig_TextColored  x,y
    return imgui_TextColored(GPData(x), GPData(y)) 

func ig_button  x,y
    return imgui_button(GPData(x), GPData(y)) 

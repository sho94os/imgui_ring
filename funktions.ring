
func ImRGB  R,G,B 
    oImRGB = new ImRGB(R,G,B)
    return oImRGB

func ImVec2  x,y 
    oImVec2 = new ImVec2(x,y)
    return oImVec2

func ImVec4  x,y,z,w 
    oImVec4 = new ImVec4(x,y,z,w)
    return oImVec4

func ImColor  x,y,z,w 
    oImColor = new ImColor(x,y,z,w)
    return oImColor



###############################################################    

func GPData vData 
	if isObject(vData)
		return vData.data()
	ok
	return vData

func ig_TextColored  x,y
    return imgui_TextColored(GPData(x), y) 

func ig_button  x,y
    return imgui_button(x, GPData(y))

func ig_PushStyleColor p1,p2
     imgui_PushStyleColor_2(p1,GPData(p2))


func ig_ColorEdit4 p1,p2,p3
	return	imgui_ColorEdit4(p1, p2.odata , p3)

func ig_ColorEdit3 p1,p2,p3
    return imgui_ColorEdit3(p1, p2.odata , p3)

func ig_Selectable p1,p2,p3,p4
    return imgui_Selectable(p1, p2, p3, p4.odata) 


func ig_BeginListBox p1,p2
    return imgui_BeginListBox(p1, p2.odata)       


func GetStyle
	oStyle = new imguistyle
	oStyle.setData( imgui_GetStyle()  )
	return oStyle    

func GetCursorScreenPos
	oImVec2 = new ImVec2
	oImVec2.setData( imgui_getcursorscreenpos() )
	return oImVec2      


func setcursorscreenpos p1
     imgui_setcursorscreenpos(p1.odata)       


func ig_colorbutton p1,p2,p3,p4
     imgui_colorbutton(p1,p2.odata,p3,p4.odata)          
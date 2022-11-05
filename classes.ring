

class imguibase 

	odata

	func setdata oStruct 

	func refresh 
		setdata(odata)


class imrgb from imguibase

	r g b 	

	odata = imgui_new_managed_imrgb()

	func init  p1,p2,p3
		r = p1
		g = p2
		b = p3
		
		imgui_set_imrgb_r(odata, p1)
		imgui_set_imrgb_g(odata, p2)
		imgui_set_imrgb_b(odata, p3)

	func data 		
		imgui_set_imrgb_r(odata,r)
		imgui_set_imrgb_g(odata,g)
		imgui_set_imrgb_b(odata,b)
		return odata

	func setdata ostruct 
		odata = ostruct
		r = imgui_get_imrgb_r(ostruct)
		g = imgui_get_imrgb_g(ostruct)
		b = imgui_get_imrgb_b(ostruct)

	func getr
		return imgui_get_imrgb_r(odata)

	func getg
		return imgui_get_imrgb_g(odata)

	func getb
		return imgui_get_imrgb_b(odata)

	func setr p1
		imgui_set_imrgb_r(odata,p1)

	func setg p1
		imgui_set_imrgb_g(odata,p1)

	func setb p1
		imgui_set_imrgb_b(odata,p1)


class imvec2 from imguibase

	x y 	

	odata = imgui_new_managed_imvec2()

	func init  p1,p2
		x = p1
		y = p2
		
		imgui_set_imvec2_x(odata, p1)
		imgui_set_imvec2_y(odata, p2)

	func data 		
		imgui_set_imvec2_x(odata,x)
		imgui_set_imvec2_y(odata,y)
		return odata

	func setdata ostruct 
		odata = ostruct
		x = imgui_get_imvec2_x(ostruct)
		y = imgui_get_imvec2_y(ostruct)

	func getx
		return imgui_get_imvec2_x(odata)

	func gety
		return imgui_get_imvec2_y(odata)

	func setx p1
		imgui_set_imvec2_x(odata,p1)

	func sety p1
		imgui_set_imvec2_y(odata,p1)


class imvec4 from imguibase

	x y z w 	

	odata = imgui_new_managed_imvec4()

	func init  p1,p2,p3,p4
		x = p1
		y = p2
		z = p3
		w = p4
		
		imgui_set_imvec4_x(odata, p1)
		imgui_set_imvec4_y(odata, p2)
		imgui_set_imvec4_z(odata, p3)
		imgui_set_imvec4_w(odata, p4)

	func data 		
		imgui_set_imvec4_x(odata,x)
		imgui_set_imvec4_y(odata,y)
		imgui_set_imvec4_z(odata,z)
		imgui_set_imvec4_w(odata,w)
		return odata

	func setdata ostruct 
		odata = ostruct
		x = imgui_get_imvec4_x(ostruct)
		y = imgui_get_imvec4_y(ostruct)
		z = imgui_get_imvec4_z(ostruct)
		w = imgui_get_imvec4_w(ostruct)

	func getx
		return imgui_get_imvec4_x(odata)

	func gety
		return imgui_get_imvec4_y(odata)

	func getz
		return imgui_get_imvec4_z(odata)

	func getw
		return imgui_get_imvec4_w(odata)

	func setx p1
		imgui_set_imvec4_x(odata,p1)

	func sety p1
		imgui_set_imvec4_y(odata,p1)

	func setz p1
		imgui_set_imvec4_z(odata,p1)

	func setw p1
		imgui_set_imvec4_w(odata,p1)

		

class imcolor from imguibase

				
	value =  new imvec4

	odata = imgui_new_managed_imcolor()

	func init  p1,p2,p3,p4
		value.x = p1
		value.y = p2
		value.z = p3
		value.w = p4
		
		imgui_set_imcolor_value_x(odata, p1)
		imgui_set_imcolor_value_y(odata, p2)
		imgui_set_imcolor_value_z(odata, p3)
		imgui_set_imcolor_value_w(odata, p4)

	func data 
		
		imgui_set_imcolor_value_x(odata,value.x)
		imgui_set_imcolor_value_y(odata,value.y)
		imgui_set_imcolor_value_z(odata,value.z)
		imgui_set_imcolor_value_w(odata,value.w)
		return odata

	func setdata ostruct 
		odata = ostruct
		value.x = imgui_get_imcolor_value_x(ostruct)
		value.y = imgui_get_imcolor_value_y(ostruct)
		value.z = imgui_get_imcolor_value_z(ostruct)
		value.w = imgui_get_imcolor_value_w(ostruct)




class imguistyle from imguibase

	alpha disabledalpha windowrounding windowbordersize windowmenubuttonposition childrounding childbordersize popuprounding popupbordersize framerounding framebordersize indentspacing columnsminspacing scrollbarsize scrollbarrounding grabminsize grabrounding logsliderdeadzone tabrounding tabbordersize tabminwidthforclosebutton colorbuttonposition mousecursorscale antialiasedlines antialiasedlinesusetex antialiasedfill curvetessellationtol circletessellationmaxerror

	windowpadding =  new imvec2
	windowminsize =  new imvec2
	windowtitlealign =  new imvec2
	framepadding =  new imvec2
	itemspacing =  new imvec2
	iteminnerspacing =  new imvec2
	cellpadding =  new imvec2
	touchextrapadding =  new imvec2
	buttontextalign =  new imvec2
	selectabletextalign =  new imvec2
	displaywindowpadding =  new imvec2
	displaysafeareapadding =  new imvec2

	odata = imgui_new_managed_imguistyle()

	func init  p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31,p32,p33,p34,p35,p36,p37,p38,p39,p40,p41,p42,p43,p44,p45,p46,p47,p48,p49,p50,p51,p52
		alpha = p1
		disabledalpha = p2
		windowpadding.x = p3
		windowpadding.y = p4
		windowrounding = p5
		windowbordersize = p6
		windowminsize.x = p7
		windowminsize.y = p8
		windowtitlealign.x = p9
		windowtitlealign.y = p10
		windowmenubuttonposition = p11
		childrounding = p12
		childbordersize = p13
		popuprounding = p14
		popupbordersize = p15
		framepadding.x = p16
		framepadding.y = p17
		framerounding = p18
		framebordersize = p19
		itemspacing.x = p20
		itemspacing.y = p21
		iteminnerspacing.x = p22
		iteminnerspacing.y = p23
		cellpadding.x = p24
		cellpadding.y = p25
		touchextrapadding.x = p26
		touchextrapadding.y = p27
		indentspacing = p28
		columnsminspacing = p29
		scrollbarsize = p30
		scrollbarrounding = p31
		grabminsize = p32
		grabrounding = p33
		logsliderdeadzone = p34
		tabrounding = p35
		tabbordersize = p36
		tabminwidthforclosebutton = p37
		colorbuttonposition = p38
		buttontextalign.x = p39
		buttontextalign.y = p40
		selectabletextalign.x = p41
		selectabletextalign.y = p42
		displaywindowpadding.x = p43
		displaywindowpadding.y = p44
		displaysafeareapadding.x = p45
		displaysafeareapadding.y = p46
		mousecursorscale = p47
		antialiasedlines = p48
		antialiasedlinesusetex = p49
		antialiasedfill = p50
		curvetessellationtol = p51
		circletessellationmaxerror = p52
		
		imgui_set_imguistyle_alpha(odata, p1)
		imgui_set_imguistyle_disabledalpha(odata, p2)
		imgui_set_imguistyle_windowpadding_x(odata, p3)
		imgui_set_imguistyle_windowpadding_y(odata, p4)
		imgui_set_imguistyle_windowrounding(odata, p5)
		imgui_set_imguistyle_windowbordersize(odata, p6)
		imgui_set_imguistyle_windowminsize_x(odata, p7)
		imgui_set_imguistyle_windowminsize_y(odata, p8)
		imgui_set_imguistyle_windowtitlealign_x(odata, p9)
		imgui_set_imguistyle_windowtitlealign_y(odata, p10)
		imgui_set_imguistyle_windowmenubuttonposition(odata, p11)
		imgui_set_imguistyle_childrounding(odata, p12)
		imgui_set_imguistyle_childbordersize(odata, p13)
		imgui_set_imguistyle_popuprounding(odata, p14)
		imgui_set_imguistyle_popupbordersize(odata, p15)
		imgui_set_imguistyle_framepadding_x(odata, p16)
		imgui_set_imguistyle_framepadding_y(odata, p17)
		imgui_set_imguistyle_framerounding(odata, p18)
		imgui_set_imguistyle_framebordersize(odata, p19)
		imgui_set_imguistyle_itemspacing_x(odata, p20)
		imgui_set_imguistyle_itemspacing_y(odata, p21)
		imgui_set_imguistyle_iteminnerspacing_x(odata, p22)
		imgui_set_imguistyle_iteminnerspacing_y(odata, p23)
		imgui_set_imguistyle_cellpadding_x(odata, p24)
		imgui_set_imguistyle_cellpadding_y(odata, p25)
		imgui_set_imguistyle_touchextrapadding_x(odata, p26)
		imgui_set_imguistyle_touchextrapadding_y(odata, p27)
		imgui_set_imguistyle_indentspacing(odata, p28)
		imgui_set_imguistyle_columnsminspacing(odata, p29)
		imgui_set_imguistyle_scrollbarsize(odata, p30)
		imgui_set_imguistyle_scrollbarrounding(odata, p31)
		imgui_set_imguistyle_grabminsize(odata, p32)
		imgui_set_imguistyle_grabrounding(odata, p33)
		imgui_set_imguistyle_logsliderdeadzone(odata, p34)
		imgui_set_imguistyle_tabrounding(odata, p35)
		imgui_set_imguistyle_tabbordersize(odata, p36)
		imgui_set_imguistyle_tabminwidthforclosebutton(odata, p37)
		imgui_set_imguistyle_colorbuttonposition(odata, p38)
		imgui_set_imguistyle_buttontextalign_x(odata, p39)
		imgui_set_imguistyle_buttontextalign_y(odata, p40)
		imgui_set_imguistyle_selectabletextalign_x(odata, p41)
		imgui_set_imguistyle_selectabletextalign_y(odata, p42)
		imgui_set_imguistyle_displaywindowpadding_x(odata, p43)
		imgui_set_imguistyle_displaywindowpadding_y(odata, p44)
		imgui_set_imguistyle_displaysafeareapadding_x(odata, p45)
		imgui_set_imguistyle_displaysafeareapadding_y(odata, p46)
		imgui_set_imguistyle_mousecursorscale(odata, p47)
		imgui_set_imguistyle_antialiasedlines(odata, p48)
		imgui_set_imguistyle_antialiasedlinesusetex(odata, p49)
		imgui_set_imguistyle_antialiasedfill(odata, p50)
		imgui_set_imguistyle_curvetessellationtol(odata, p51)
		imgui_set_imguistyle_circletessellationmaxerror(odata, p52)

	func data 		
		imgui_set_imguistyle_alpha(odata,alpha)
		imgui_set_imguistyle_disabledalpha(odata,disabledalpha)
		imgui_set_imguistyle_windowpadding_x(odata,windowpadding.x)
		imgui_set_imguistyle_windowpadding_y(odata,windowpadding.y)
		imgui_set_imguistyle_windowrounding(odata,windowrounding)
		imgui_set_imguistyle_windowbordersize(odata,windowbordersize)
		imgui_set_imguistyle_windowminsize_x(odata,windowminsize.x)
		imgui_set_imguistyle_windowminsize_y(odata,windowminsize.y)
		imgui_set_imguistyle_windowtitlealign_x(odata,windowtitlealign.x)
		imgui_set_imguistyle_windowtitlealign_y(odata,windowtitlealign.y)
		imgui_set_imguistyle_windowmenubuttonposition(odata,windowmenubuttonposition)
		imgui_set_imguistyle_childrounding(odata,childrounding)
		imgui_set_imguistyle_childbordersize(odata,childbordersize)
		imgui_set_imguistyle_popuprounding(odata,popuprounding)
		imgui_set_imguistyle_popupbordersize(odata,popupbordersize)
		imgui_set_imguistyle_framepadding_x(odata,framepadding.x)
		imgui_set_imguistyle_framepadding_y(odata,framepadding.y)
		imgui_set_imguistyle_framerounding(odata,framerounding)
		imgui_set_imguistyle_framebordersize(odata,framebordersize)
		imgui_set_imguistyle_itemspacing_x(odata,itemspacing.x)
		imgui_set_imguistyle_itemspacing_y(odata,itemspacing.y)
		imgui_set_imguistyle_iteminnerspacing_x(odata,iteminnerspacing.x)
		imgui_set_imguistyle_iteminnerspacing_y(odata,iteminnerspacing.y)
		imgui_set_imguistyle_cellpadding_x(odata,cellpadding.x)
		imgui_set_imguistyle_cellpadding_y(odata,cellpadding.y)
		imgui_set_imguistyle_touchextrapadding_x(odata,touchextrapadding.x)
		imgui_set_imguistyle_touchextrapadding_y(odata,touchextrapadding.y)
		imgui_set_imguistyle_indentspacing(odata,indentspacing)
		imgui_set_imguistyle_columnsminspacing(odata,columnsminspacing)
		imgui_set_imguistyle_scrollbarsize(odata,scrollbarsize)
		imgui_set_imguistyle_scrollbarrounding(odata,scrollbarrounding)
		imgui_set_imguistyle_grabminsize(odata,grabminsize)
		imgui_set_imguistyle_grabrounding(odata,grabrounding)
		imgui_set_imguistyle_logsliderdeadzone(odata,logsliderdeadzone)
		imgui_set_imguistyle_tabrounding(odata,tabrounding)
		imgui_set_imguistyle_tabbordersize(odata,tabbordersize)
		imgui_set_imguistyle_tabminwidthforclosebutton(odata,tabminwidthforclosebutton)
		imgui_set_imguistyle_colorbuttonposition(odata,colorbuttonposition)
		imgui_set_imguistyle_buttontextalign_x(odata,buttontextalign.x)
		imgui_set_imguistyle_buttontextalign_y(odata,buttontextalign.y)
		imgui_set_imguistyle_selectabletextalign_x(odata,selectabletextalign.x)
		imgui_set_imguistyle_selectabletextalign_y(odata,selectabletextalign.y)
		imgui_set_imguistyle_displaywindowpadding_x(odata,displaywindowpadding.x)
		imgui_set_imguistyle_displaywindowpadding_y(odata,displaywindowpadding.y)
		imgui_set_imguistyle_displaysafeareapadding_x(odata,displaysafeareapadding.x)
		imgui_set_imguistyle_displaysafeareapadding_y(odata,displaysafeareapadding.y)
		imgui_set_imguistyle_mousecursorscale(odata,mousecursorscale)
		imgui_set_imguistyle_antialiasedlines(odata,antialiasedlines)
		imgui_set_imguistyle_antialiasedlinesusetex(odata,antialiasedlinesusetex)
		imgui_set_imguistyle_antialiasedfill(odata,antialiasedfill)
		imgui_set_imguistyle_curvetessellationtol(odata,curvetessellationtol)
		imgui_set_imguistyle_circletessellationmaxerror(odata,circletessellationmaxerror)
		return odata

	func setdata ostruct 
		odata = ostruct
		alpha = imgui_get_imguistyle_alpha(ostruct)
		disabledalpha = imgui_get_imguistyle_disabledalpha(ostruct)
		windowpadding.x = imgui_get_imguistyle_windowpadding_x(ostruct)
		windowpadding.y = imgui_get_imguistyle_windowpadding_y(ostruct)
		windowrounding = imgui_get_imguistyle_windowrounding(ostruct)
		windowbordersize = imgui_get_imguistyle_windowbordersize(ostruct)
		windowminsize.x = imgui_get_imguistyle_windowminsize_x(ostruct)
		windowminsize.y = imgui_get_imguistyle_windowminsize_y(ostruct)
		windowtitlealign.x = imgui_get_imguistyle_windowtitlealign_x(ostruct)
		windowtitlealign.y = imgui_get_imguistyle_windowtitlealign_y(ostruct)
		windowmenubuttonposition = imgui_get_imguistyle_windowmenubuttonposition(ostruct)
		childrounding = imgui_get_imguistyle_childrounding(ostruct)
		childbordersize = imgui_get_imguistyle_childbordersize(ostruct)
		popuprounding = imgui_get_imguistyle_popuprounding(ostruct)
		popupbordersize = imgui_get_imguistyle_popupbordersize(ostruct)
		framepadding.x = imgui_get_imguistyle_framepadding_x(ostruct)
		framepadding.y = imgui_get_imguistyle_framepadding_y(ostruct)
		framerounding = imgui_get_imguistyle_framerounding(ostruct)
		framebordersize = imgui_get_imguistyle_framebordersize(ostruct)
		itemspacing.x = imgui_get_imguistyle_itemspacing_x(ostruct)
		itemspacing.y = imgui_get_imguistyle_itemspacing_y(ostruct)
		iteminnerspacing.x = imgui_get_imguistyle_iteminnerspacing_x(ostruct)
		iteminnerspacing.y = imgui_get_imguistyle_iteminnerspacing_y(ostruct)
		cellpadding.x = imgui_get_imguistyle_cellpadding_x(ostruct)
		cellpadding.y = imgui_get_imguistyle_cellpadding_y(ostruct)
		touchextrapadding.x = imgui_get_imguistyle_touchextrapadding_x(ostruct)
		touchextrapadding.y = imgui_get_imguistyle_touchextrapadding_y(ostruct)
		indentspacing = imgui_get_imguistyle_indentspacing(ostruct)
		columnsminspacing = imgui_get_imguistyle_columnsminspacing(ostruct)
		scrollbarsize = imgui_get_imguistyle_scrollbarsize(ostruct)
		scrollbarrounding = imgui_get_imguistyle_scrollbarrounding(ostruct)
		grabminsize = imgui_get_imguistyle_grabminsize(ostruct)
		grabrounding = imgui_get_imguistyle_grabrounding(ostruct)
		logsliderdeadzone = imgui_get_imguistyle_logsliderdeadzone(ostruct)
		tabrounding = imgui_get_imguistyle_tabrounding(ostruct)
		tabbordersize = imgui_get_imguistyle_tabbordersize(ostruct)
		tabminwidthforclosebutton = imgui_get_imguistyle_tabminwidthforclosebutton(ostruct)
		colorbuttonposition = imgui_get_imguistyle_colorbuttonposition(ostruct)
		buttontextalign.x = imgui_get_imguistyle_buttontextalign_x(ostruct)
		buttontextalign.y = imgui_get_imguistyle_buttontextalign_y(ostruct)
		selectabletextalign.x = imgui_get_imguistyle_selectabletextalign_x(ostruct)
		selectabletextalign.y = imgui_get_imguistyle_selectabletextalign_y(ostruct)
		displaywindowpadding.x = imgui_get_imguistyle_displaywindowpadding_x(ostruct)
		displaywindowpadding.y = imgui_get_imguistyle_displaywindowpadding_y(ostruct)
		displaysafeareapadding.x = imgui_get_imguistyle_displaysafeareapadding_x(ostruct)
		displaysafeareapadding.y = imgui_get_imguistyle_displaysafeareapadding_y(ostruct)
		mousecursorscale = imgui_get_imguistyle_mousecursorscale(ostruct)
		antialiasedlines = imgui_get_imguistyle_antialiasedlines(ostruct)
		antialiasedlinesusetex = imgui_get_imguistyle_antialiasedlinesusetex(ostruct)
		antialiasedfill = imgui_get_imguistyle_antialiasedfill(ostruct)
		curvetessellationtol = imgui_get_imguistyle_curvetessellationtol(ostruct)
		circletessellationmaxerror = imgui_get_imguistyle_circletessellationmaxerror(ostruct)

	func getalpha
		return imgui_get_imguistyle_alpha(odata)

	func getdisabledalpha
		return imgui_get_imguistyle_disabledalpha(odata)

	func getwindowrounding
		return imgui_get_imguistyle_windowrounding(odata)

	func getwindowbordersize
		return imgui_get_imguistyle_windowbordersize(odata)

	func getwindowmenubuttonposition
		return imgui_get_imguistyle_windowmenubuttonposition(odata)

	func getchildrounding
		return imgui_get_imguistyle_childrounding(odata)

	func getchildbordersize
		return imgui_get_imguistyle_childbordersize(odata)

	func getpopuprounding
		return imgui_get_imguistyle_popuprounding(odata)

	func getpopupbordersize
		return imgui_get_imguistyle_popupbordersize(odata)

	func getframerounding
		return imgui_get_imguistyle_framerounding(odata)

	func getframebordersize
		return imgui_get_imguistyle_framebordersize(odata)

	func getindentspacing
		return imgui_get_imguistyle_indentspacing(odata)

	func getcolumnsminspacing
		return imgui_get_imguistyle_columnsminspacing(odata)

	func getscrollbarsize
		return imgui_get_imguistyle_scrollbarsize(odata)

	func getscrollbarrounding
		return imgui_get_imguistyle_scrollbarrounding(odata)

	func getgrabminsize
		return imgui_get_imguistyle_grabminsize(odata)

	func getgrabrounding
		return imgui_get_imguistyle_grabrounding(odata)

	func getlogsliderdeadzone
		return imgui_get_imguistyle_logsliderdeadzone(odata)

	func gettabrounding
		return imgui_get_imguistyle_tabrounding(odata)

	func gettabbordersize
		return imgui_get_imguistyle_tabbordersize(odata)

	func gettabminwidthforclosebutton
		return imgui_get_imguistyle_tabminwidthforclosebutton(odata)

	func getcolorbuttonposition
		return imgui_get_imguistyle_colorbuttonposition(odata)

	func getmousecursorscale
		return imgui_get_imguistyle_mousecursorscale(odata)

	func getantialiasedlines
		return imgui_get_imguistyle_antialiasedlines(odata)

	func getantialiasedlinesusetex
		return imgui_get_imguistyle_antialiasedlinesusetex(odata)

	func getantialiasedfill
		return imgui_get_imguistyle_antialiasedfill(odata)

	func getcurvetessellationtol
		return imgui_get_imguistyle_curvetessellationtol(odata)

	func getcircletessellationmaxerror
		return imgui_get_imguistyle_circletessellationmaxerror(odata)

	func setalpha p1
		imgui_set_imguistyle_alpha(odata,p1)

	func setdisabledalpha p1
		imgui_set_imguistyle_disabledalpha(odata,p1)

	func setwindowrounding p1
		imgui_set_imguistyle_windowrounding(odata,p1)

	func setwindowbordersize p1
		imgui_set_imguistyle_windowbordersize(odata,p1)

	func setwindowmenubuttonposition p1
		imgui_set_imguistyle_windowmenubuttonposition(odata,p1)

	func setchildrounding p1
		imgui_set_imguistyle_childrounding(odata,p1)

	func setchildbordersize p1
		imgui_set_imguistyle_childbordersize(odata,p1)

	func setpopuprounding p1
		imgui_set_imguistyle_popuprounding(odata,p1)

	func setpopupbordersize p1
		imgui_set_imguistyle_popupbordersize(odata,p1)

	func setframerounding p1
		imgui_set_imguistyle_framerounding(odata,p1)

	func setframebordersize p1
		imgui_set_imguistyle_framebordersize(odata,p1)

	func setindentspacing p1
		imgui_set_imguistyle_indentspacing(odata,p1)

	func setcolumnsminspacing p1
		imgui_set_imguistyle_columnsminspacing(odata,p1)

	func setscrollbarsize p1
		imgui_set_imguistyle_scrollbarsize(odata,p1)

	func setscrollbarrounding p1
		imgui_set_imguistyle_scrollbarrounding(odata,p1)

	func setgrabminsize p1
		imgui_set_imguistyle_grabminsize(odata,p1)

	func setgrabrounding p1
		imgui_set_imguistyle_grabrounding(odata,p1)

	func setlogsliderdeadzone p1
		imgui_set_imguistyle_logsliderdeadzone(odata,p1)

	func settabrounding p1
		imgui_set_imguistyle_tabrounding(odata,p1)

	func settabbordersize p1
		imgui_set_imguistyle_tabbordersize(odata,p1)

	func settabminwidthforclosebutton p1
		imgui_set_imguistyle_tabminwidthforclosebutton(odata,p1)

	func setcolorbuttonposition p1
		imgui_set_imguistyle_colorbuttonposition(odata,p1)

	func setmousecursorscale p1
		imgui_set_imguistyle_mousecursorscale(odata,p1)

	func setantialiasedlines p1
		imgui_set_imguistyle_antialiasedlines(odata,p1)

	func setantialiasedlinesusetex p1
		imgui_set_imguistyle_antialiasedlinesusetex(odata,p1)

	func setantialiasedfill p1
		imgui_set_imguistyle_antialiasedfill(odata,p1)

	func setcurvetessellationtol p1
		imgui_set_imguistyle_curvetessellationtol(odata,p1)

	func setcircletessellationmaxerror p1
		imgui_set_imguistyle_circletessellationmaxerror(odata,p1)

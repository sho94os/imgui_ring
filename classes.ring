

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


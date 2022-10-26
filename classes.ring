

class imguibase 

	odata

	func setdata oStruct 

	func refresh 
		setdata(odata)



class imvec2 from imguibase

		x y 		

		odata = imgui_new_managed_imvec2()

		func init  p1,p2
			x=p1  y=p2  

		func data 
			imgui_set_imvec2_x(odata,x)
			imgui_set_imvec2_y(odata,y)
			return odata

		func setdata ostruct 
			odata = ostruct
			imgui_get_imvec2_x(ostruct)
			imgui_get_imvec2_y(ostruct)


class imvec4 from imguibase

		x y z w 		

		odata = imgui_new_managed_imvec4()

		func init  p1,p2,p3,p4
			x=p1  y=p2  z=p3  w=p4  

		func data 
			imgui_set_imvec4_x(odata,x)
			imgui_set_imvec4_y(odata,y)
			imgui_set_imvec4_z(odata,z)
			imgui_set_imvec4_w(odata,w)
			return odata

		func setdata ostruct 
			odata = ostruct
			imgui_get_imvec4_x(ostruct)
			imgui_get_imvec4_y(ostruct)
			imgui_get_imvec4_z(ostruct)
			imgui_get_imvec4_w(ostruct)



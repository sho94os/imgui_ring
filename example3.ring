
load "imgui.ring"
Load "libsdl.ring"


SDL_Init(SDL_INIT_EVERYTHING)
win = SDL_CreateWindow("Hello World!", 100, 100, 1280, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE)
ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC )


? imgui_getversion()
imgui_CreateContext(NULL)


ImGui_ImplSDL2_InitForSDLRenderer(win, ren)
ImGui_ImplSDLRenderer_Init(ren)

#########################


io = GetIO()

font  = io.fonts.AddFontDefault(NULL)
font1 = io.fonts.AddFontFromFileTTF("CascadiaCode.ttf",16.0,NULL,NULL)    
font2 = io.fonts.AddFontFromFileTTF("CascadiaCode.ttf",14,NULL,NULL)    


io.FontDefault = font1

? "+++++++++++++++++++++"
? font1
? io.FontDefault
? "+++++++++++++++++++++"

style = GetStyle()
#style.iteminnerspacing.x = 2

? style.iteminnerspacing.x

? imgui_getframeheight()

 #imgui_calcitemwidth()

close_btn = true
close_btn2 = false

change = 2.5

d_var = 200.0

slint = 2

v2 = imvec2(0,0)
v4 = ImVec4(1.0f, 0.0f, 1.0f, 1.0f)


clicked = 0

check  = true

e = 0
counter = 0
item_current = 0



items = ["aaaa","bbbb","cccc","dddd","eeee","looool","school","GGGG"]

cString = space(128)

cString_2 = space(128)

i0 = 123;
f0 = 0.001f

d0 = 999999.00000001

i1 = 50
i2 = 42
i3 = 30

color = ImVec4(114.0f / 255.0f, 144.0f / 255.0f, 154.0f / 255.0f, 200.0f / 255.0f)



#myV4 = imgui_new_imvec4()
#myV4 = imgui_new_managed_imvec4()
myV4 = ImVec4(1.0f, 0.0f, 1.0f, 1.0f)

rgb_1 = ImRGB(1.0, 0.0, 0.2)

rgbList = [1.0, 0.0, 0.2]

listbox_items = ["Apple", "Banana", "Cherry", "Kiwi", "Mango", "Orange", "Pineapple", "Strawberry", "Watermelon"]

current_item_listbox = 1

closable_group = true


j = 0

begin_combo_current_item = ""

is_selected = true

current_item = 0


combo_flags = 0

/*
for x = 1 to 10000
	listbox_items + (""+x)
next
*/

####################################################

myevent = sdl_new_sdl_event()

while true


				
	thevent = sdl_pollevent(myevent)
					
if thevent != 0
					
	
			
    ImGui_ImplSDL2_ProcessEvent(myevent)
		

	switch sdl_get_sdl_event_type(myevent)
		on sdl_get_sdl_quit()
				exit
		on sdl_get_sdl_keydown()
				Key = SDL_GET_SDL_Event_key_keysym_sym(myevent)
				if key = 27 exit ok
		
	off
	


	ImGui_ImplSDLRenderer_NewFrame()
	ImGui_ImplSDL2_NewFrame()
	imgui_NewFrame()
	##########################################
	### you should write your code hier

	imgui_ShowDemoWindow(NULL)  

	if  close_btn = true
	
		imgui_begin("imgui in Ring",:close_btn,0)

		if imgui_treeNode("Basic")
			#add button in windo
			if ig_button("click me",v2)
				? "Button 1 pressed"
				? close_btn
				clicked++
			ok

			if clicked and 1
				imgui_sameline(0,-1)  

				imgui_text("Thanks for clicking me!")
			ok

			if ig_button("Button 2",v2)
				? "Button 2 pressed"
			ok

			if ig_button("show anthor window",v2)
				close_btn2 = true
			ok

			if close_btn2 = true
				imgui_begin("anthor windows",:close_btn2,0)
					
					if ig_button("close me",v2)
						close_btn2 = false
					ok

				imgui_end()
			ok

			if imgui_checkbox("checkbox",:check) and check 
				? "checked"
			ok

			if  imgui_sliderint("slider int",:slint, 1,20,"%d",0)
					? "value chanched : " + slint
			ok

			if  imgui_sliderdouble("slider Double", :d_var ,0,5,"%.2f",0)
					? "value chanched : " + d_var
			ok

			imgui_RadioButton_2("radio a", :e, 0) imgui_sameline(0,-1)
			imgui_RadioButton_2("radio b", :e, 1) imgui_sameline(0,-1)
			imgui_RadioButton_2("radio c", :e, 2)

			#imgui_AlignTextToFramePadding()
			################################
			ImGui_Text("Hold to repeat:") 
			imgui_sameline(0,-1)

        	imgui_PushButtonRepeat(true)

        	if imgui_ArrowButton("##left", ImGuiDir_Left)
			  counter-- 
			ok

        	imgui_sameline(0,-1)

        	if imgui_ArrowButton("##right", ImGuiDir_Right) 
				counter++
			ok
        	imgui_PopButtonRepeat()
        	imgui_sameline(0,-1)
        	imgui_Text(""+counter)
			###########################################	

			for i = 0 to 7
	
        	    if i > 0
        	        imgui_sameline(0,-1)
				ok	
	    	    ImGui_PushID_4(i);
        	    ig_PushStyleColor(ImGuiCol_Button, ImVec4(i / 7.0f, 0.6f, 0.6f , 1.0) ) #ImVec4	(i / 7.0f, 0.6f, 0.6f)
        	    ig_PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(i / 7.0f, 0.7f, 0.7f , 1.0));
        	    ig_PushStyleColor(ImGuiCol_ButtonActive, ImVec4(i / 7.0f, 0.8f, 0.8f , 1.0));
        	    ig_button("Click",v2);
        	    ImGui_PopStyleColor(3);
        	    ImGui_PopID();
        	next

			##############

			for i = 0 to 7
	
        	    if i > 0
        	        imgui_sameline(0,-1)
				ok	
	    	    ImGui_PushID_4(i);
        	    ig_PushStyleColor(ImGuiCol_Button, imgui_imcolor_hsv(i / 7.0f, 0.6f, 0.6f , 1.	0) ) 
        	    ig_PushStyleColor(ImGuiCol_ButtonHovered, imgui_imcolor_hsv(i / 7.0f, 0.7f, 0.	7f , 1.0));
        	    ig_PushStyleColor(ImGuiCol_ButtonActive, imgui_imcolor_hsv(i / 7.0f, 0.8f, 0.	8f , 1.0));
        	    ig_button("Click",v2);
        	    ImGui_PopStyleColor(3);
        	    ImGui_PopID();
        	next

			ImGui_Text("Hover over me");
        	if ImGui_IsItemHovered(0)
        	    ImGui_SetTooltip("I am a tooltip")
			ok

			ImGui_Separator()
        	ImGui_LabelText("label", "Value")

			if ImGui_Combo("combo", :item_current, items, len(items) , -1)
				? "value chanched : " + item_current
			ok

			if ig_button("add item to combo",v2)
				? items + ("neu"+ j++)
			ok

			if imgui_inputText("input text",:cString,len(cString),0,NULL,NULL)
				? "typed"
			ok

			if ig_button("show input text",v2)
				? trim(cString) +"  " + len(trim(cString))
			ok

			imgui_InputTextWithHint("input text (w/ hint)", "enter text here",:cString_2,len	(cString_2),0,0,NULL)

			imgui_InputInt("input int", :i0, 1 , 100 , 0 )

			imgui_InputFloat("input Float", :f0, 0.01 , 1.0 ,"%.3f" ,ImGuiInputTextFlags_None )

			imgui_InputDouble("input double", :d0, 0.01, 1.0, "%.8f",ImGuiInputTextFlags_None)

			if ImGui_DragInt("drag int", :i1, 1, 0, 0, "%d", 0)
				? i1
			ok
			# the name of drag ist the id of drag
			ImGui_DragInt("drag int 0..100", :i2, 1, 0, 0, "%d", 0) 
			ImGui_DragInt("drag int 0..100", :i3, 1, 0, 100, "%d%%", 	ImGuiSliderFlags_AlwaysClamp)



			if ig_ColorEdit4("MyColor", myV4 , ImGuiColorEditFlags_NoInputs | 	ImGuiColorEditFlags_NoLabel)
				? myV4.x
			ok

			ig_ColorEdit4("MyColor2", myV4 , 0)

			if ig_ColorEdit3("color 1", rgb_1 , 0)
				? ""+rgb_1.R +" : " + rgb_1.G + " : " +rgb_1.B
			ok

			if imgui_ColorEdit3("color list", rgbList , 0)
				? rgbList[1]
			ok

			if imgui_ListBox("listbox", :current_item_listbox, listbox_items, len	(listbox_items), 4)

			ok

			if ig_button("add items to list",v2)
				listbox_items + "neu item"
				#? listbox_items
			ok

			imgui_TreePop()	
		ok

		if imgui_treeNode("Basic trees")

			for x = 1  to  5

				if  imgui_TreeNode_1("id"+x,"Child "+x)

					#imgui_text("im in child "+x)
					ImGui_Text("im in child " + x) 
					imgui_sameline(0,-1)

					if imgui_smallbutton("butto "+x)

					ok

					imgui_TreePop()
				ok
				
			next

			imgui_TreePop()
		ok

		if imgui_treeNode("Collapsing Headers")

			imgui_checkbox("Show 2nd header",:closable_group)

			if imgui_CollapsingHeader("Header", ImGuiTreeNodeFlags_None)
				
				for x = 1 to 5
					imgui_text("Some content " + x)
				next
			ok

			if imgui_CollapsingHeader_2("Header with a close button", :closable_group , 0)

				for x = 1 to 5
					imgui_text("More content " + x)
				next
			ok

			imgui_TreePop()

		ok

		if imgui_treeNode("Bullets")
			ImGui_BulletText("Bullet point 1");
        	ImGui_BulletText("Bullet point 2\nOn multiple lines");

        	ImGui_Bullet()
        	ImGui_Text("Bullet point 3 (two calls)")

        	ImGui_Bullet()
			ImGui_SmallButton("Button")

			imgui_TreePop()
		ok

		if imgui_treeNode("Colorful Text")

			if imgui_treeNode("Colorful Text")

            	ig_TextColored(ImVec4(1.0f, 0.0f, 1.0f, 1.0f), "Pink");
            	ig_TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "Yellow");
            	imgui_TextDisabled("Disabled");

				imgui_TreePop()
			ok

			if imgui_treeNode("Word Wrapping")
				
				imgui_TextWrapped("This text should automatically wrap on the edge of the window. The current implementation for text wrapping follows simple rules suitable for English and possibly other languages.")

				for x = 0  to 10 
					imgui_Spacing()
				next

				imgui_sliderdouble("Wrap width", :d_var ,-20,600,"%.0f",0)


            	
			ok

			imgui_TreePop()
		ok


		if imgui_treeNode("Combo")


			if ImGui_Combo("combo 0", :item_current, items, len(items) ,-1)
				? "value chanched : " + item_current
			ok

			#imgui_checkboxflags("ImGuiComboFlags_PopupAlignLeft",combo_flags,ImGuiComboFlags_PopupAlignLeft)

			if imgui_checkboxflags("ImGuiComboFlags_NoArrowButton",:combo_flags, ImGuiComboFlags_NoArrowButton)
            	combo_flags &= ~ImGuiComboFlags_NoPreview
			ok 
        	if imgui_checkboxflags("ImGuiComboFlags_NoPreview",:combo_flags, ImGuiComboFlags_NoPreview)
            	combo_flags &= ~ImGuiComboFlags_NoArrowButton; // Clear the other flag, as we cannot combine both
			ok


			if imgui_begincombo("combo 1",begin_combo_current_item,combo_flags)

				for i = 1  to len(items) 
					if ig_Selectable(items[i],1,0,v2)
						begin_combo_current_item = items[i]
					ok	
				next

				imgui_EndCombo()
			ok


			w = imgui_CalcItemWidth()
			spacing = style.iteminnerspacing.x
			button_sz = imgui_GetFrameHeight()

			imgui_pushitemwidth(w - spacing * 2.0f - button_sz * 2.0f)

			if imgui_begincombo("##combo begin",begin_combo_current_item,ImGuiComboFlags_NoArrowButton)

				for i = 1  to len(items) 
					if ig_Selectable(items[i],1,0,v2)
						begin_combo_current_item = items[i]
					ok	
				next

				imgui_EndCombo()
			ok

			imgui_PopItemWidth()

			imgui_sameline(0,spacing)


			if imgui_ArrowButton("##left", ImGuiDir_Left)

				index = find(items,begin_combo_current_item)
			  	if  index != 1
					begin_combo_current_item = items[find(items,begin_combo_current_item)-1]
			  	else
					begin_combo_current_item = items[len(items)]
			  	ok
			  
			ok

        	imgui_sameline(0,spacing)

        	if imgui_ArrowButton("##right", ImGuiDir_Right) 
				
				index = find(items,begin_combo_current_item)
			  	if  index != len(items)
					begin_combo_current_item = items[find(items,begin_combo_current_item)+1]
			  	else
					begin_combo_current_item = items[1]
			  	ok
			ok

			imgui_sameline(0,style.ItemInnerSpacing.x)

			imgui_Text("Custom Combo")




			imgui_TreePop()
		ok
		
		if imgui_treenode("List Boxes") 

			if imgui_ListBox("listbox", :current_item_listbox, listbox_items, len(listbox_items), 4)

			ok

			if ig_BeginListBox("listbox 1", v2)  
			    
				for z = 1  to len(listbox_items) 
					
					is_selected = (current_item = z)
					if ig_Selectable(listbox_items[z],is_selected,1,v2)
						current_item = z
						? current_item
					ok

					#if is_selected      
					#	imgui_SetItemDefaultFocus()
					#ok

				next

				imgui_EndListBox()
			ok

			ImGui_Text("Full-width:");

			//|# if ig_BeginListBox("##listbox 2", imvec2(-1,200 ))  
			if ig_BeginListBox("##listbox 2", imvec2(-1,5 * ImGui_GetTextLineHeightWithSpacing()))  
			    
				for z = 1  to len(listbox_items) 
					
					is_selected = (current_item = z)
					if ig_Selectable(listbox_items[z],is_selected,1,v2)
						current_item = z
						? current_item
					ok

					#if is_selected      
					#	imgui_SetItemDefaultFocus()
					#ok

				next

				imgui_EndListBox()
			ok

		 	imgui_TreePop()
		ok

		if imgui_treenode("anthor Font") 

			imgui_pushfont(font)
				
				imgui_Text("Hello with another font")
				
				if ig_button("onthor font",v2)
					
				ok

			imgui_PopFont()

		 	imgui_TreePop()
		ok

		if  imgui_treenode("tabs")

			if  imgui_treenode("basic")

				if imgui_beginTabBar("MyTabBar", 0)

					if ImGui_BeginTabItem("Avocado", NULL , 0)
                
                    	ImGui_Text("This is the Avocado tab!\nblah blah blah blah blah");
                    	ImGui_EndTabItem()
					
					ok

					if ImGui_BeginTabItem("Broccoli", NULL , 0)
                
                    	ImGui_Text("This is the Broccoli tab!\nblah blah blah blah blah");
                    	ImGui_EndTabItem()
					
					ok

					if ImGui_BeginTabItem("Cucumber", NULL , 0)
                
                    	ImGui_Text("This is the Cucumber tab!\nblah blah blah blah blah");
                    	ImGui_EndTabItem()
					
					ok

					
					ImGui_Separator()
					ImGui_Separator()

					imgui_endTabBar()
				ok

				imgui_TreePop()
			ok

			if  imgui_treenode("Advanced & Close Button")

				imgui_TreePop()
			ok

			if  imgui_treenode("TabItemButton & Leading/Trailing flags")

				imgui_TreePop()
			ok

			imgui_TreePop()
		ok




		imgui_end()
	
	ok

	######################################
	imgui_Render()
	
	SDL_SetRenderDrawColor(ren,255,255,255,255)
	SDL_RenderClear(ren)
	ImGui_ImplSDLRenderer_RenderDrawData(imgui_GetDrawData())

ok

	SDL_RenderPresent(ren)
	
end

    ImGui_ImplSDLRenderer_Shutdown()
    ImGui_ImplSDL2_Shutdown()
    imgui_DestroyContext(NULL)

SDL_DestroyRenderer(ren)
SDL_DestroyWindow(win)
SDL_Quit()

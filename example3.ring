
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



close_btn = true
close_btn2 = true

change = 2.5

d_var = 0.5

slint = 2

v2 = imvec2(0,0)


myevent = sdl_new_sdl_event()
while true

				
        thevent = sdl_pollevent(myevent)
				/*				
				if thevent = 0
						
				ok
				*/
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
						imgui_begin("mywind","close_btn",0)
								

                #add button in windo
                if ig_button("click me",v2)
					        ? "Button 1 pressed"
									? close_btn
				        ok

				        if ig_button("Button 2",v2)
					        ? "Button 2 pressed"
				        ok

			        	if ig_button("show anthor window",v2)
					        	close_btn2 = true
				        ok



								if  imgui_sliderint("slider int",:slint, 1,20,"%d",0)
										? "value chanched : " + slint
								ok

								if  imgui_sliderdouble("slider Double", :d_var ,0,5,"%.2f",0)
										? "value chanched : " + d_var
								ok


								
						imgui_end()
				ok


				######################################
				imgui_Render()
				SDL_SetRenderDrawColor(ren,255,255,255,255)
				SDL_RenderClear(ren)
				
				ImGui_ImplSDLRenderer_RenderDrawData(imgui_GetDrawData())
				
				SDL_RenderPresent(ren)

end

    ImGui_ImplSDLRenderer_Shutdown()
    ImGui_ImplSDL2_Shutdown()
    imgui_DestroyContext(NULL)

SDL_DestroyRenderer(ren)
SDL_DestroyWindow(win)
SDL_Quit()


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


close_btn = int2bytes(true)




myevent = sdl_new_sdl_event()
while true

				
        thevent = sdl_pollevent(myevent)

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

				if  bytes2int(close_btn)
						imgui_begin("mywind",varptr(:close_btn,:int),0)
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

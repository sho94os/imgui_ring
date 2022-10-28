#include "imgui.h"
		#include "imgui_internal.h"
		#include "imgui_impl_sdl.h"
		#include "imgui_impl_sdlrenderer.h"

using namespace ImGui;



extern "C"
{

#include "ring.h"

#include "stdlib.h"

RING_API void ringlib_init(RingState *pRingState);


}




typedef struct ImDrawChannel ImDrawChannel;
typedef struct ImDrawCmd ImDrawCmd;
typedef struct ImDrawData ImDrawData;
typedef struct ImDrawList ImDrawList;
typedef struct ImDrawListSharedData ImDrawListSharedData;
typedef struct ImDrawListSplitter ImDrawListSplitter;
typedef struct ImDrawVert ImDrawVert;
typedef struct ImFont ImFont;
typedef struct ImFontAtlas ImFontAtlas;
typedef struct ImFontBuilderIO ImFontBuilderIO;
typedef struct ImFontConfig ImFontConfig;
typedef struct ImFontGlyph ImFontGlyph;
typedef struct ImFontGlyphRangesBuilder ImFontGlyphRangesBuilder;
typedef struct ImColor ImColor;
typedef struct ImGuiContext ImGuiContext;
typedef struct ImGuiIO ImGuiIO;
typedef struct ImGuiInputTextCallbackData ImGuiInputTextCallbackData;
typedef struct ImGuiKeyData ImGuiKeyData;
typedef struct ImGuiListClipper ImGuiListClipper;
typedef struct ImGuiOnceUponAFrame ImGuiOnceUponAFrame;
typedef struct ImGuiPayload ImGuiPayload;
typedef struct ImGuiPlatformIO ImGuiPlatformIO;
typedef struct ImGuiPlatformMonitor ImGuiPlatformMonitor;
typedef struct ImGuiPlatformImeData ImGuiPlatformImeData;
typedef struct ImGuiSizeCallbackData ImGuiSizeCallbackData;
typedef struct ImGuiStorage ImGuiStorage;
typedef struct ImGuiStyle ImGuiStyle;
typedef struct ImGuiTableSortSpecs ImGuiTableSortSpecs;
typedef struct ImGuiTableColumnSortSpecs ImGuiTableColumnSortSpecs;
typedef struct ImGuiTextBuffer ImGuiTextBuffer;
typedef struct ImGuiTextFilter ImGuiTextFilter;
typedef struct ImGuiViewport ImGuiViewport;
typedef struct ImGuiWindowClass ImGuiWindowClass;
typedef struct ImBitVector ImBitVector;
typedef struct ImRect ImRect;
typedef struct ImDrawDataBuilder ImDrawDataBuilder;
typedef struct ImGuiColorMod ImGuiColorMod;
typedef struct ImGuiContextHook ImGuiContextHook;
typedef struct ImGuiDataTypeInfo ImGuiDataTypeInfo;
typedef struct ImGuiDockContext ImGuiDockContext;
typedef struct ImGuiDockRequest ImGuiDockRequest;
typedef struct ImGuiDockNode ImGuiDockNode;
typedef struct ImGuiDockNodeSettings ImGuiDockNodeSettings;
typedef struct ImGuiGroupData ImGuiGroupData;
typedef struct ImGuiInputTextState ImGuiInputTextState;
typedef struct ImGuiLastItemData ImGuiLastItemData;
typedef struct ImGuiMenuColumns ImGuiMenuColumns;
typedef struct ImGuiNavItemData ImGuiNavItemData;
typedef struct ImGuiMetricsConfig ImGuiMetricsConfig;
typedef struct ImGuiNextWindowData ImGuiNextWindowData;
typedef struct ImGuiNextItemData ImGuiNextItemData;
typedef struct ImGuiOldColumnData ImGuiOldColumnData;
typedef struct ImGuiOldColumns ImGuiOldColumns;
typedef struct ImGuiPopupData ImGuiPopupData;
typedef struct ImGuiSettingsHandler ImGuiSettingsHandler;
typedef struct ImGuiStackSizes ImGuiStackSizes;
typedef struct ImGuiStyleMod ImGuiStyleMod;
typedef struct ImGuiTabBar ImGuiTabBar;
typedef struct ImGuiTabItem ImGuiTabItem;
typedef struct ImGuiTable ImGuiTable;
typedef struct ImGuiTableColumn ImGuiTableColumn;
typedef struct ImGuiTableInstanceData ImGuiTableInstanceData;
typedef struct ImGuiTableTempData ImGuiTableTempData;
typedef struct ImGuiTableSettings ImGuiTableSettings;
typedef struct ImGuiTableColumnsSettings ImGuiTableColumnsSettings;
typedef struct ImGuiWindow ImGuiWindow;
typedef struct ImGuiWindowTempData ImGuiWindowTempData;
typedef struct ImGuiWindowSettings ImGuiWindowSettings;

struct ImDrawChannel;
struct ImDrawCmd;
struct ImDrawData;
struct ImDrawList;
struct ImDrawListSharedData;
struct ImDrawListSplitter;
struct ImDrawVert;
struct ImFont;
struct ImFontAtlas;
struct ImFontBuilderIO;
struct ImFontConfig;
struct ImFontGlyph;
struct ImFontGlyphRangesBuilder;
struct ImColor;
struct ImGuiContext;
struct ImGuiIO;
struct ImGuiInputTextCallbackData;
struct ImGuiKeyData;
struct ImGuiListClipper;
struct ImGuiOnceUponAFrame;
struct ImGuiPayload;
struct ImGuiPlatformIO;
struct ImGuiPlatformMonitor;
struct ImGuiPlatformImeData;
struct ImGuiSizeCallbackData;
struct ImGuiStorage;
struct ImGuiStyle;
struct ImGuiTableSortSpecs;
struct ImGuiTableColumnSortSpecs;
struct ImGuiTextBuffer;
struct ImGuiTextFilter;
struct ImGuiViewport;
struct ImGuiWindowClass;



RING_FUNC(ring_imgui_new_imvec2)
{
	ImVec2 *pMyPointer ;
	pMyPointer = (ImVec2 *) RING_API_MALLOC(sizeof(ImVec2)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImVec2");
}

RING_FUNC(ring_imgui_new_managed_imvec2)
{
	ImVec2 *pMyPointer ;
	pMyPointer = (ImVec2 *) RING_API_MALLOC(sizeof(ImVec2)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImVec2",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imvec2)
{
	ImVec2 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec2*) RING_API_GETCPOINTER(1,"ImVec2");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imvec2_x)
{
	ImVec2 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec2 *) RING_API_GETCPOINTER(1,"ImVec2");
	RING_API_RETNUMBER(pMyPointer->x);
}

RING_FUNC(ring_imgui_set_imvec2_x)
{
	ImVec2 *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec2 *) RING_API_GETCPOINTER(1,"ImVec2");
	pMyPointer->x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imvec2_y)
{
	ImVec2 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec2 *) RING_API_GETCPOINTER(1,"ImVec2");
	RING_API_RETNUMBER(pMyPointer->y);
}

RING_FUNC(ring_imgui_set_imvec2_y)
{
	ImVec2 *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec2 *) RING_API_GETCPOINTER(1,"ImVec2");
	pMyPointer->y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imvec4)
{
	ImVec4 *pMyPointer ;
	pMyPointer = (ImVec4 *) RING_API_MALLOC(sizeof(ImVec4)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImVec4");
}

RING_FUNC(ring_imgui_new_managed_imvec4)
{
	ImVec4 *pMyPointer ;
	pMyPointer = (ImVec4 *) RING_API_MALLOC(sizeof(ImVec4)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImVec4",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imvec4)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4*) RING_API_GETCPOINTER(1,"ImVec4");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imvec4_x)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	RING_API_RETNUMBER(pMyPointer->x);
}

RING_FUNC(ring_imgui_set_imvec4_x)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	pMyPointer->x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imvec4_y)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	RING_API_RETNUMBER(pMyPointer->y);
}

RING_FUNC(ring_imgui_set_imvec4_y)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	pMyPointer->y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imvec4_z)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	RING_API_RETNUMBER(pMyPointer->z);
}

RING_FUNC(ring_imgui_set_imvec4_z)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	pMyPointer->z = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imvec4_w)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	RING_API_RETNUMBER(pMyPointer->w);
}

RING_FUNC(ring_imgui_set_imvec4_w)
{
	ImVec4 *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImVec4 *) RING_API_GETCPOINTER(1,"ImVec4");
	pMyPointer->w = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imguistyle)
{
	ImGuiStyle *pMyPointer ;
	pMyPointer = (ImGuiStyle *) RING_API_MALLOC(sizeof(ImGuiStyle)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiStyle");
}

RING_FUNC(ring_imgui_new_managed_imguistyle)
{
	ImGuiStyle *pMyPointer ;
	pMyPointer = (ImGuiStyle *) RING_API_MALLOC(sizeof(ImGuiStyle)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiStyle",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguistyle)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle*) RING_API_GETCPOINTER(1,"ImGuiStyle");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imguistyle_Alpha)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->Alpha);
}

RING_FUNC(ring_imgui_set_imguistyle_Alpha)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->Alpha = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_DisabledAlpha)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->DisabledAlpha);
}

RING_FUNC(ring_imgui_set_imguistyle_DisabledAlpha)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->DisabledAlpha = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowPadding.x);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowPadding.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowPadding.y);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowPadding.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowRounding);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowRounding = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowBorderSize);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowBorderSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowMinSize_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowMinSize.x);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowMinSize_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowMinSize.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowMinSize_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowMinSize.y);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowMinSize_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowMinSize.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowTitleAlign_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowTitleAlign.x);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowTitleAlign_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowTitleAlign.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowTitleAlign_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowTitleAlign.y);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowTitleAlign_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowTitleAlign.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_WindowMenuButtonPosition)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->WindowMenuButtonPosition);
}

RING_FUNC(ring_imgui_set_imguistyle_WindowMenuButtonPosition)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->WindowMenuButtonPosition = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ChildRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ChildRounding);
}

RING_FUNC(ring_imgui_set_imguistyle_ChildRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ChildRounding = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ChildBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ChildBorderSize);
}

RING_FUNC(ring_imgui_set_imguistyle_ChildBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ChildBorderSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_PopupRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->PopupRounding);
}

RING_FUNC(ring_imgui_set_imguistyle_PopupRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->PopupRounding = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_PopupBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->PopupBorderSize);
}

RING_FUNC(ring_imgui_set_imguistyle_PopupBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->PopupBorderSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_FramePadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->FramePadding.x);
}

RING_FUNC(ring_imgui_set_imguistyle_FramePadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->FramePadding.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_FramePadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->FramePadding.y);
}

RING_FUNC(ring_imgui_set_imguistyle_FramePadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->FramePadding.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_FrameRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->FrameRounding);
}

RING_FUNC(ring_imgui_set_imguistyle_FrameRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->FrameRounding = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_FrameBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->FrameBorderSize);
}

RING_FUNC(ring_imgui_set_imguistyle_FrameBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->FrameBorderSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ItemSpacing_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ItemSpacing.x);
}

RING_FUNC(ring_imgui_set_imguistyle_ItemSpacing_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ItemSpacing.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ItemSpacing_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ItemSpacing.y);
}

RING_FUNC(ring_imgui_set_imguistyle_ItemSpacing_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ItemSpacing.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ItemInnerSpacing_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ItemInnerSpacing.x);
}

RING_FUNC(ring_imgui_set_imguistyle_ItemInnerSpacing_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ItemInnerSpacing.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ItemInnerSpacing_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ItemInnerSpacing.y);
}

RING_FUNC(ring_imgui_set_imguistyle_ItemInnerSpacing_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ItemInnerSpacing.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_CellPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->CellPadding.x);
}

RING_FUNC(ring_imgui_set_imguistyle_CellPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->CellPadding.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_CellPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->CellPadding.y);
}

RING_FUNC(ring_imgui_set_imguistyle_CellPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->CellPadding.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_TouchExtraPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->TouchExtraPadding.x);
}

RING_FUNC(ring_imgui_set_imguistyle_TouchExtraPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->TouchExtraPadding.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_TouchExtraPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->TouchExtraPadding.y);
}

RING_FUNC(ring_imgui_set_imguistyle_TouchExtraPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->TouchExtraPadding.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_IndentSpacing)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->IndentSpacing);
}

RING_FUNC(ring_imgui_set_imguistyle_IndentSpacing)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->IndentSpacing = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ColumnsMinSpacing)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ColumnsMinSpacing);
}

RING_FUNC(ring_imgui_set_imguistyle_ColumnsMinSpacing)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ColumnsMinSpacing = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ScrollbarSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ScrollbarSize);
}

RING_FUNC(ring_imgui_set_imguistyle_ScrollbarSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ScrollbarSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ScrollbarRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ScrollbarRounding);
}

RING_FUNC(ring_imgui_set_imguistyle_ScrollbarRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ScrollbarRounding = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_GrabMinSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->GrabMinSize);
}

RING_FUNC(ring_imgui_set_imguistyle_GrabMinSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->GrabMinSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_GrabRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->GrabRounding);
}

RING_FUNC(ring_imgui_set_imguistyle_GrabRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->GrabRounding = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_LogSliderDeadzone)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->LogSliderDeadzone);
}

RING_FUNC(ring_imgui_set_imguistyle_LogSliderDeadzone)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->LogSliderDeadzone = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_TabRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->TabRounding);
}

RING_FUNC(ring_imgui_set_imguistyle_TabRounding)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->TabRounding = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_TabBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->TabBorderSize);
}

RING_FUNC(ring_imgui_set_imguistyle_TabBorderSize)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->TabBorderSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_TabMinWidthForCloseButton)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->TabMinWidthForCloseButton);
}

RING_FUNC(ring_imgui_set_imguistyle_TabMinWidthForCloseButton)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->TabMinWidthForCloseButton = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ColorButtonPosition)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ColorButtonPosition);
}

RING_FUNC(ring_imgui_set_imguistyle_ColorButtonPosition)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ColorButtonPosition = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ButtonTextAlign_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ButtonTextAlign.x);
}

RING_FUNC(ring_imgui_set_imguistyle_ButtonTextAlign_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ButtonTextAlign.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_ButtonTextAlign_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->ButtonTextAlign.y);
}

RING_FUNC(ring_imgui_set_imguistyle_ButtonTextAlign_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->ButtonTextAlign.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_SelectableTextAlign_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->SelectableTextAlign.x);
}

RING_FUNC(ring_imgui_set_imguistyle_SelectableTextAlign_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->SelectableTextAlign.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_SelectableTextAlign_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->SelectableTextAlign.y);
}

RING_FUNC(ring_imgui_set_imguistyle_SelectableTextAlign_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->SelectableTextAlign.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_DisplayWindowPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->DisplayWindowPadding.x);
}

RING_FUNC(ring_imgui_set_imguistyle_DisplayWindowPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->DisplayWindowPadding.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_DisplayWindowPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->DisplayWindowPadding.y);
}

RING_FUNC(ring_imgui_set_imguistyle_DisplayWindowPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->DisplayWindowPadding.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_DisplaySafeAreaPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->DisplaySafeAreaPadding.x);
}

RING_FUNC(ring_imgui_set_imguistyle_DisplaySafeAreaPadding_x)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->DisplaySafeAreaPadding.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_DisplaySafeAreaPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->DisplaySafeAreaPadding.y);
}

RING_FUNC(ring_imgui_set_imguistyle_DisplaySafeAreaPadding_y)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->DisplaySafeAreaPadding.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_MouseCursorScale)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->MouseCursorScale);
}

RING_FUNC(ring_imgui_set_imguistyle_MouseCursorScale)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->MouseCursorScale = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_AntiAliasedLines)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->AntiAliasedLines);
}

RING_FUNC(ring_imgui_set_imguistyle_AntiAliasedLines)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->AntiAliasedLines = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_AntiAliasedLinesUseTex)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->AntiAliasedLinesUseTex);
}

RING_FUNC(ring_imgui_set_imguistyle_AntiAliasedLinesUseTex)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->AntiAliasedLinesUseTex = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_AntiAliasedFill)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->AntiAliasedFill);
}

RING_FUNC(ring_imgui_set_imguistyle_AntiAliasedFill)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->AntiAliasedFill = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_CurveTessellationTol)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->CurveTessellationTol);
}

RING_FUNC(ring_imgui_set_imguistyle_CurveTessellationTol)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->CurveTessellationTol = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguistyle_CircleTessellationMaxError)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	RING_API_RETNUMBER(pMyPointer->CircleTessellationMaxError);
}

RING_FUNC(ring_imgui_set_imguistyle_CircleTessellationMaxError)
{
	ImGuiStyle *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle");
	pMyPointer->CircleTessellationMaxError = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imguikeydata)
{
	ImGuiKeyData *pMyPointer ;
	pMyPointer = (ImGuiKeyData *) RING_API_MALLOC(sizeof(ImGuiKeyData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiKeyData");
}

RING_FUNC(ring_imgui_new_managed_imguikeydata)
{
	ImGuiKeyData *pMyPointer ;
	pMyPointer = (ImGuiKeyData *) RING_API_MALLOC(sizeof(ImGuiKeyData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiKeyData",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguikeydata)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData*) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imguikeydata_Down)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	RING_API_RETNUMBER(pMyPointer->Down);
}

RING_FUNC(ring_imgui_set_imguikeydata_Down)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	pMyPointer->Down = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguikeydata_DownDuration)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	RING_API_RETNUMBER(pMyPointer->DownDuration);
}

RING_FUNC(ring_imgui_set_imguikeydata_DownDuration)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	pMyPointer->DownDuration = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguikeydata_DownDurationPrev)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	RING_API_RETNUMBER(pMyPointer->DownDurationPrev);
}

RING_FUNC(ring_imgui_set_imguikeydata_DownDurationPrev)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	pMyPointer->DownDurationPrev = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguikeydata_AnalogValue)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	RING_API_RETNUMBER(pMyPointer->AnalogValue);
}

RING_FUNC(ring_imgui_set_imguikeydata_AnalogValue)
{
	ImGuiKeyData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiKeyData *) RING_API_GETCPOINTER(1,"ImGuiKeyData");
	pMyPointer->AnalogValue = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imguiio)
{
	ImGuiIO *pMyPointer ;
	pMyPointer = (ImGuiIO *) RING_API_MALLOC(sizeof(ImGuiIO)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiIO");
}

RING_FUNC(ring_imgui_new_managed_imguiio)
{
	ImGuiIO *pMyPointer ;
	pMyPointer = (ImGuiIO *) RING_API_MALLOC(sizeof(ImGuiIO)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiIO",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguiio)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO*) RING_API_GETCPOINTER(1,"ImGuiIO");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imguiio_ConfigFlags)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigFlags);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigFlags)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigFlags = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_BackendFlags)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->BackendFlags);
}

RING_FUNC(ring_imgui_set_imguiio_BackendFlags)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->BackendFlags = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_DisplaySize_x)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->DisplaySize.x);
}

RING_FUNC(ring_imgui_set_imguiio_DisplaySize_x)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->DisplaySize.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_DisplaySize_y)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->DisplaySize.y);
}

RING_FUNC(ring_imgui_set_imguiio_DisplaySize_y)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->DisplaySize.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_DeltaTime)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->DeltaTime);
}

RING_FUNC(ring_imgui_set_imguiio_DeltaTime)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->DeltaTime = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_IniSavingRate)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->IniSavingRate);
}

RING_FUNC(ring_imgui_set_imguiio_IniSavingRate)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->IniSavingRate = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_IniFilename)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->IniFilename,"const char");
}

RING_FUNC(ring_imgui_set_imguiio_IniFilename)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->IniFilename = (const char *) RING_API_GETCPOINTER(2,"const char");
}

RING_FUNC(ring_imgui_get_imguiio_LogFilename)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->LogFilename,"const char");
}

RING_FUNC(ring_imgui_set_imguiio_LogFilename)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->LogFilename = (const char *) RING_API_GETCPOINTER(2,"const char");
}

RING_FUNC(ring_imgui_get_imguiio_MouseDoubleClickTime)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->MouseDoubleClickTime);
}

RING_FUNC(ring_imgui_set_imguiio_MouseDoubleClickTime)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->MouseDoubleClickTime = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_MouseDoubleClickMaxDist)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->MouseDoubleClickMaxDist);
}

RING_FUNC(ring_imgui_set_imguiio_MouseDoubleClickMaxDist)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->MouseDoubleClickMaxDist = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_MouseDragThreshold)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->MouseDragThreshold);
}

RING_FUNC(ring_imgui_set_imguiio_MouseDragThreshold)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->MouseDragThreshold = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_KeyRepeatDelay)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->KeyRepeatDelay);
}

RING_FUNC(ring_imgui_set_imguiio_KeyRepeatDelay)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->KeyRepeatDelay = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_KeyRepeatRate)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->KeyRepeatRate);
}

RING_FUNC(ring_imgui_set_imguiio_KeyRepeatRate)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->KeyRepeatRate = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_UserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->UserData,"void");
}

RING_FUNC(ring_imgui_set_imguiio_UserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->UserData = (void *) RING_API_GETCPOINTER(2,"void");
}

RING_FUNC(ring_imgui_get_imguiio_Fonts)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->Fonts,"ImFontAtlas");
}

RING_FUNC(ring_imgui_set_imguiio_Fonts)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->Fonts = (ImFontAtlas *) RING_API_GETCPOINTER(2,"ImFontAtlas");
}

RING_FUNC(ring_imgui_get_imguiio_FontGlobalScale)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->FontGlobalScale);
}

RING_FUNC(ring_imgui_set_imguiio_FontGlobalScale)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->FontGlobalScale = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_FontAllowUserScaling)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->FontAllowUserScaling);
}

RING_FUNC(ring_imgui_set_imguiio_FontAllowUserScaling)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->FontAllowUserScaling = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_FontDefault)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->FontDefault,"ImFont");
}

RING_FUNC(ring_imgui_set_imguiio_FontDefault)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->FontDefault = (ImFont *) RING_API_GETCPOINTER(2,"ImFont");
}

RING_FUNC(ring_imgui_get_imguiio_DisplayFramebufferScale_x)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->DisplayFramebufferScale.x);
}

RING_FUNC(ring_imgui_set_imguiio_DisplayFramebufferScale_x)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->DisplayFramebufferScale.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_DisplayFramebufferScale_y)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->DisplayFramebufferScale.y);
}

RING_FUNC(ring_imgui_set_imguiio_DisplayFramebufferScale_y)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->DisplayFramebufferScale.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigDockingNoSplit)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigDockingNoSplit);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigDockingNoSplit)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigDockingNoSplit = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigDockingWithShift)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigDockingWithShift);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigDockingWithShift)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigDockingWithShift = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigDockingAlwaysTabBar)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigDockingAlwaysTabBar);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigDockingAlwaysTabBar)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigDockingAlwaysTabBar = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigDockingTransparentPayload)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigDockingTransparentPayload);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigDockingTransparentPayload)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigDockingTransparentPayload = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigViewportsNoAutoMerge)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigViewportsNoAutoMerge);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigViewportsNoAutoMerge)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigViewportsNoAutoMerge = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigViewportsNoTaskBarIcon)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigViewportsNoTaskBarIcon);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigViewportsNoTaskBarIcon)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigViewportsNoTaskBarIcon = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigViewportsNoDecoration)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigViewportsNoDecoration);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigViewportsNoDecoration)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigViewportsNoDecoration = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigViewportsNoDefaultParent)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigViewportsNoDefaultParent);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigViewportsNoDefaultParent)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigViewportsNoDefaultParent = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_MouseDrawCursor)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->MouseDrawCursor);
}

RING_FUNC(ring_imgui_set_imguiio_MouseDrawCursor)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->MouseDrawCursor = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigMacOSXBehaviors)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigMacOSXBehaviors);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigMacOSXBehaviors)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigMacOSXBehaviors = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigInputTrickleEventQueue)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigInputTrickleEventQueue);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigInputTrickleEventQueue)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigInputTrickleEventQueue = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigInputTextCursorBlink)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigInputTextCursorBlink);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigInputTextCursorBlink)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigInputTextCursorBlink = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigDragClickToInputText)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigDragClickToInputText);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigDragClickToInputText)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigDragClickToInputText = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigWindowsResizeFromEdges)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigWindowsResizeFromEdges);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigWindowsResizeFromEdges)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigWindowsResizeFromEdges = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigWindowsMoveFromTitleBarOnly)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigWindowsMoveFromTitleBarOnly);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigWindowsMoveFromTitleBarOnly)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigWindowsMoveFromTitleBarOnly = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_ConfigMemoryCompactTimer)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETNUMBER(pMyPointer->ConfigMemoryCompactTimer);
}

RING_FUNC(ring_imgui_set_imguiio_ConfigMemoryCompactTimer)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->ConfigMemoryCompactTimer = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiio_BackendPlatformName)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->BackendPlatformName,"const char");
}

RING_FUNC(ring_imgui_set_imguiio_BackendPlatformName)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->BackendPlatformName = (const char *) RING_API_GETCPOINTER(2,"const char");
}

RING_FUNC(ring_imgui_get_imguiio_BackendRendererName)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->BackendRendererName,"const char");
}

RING_FUNC(ring_imgui_set_imguiio_BackendRendererName)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->BackendRendererName = (const char *) RING_API_GETCPOINTER(2,"const char");
}

RING_FUNC(ring_imgui_get_imguiio_BackendPlatformUserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->BackendPlatformUserData,"void");
}

RING_FUNC(ring_imgui_set_imguiio_BackendPlatformUserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->BackendPlatformUserData = (void *) RING_API_GETCPOINTER(2,"void");
}

RING_FUNC(ring_imgui_get_imguiio_BackendRendererUserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->BackendRendererUserData,"void");
}

RING_FUNC(ring_imgui_set_imguiio_BackendRendererUserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->BackendRendererUserData = (void *) RING_API_GETCPOINTER(2,"void");
}

RING_FUNC(ring_imgui_get_imguiio_BackendLanguageUserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	RING_API_RETCPOINTER(pMyPointer->BackendLanguageUserData,"void");
}

RING_FUNC(ring_imgui_set_imguiio_BackendLanguageUserData)
{
	ImGuiIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiIO *) RING_API_GETCPOINTER(1,"ImGuiIO");
	pMyPointer->BackendLanguageUserData = (void *) RING_API_GETCPOINTER(2,"void");
}

RING_FUNC(ring_imgui_new_imguiinputtextcallbackdata)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_MALLOC(sizeof(ImGuiInputTextCallbackData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiInputTextCallbackData");
}

RING_FUNC(ring_imgui_new_managed_imguiinputtextcallbackdata)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_MALLOC(sizeof(ImGuiInputTextCallbackData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiInputTextCallbackData",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguiinputtextcallbackdata)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData*) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_EventFlag)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->EventFlag);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_EventFlag)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->EventFlag = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_Flags)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->Flags);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_Flags)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->Flags = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_UserData)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETCPOINTER(pMyPointer->UserData,"void");
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_UserData)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->UserData = (void *) RING_API_GETCPOINTER(2,"void");
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_EventChar)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->EventChar);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_EventChar)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->EventChar = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_EventKey)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->EventKey);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_EventKey)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->EventKey = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_Buf)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETCPOINTER(pMyPointer->Buf,"char");
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_Buf)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->Buf = (char *) RING_API_GETCPOINTER(2,"char");
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_BufTextLen)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->BufTextLen);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_BufTextLen)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->BufTextLen = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_BufSize)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->BufSize);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_BufSize)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->BufSize = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_BufDirty)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->BufDirty);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_BufDirty)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->BufDirty = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_CursorPos)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->CursorPos);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_CursorPos)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->CursorPos = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_SelectionStart)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->SelectionStart);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_SelectionStart)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->SelectionStart = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiinputtextcallbackdata_SelectionEnd)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	RING_API_RETNUMBER(pMyPointer->SelectionEnd);
}

RING_FUNC(ring_imgui_set_imguiinputtextcallbackdata_SelectionEnd)
{
	ImGuiInputTextCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiInputTextCallbackData *) RING_API_GETCPOINTER(1,"ImGuiInputTextCallbackData");
	pMyPointer->SelectionEnd = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imguisizecallbackdata)
{
	ImGuiSizeCallbackData *pMyPointer ;
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_MALLOC(sizeof(ImGuiSizeCallbackData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiSizeCallbackData");
}

RING_FUNC(ring_imgui_new_managed_imguisizecallbackdata)
{
	ImGuiSizeCallbackData *pMyPointer ;
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_MALLOC(sizeof(ImGuiSizeCallbackData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiSizeCallbackData",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguisizecallbackdata)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData*) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imguisizecallbackdata_UserData)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	RING_API_RETCPOINTER(pMyPointer->UserData,"void");
}

RING_FUNC(ring_imgui_set_imguisizecallbackdata_UserData)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	pMyPointer->UserData = (void *) RING_API_GETCPOINTER(2,"void");
}

RING_FUNC(ring_imgui_get_imguisizecallbackdata_Pos_x)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	RING_API_RETNUMBER(pMyPointer->Pos.x);
}

RING_FUNC(ring_imgui_set_imguisizecallbackdata_Pos_x)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	pMyPointer->Pos.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguisizecallbackdata_Pos_y)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	RING_API_RETNUMBER(pMyPointer->Pos.y);
}

RING_FUNC(ring_imgui_set_imguisizecallbackdata_Pos_y)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	pMyPointer->Pos.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguisizecallbackdata_CurrentSize_x)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	RING_API_RETNUMBER(pMyPointer->CurrentSize.x);
}

RING_FUNC(ring_imgui_set_imguisizecallbackdata_CurrentSize_x)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	pMyPointer->CurrentSize.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguisizecallbackdata_CurrentSize_y)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	RING_API_RETNUMBER(pMyPointer->CurrentSize.y);
}

RING_FUNC(ring_imgui_set_imguisizecallbackdata_CurrentSize_y)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	pMyPointer->CurrentSize.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguisizecallbackdata_DesiredSize_x)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	RING_API_RETNUMBER(pMyPointer->DesiredSize.x);
}

RING_FUNC(ring_imgui_set_imguisizecallbackdata_DesiredSize_x)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	pMyPointer->DesiredSize.x = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguisizecallbackdata_DesiredSize_y)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	RING_API_RETNUMBER(pMyPointer->DesiredSize.y);
}

RING_FUNC(ring_imgui_set_imguisizecallbackdata_DesiredSize_y)
{
	ImGuiSizeCallbackData *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiSizeCallbackData *) RING_API_GETCPOINTER(1,"ImGuiSizeCallbackData");
	pMyPointer->DesiredSize.y = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imguiwindowclass)
{
	ImGuiWindowClass *pMyPointer ;
	pMyPointer = (ImGuiWindowClass *) RING_API_MALLOC(sizeof(ImGuiWindowClass)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiWindowClass");
}

RING_FUNC(ring_imgui_new_managed_imguiwindowclass)
{
	ImGuiWindowClass *pMyPointer ;
	pMyPointer = (ImGuiWindowClass *) RING_API_MALLOC(sizeof(ImGuiWindowClass)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiWindowClass",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguiwindowclass)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass*) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imguiwindowclass_ClassId)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->ClassId);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_ClassId)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->ClassId = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiwindowclass_ParentViewportId)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->ParentViewportId);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_ParentViewportId)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->ParentViewportId = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiwindowclass_ViewportFlagsOverrideSet)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->ViewportFlagsOverrideSet);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_ViewportFlagsOverrideSet)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->ViewportFlagsOverrideSet = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiwindowclass_ViewportFlagsOverrideClear)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->ViewportFlagsOverrideClear);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_ViewportFlagsOverrideClear)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->ViewportFlagsOverrideClear = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiwindowclass_TabItemFlagsOverrideSet)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->TabItemFlagsOverrideSet);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_TabItemFlagsOverrideSet)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->TabItemFlagsOverrideSet = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiwindowclass_DockNodeFlagsOverrideSet)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->DockNodeFlagsOverrideSet);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_DockNodeFlagsOverrideSet)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->DockNodeFlagsOverrideSet = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiwindowclass_DockingAlwaysTabBar)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->DockingAlwaysTabBar);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_DockingAlwaysTabBar)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->DockingAlwaysTabBar = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguiwindowclass_DockingAllowUnclassed)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	RING_API_RETNUMBER(pMyPointer->DockingAllowUnclassed);
}

RING_FUNC(ring_imgui_set_imguiwindowclass_DockingAllowUnclassed)
{
	ImGuiWindowClass *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass");
	pMyPointer->DockingAllowUnclassed = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imguipayload)
{
	ImGuiPayload *pMyPointer ;
	pMyPointer = (ImGuiPayload *) RING_API_MALLOC(sizeof(ImGuiPayload)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiPayload");
}

RING_FUNC(ring_imgui_new_managed_imguipayload)
{
	ImGuiPayload *pMyPointer ;
	pMyPointer = (ImGuiPayload *) RING_API_MALLOC(sizeof(ImGuiPayload)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiPayload",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguipayload)
{
	ImGuiPayload *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiPayload*) RING_API_GETCPOINTER(1,"ImGuiPayload");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguitablecolumnsortspecs)
{
	ImGuiTableColumnSortSpecs *pMyPointer ;
	pMyPointer = (ImGuiTableColumnSortSpecs *) RING_API_MALLOC(sizeof(ImGuiTableColumnSortSpecs)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiTableColumnSortSpecs");
}

RING_FUNC(ring_imgui_new_managed_imguitablecolumnsortspecs)
{
	ImGuiTableColumnSortSpecs *pMyPointer ;
	pMyPointer = (ImGuiTableColumnSortSpecs *) RING_API_MALLOC(sizeof(ImGuiTableColumnSortSpecs)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiTableColumnSortSpecs",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguitablecolumnsortspecs)
{
	ImGuiTableColumnSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableColumnSortSpecs*) RING_API_GETCPOINTER(1,"ImGuiTableColumnSortSpecs");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguitablesortspecs)
{
	ImGuiTableSortSpecs *pMyPointer ;
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_MALLOC(sizeof(ImGuiTableSortSpecs)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiTableSortSpecs");
}

RING_FUNC(ring_imgui_new_managed_imguitablesortspecs)
{
	ImGuiTableSortSpecs *pMyPointer ;
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_MALLOC(sizeof(ImGuiTableSortSpecs)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiTableSortSpecs",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguitablesortspecs)
{
	ImGuiTableSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableSortSpecs*) RING_API_GETCPOINTER(1,"ImGuiTableSortSpecs");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_get_imguitablesortspecs_Specs)
{
	ImGuiTableSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_GETCPOINTER(1,"ImGuiTableSortSpecs");
	RING_API_RETCPOINTER(pMyPointer->Specs,"const ImGuiTableColumnSortSpecs");
}

RING_FUNC(ring_imgui_set_imguitablesortspecs_Specs)
{
	ImGuiTableSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_GETCPOINTER(1,"ImGuiTableSortSpecs");
	pMyPointer->Specs = (const ImGuiTableColumnSortSpecs *) RING_API_GETCPOINTER(2,"const ImGuiTableColumnSortSpecs");
}

RING_FUNC(ring_imgui_get_imguitablesortspecs_SpecsCount)
{
	ImGuiTableSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_GETCPOINTER(1,"ImGuiTableSortSpecs");
	RING_API_RETNUMBER(pMyPointer->SpecsCount);
}

RING_FUNC(ring_imgui_set_imguitablesortspecs_SpecsCount)
{
	ImGuiTableSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_GETCPOINTER(1,"ImGuiTableSortSpecs");
	pMyPointer->SpecsCount = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_get_imguitablesortspecs_SpecsDirty)
{
	ImGuiTableSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_GETCPOINTER(1,"ImGuiTableSortSpecs");
	RING_API_RETNUMBER(pMyPointer->SpecsDirty);
}

RING_FUNC(ring_imgui_set_imguitablesortspecs_SpecsDirty)
{
	ImGuiTableSortSpecs *pMyPointer ;
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTableSortSpecs *) RING_API_GETCPOINTER(1,"ImGuiTableSortSpecs");
	pMyPointer->SpecsDirty = RING_API_GETNUMBER(2);
}

RING_FUNC(ring_imgui_new_imguionceuponaframe)
{
	ImGuiOnceUponAFrame *pMyPointer ;
	pMyPointer = (ImGuiOnceUponAFrame *) RING_API_MALLOC(sizeof(ImGuiOnceUponAFrame)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiOnceUponAFrame");
}

RING_FUNC(ring_imgui_new_managed_imguionceuponaframe)
{
	ImGuiOnceUponAFrame *pMyPointer ;
	pMyPointer = (ImGuiOnceUponAFrame *) RING_API_MALLOC(sizeof(ImGuiOnceUponAFrame)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiOnceUponAFrame",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguionceuponaframe)
{
	ImGuiOnceUponAFrame *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiOnceUponAFrame*) RING_API_GETCPOINTER(1,"ImGuiOnceUponAFrame");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguitextfilter)
{
	ImGuiTextFilter *pMyPointer ;
	pMyPointer = (ImGuiTextFilter *) RING_API_MALLOC(sizeof(ImGuiTextFilter)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiTextFilter");
}

RING_FUNC(ring_imgui_new_managed_imguitextfilter)
{
	ImGuiTextFilter *pMyPointer ;
	pMyPointer = (ImGuiTextFilter *) RING_API_MALLOC(sizeof(ImGuiTextFilter)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiTextFilter",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguitextfilter)
{
	ImGuiTextFilter *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTextFilter*) RING_API_GETCPOINTER(1,"ImGuiTextFilter");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguitextbuffer)
{
	ImGuiTextBuffer *pMyPointer ;
	pMyPointer = (ImGuiTextBuffer *) RING_API_MALLOC(sizeof(ImGuiTextBuffer)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiTextBuffer");
}

RING_FUNC(ring_imgui_new_managed_imguitextbuffer)
{
	ImGuiTextBuffer *pMyPointer ;
	pMyPointer = (ImGuiTextBuffer *) RING_API_MALLOC(sizeof(ImGuiTextBuffer)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiTextBuffer",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguitextbuffer)
{
	ImGuiTextBuffer *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiTextBuffer*) RING_API_GETCPOINTER(1,"ImGuiTextBuffer");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguistorage)
{
	ImGuiStorage *pMyPointer ;
	pMyPointer = (ImGuiStorage *) RING_API_MALLOC(sizeof(ImGuiStorage)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiStorage");
}

RING_FUNC(ring_imgui_new_managed_imguistorage)
{
	ImGuiStorage *pMyPointer ;
	pMyPointer = (ImGuiStorage *) RING_API_MALLOC(sizeof(ImGuiStorage)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiStorage",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguistorage)
{
	ImGuiStorage *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiStorage*) RING_API_GETCPOINTER(1,"ImGuiStorage");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguilistclipper)
{
	ImGuiListClipper *pMyPointer ;
	pMyPointer = (ImGuiListClipper *) RING_API_MALLOC(sizeof(ImGuiListClipper)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiListClipper");
}

RING_FUNC(ring_imgui_new_managed_imguilistclipper)
{
	ImGuiListClipper *pMyPointer ;
	pMyPointer = (ImGuiListClipper *) RING_API_MALLOC(sizeof(ImGuiListClipper)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiListClipper",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguilistclipper)
{
	ImGuiListClipper *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiListClipper*) RING_API_GETCPOINTER(1,"ImGuiListClipper");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imcolor)
{
	ImColor *pMyPointer ;
	pMyPointer = (ImColor *) RING_API_MALLOC(sizeof(ImColor)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImColor");
}

RING_FUNC(ring_imgui_new_managed_imcolor)
{
	ImColor *pMyPointer ;
	pMyPointer = (ImColor *) RING_API_MALLOC(sizeof(ImColor)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImColor",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imcolor)
{
	ImColor *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImColor*) RING_API_GETCPOINTER(1,"ImColor");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imdrawcmd)
{
	ImDrawCmd *pMyPointer ;
	pMyPointer = (ImDrawCmd *) RING_API_MALLOC(sizeof(ImDrawCmd)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImDrawCmd");
}

RING_FUNC(ring_imgui_new_managed_imdrawcmd)
{
	ImDrawCmd *pMyPointer ;
	pMyPointer = (ImDrawCmd *) RING_API_MALLOC(sizeof(ImDrawCmd)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImDrawCmd",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imdrawcmd)
{
	ImDrawCmd *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImDrawCmd*) RING_API_GETCPOINTER(1,"ImDrawCmd");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imdrawvert)
{
	ImDrawVert *pMyPointer ;
	pMyPointer = (ImDrawVert *) RING_API_MALLOC(sizeof(ImDrawVert)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImDrawVert");
}

RING_FUNC(ring_imgui_new_managed_imdrawvert)
{
	ImDrawVert *pMyPointer ;
	pMyPointer = (ImDrawVert *) RING_API_MALLOC(sizeof(ImDrawVert)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImDrawVert",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imdrawvert)
{
	ImDrawVert *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImDrawVert*) RING_API_GETCPOINTER(1,"ImDrawVert");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imdrawcmdheader)
{
	ImDrawCmdHeader *pMyPointer ;
	pMyPointer = (ImDrawCmdHeader *) RING_API_MALLOC(sizeof(ImDrawCmdHeader)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImDrawCmdHeader");
}

RING_FUNC(ring_imgui_new_managed_imdrawcmdheader)
{
	ImDrawCmdHeader *pMyPointer ;
	pMyPointer = (ImDrawCmdHeader *) RING_API_MALLOC(sizeof(ImDrawCmdHeader)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImDrawCmdHeader",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imdrawcmdheader)
{
	ImDrawCmdHeader *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImDrawCmdHeader*) RING_API_GETCPOINTER(1,"ImDrawCmdHeader");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imdrawchannel)
{
	ImDrawChannel *pMyPointer ;
	pMyPointer = (ImDrawChannel *) RING_API_MALLOC(sizeof(ImDrawChannel)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImDrawChannel");
}

RING_FUNC(ring_imgui_new_managed_imdrawchannel)
{
	ImDrawChannel *pMyPointer ;
	pMyPointer = (ImDrawChannel *) RING_API_MALLOC(sizeof(ImDrawChannel)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImDrawChannel",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imdrawchannel)
{
	ImDrawChannel *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImDrawChannel*) RING_API_GETCPOINTER(1,"ImDrawChannel");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imdrawlistsplitter)
{
	ImDrawListSplitter *pMyPointer ;
	pMyPointer = (ImDrawListSplitter *) RING_API_MALLOC(sizeof(ImDrawListSplitter)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImDrawListSplitter");
}

RING_FUNC(ring_imgui_new_managed_imdrawlistsplitter)
{
	ImDrawListSplitter *pMyPointer ;
	pMyPointer = (ImDrawListSplitter *) RING_API_MALLOC(sizeof(ImDrawListSplitter)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImDrawListSplitter",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imdrawlistsplitter)
{
	ImDrawListSplitter *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImDrawListSplitter*) RING_API_GETCPOINTER(1,"ImDrawListSplitter");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imdrawlist)
{
	ImDrawList *pMyPointer ;
	pMyPointer = (ImDrawList *) RING_API_MALLOC(sizeof(ImDrawList)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImDrawList");
}

RING_FUNC(ring_imgui_new_managed_imdrawlist)
{
	ImDrawList *pMyPointer ;
	pMyPointer = (ImDrawList *) RING_API_MALLOC(sizeof(ImDrawList)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImDrawList",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imdrawlist)
{
	ImDrawList *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImDrawList*) RING_API_GETCPOINTER(1,"ImDrawList");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imdrawdata)
{
	ImDrawData *pMyPointer ;
	pMyPointer = (ImDrawData *) RING_API_MALLOC(sizeof(ImDrawData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImDrawData");
}

RING_FUNC(ring_imgui_new_managed_imdrawdata)
{
	ImDrawData *pMyPointer ;
	pMyPointer = (ImDrawData *) RING_API_MALLOC(sizeof(ImDrawData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImDrawData",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imdrawdata)
{
	ImDrawData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImDrawData*) RING_API_GETCPOINTER(1,"ImDrawData");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imfontconfig)
{
	ImFontConfig *pMyPointer ;
	pMyPointer = (ImFontConfig *) RING_API_MALLOC(sizeof(ImFontConfig)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImFontConfig");
}

RING_FUNC(ring_imgui_new_managed_imfontconfig)
{
	ImFontConfig *pMyPointer ;
	pMyPointer = (ImFontConfig *) RING_API_MALLOC(sizeof(ImFontConfig)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImFontConfig",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imfontconfig)
{
	ImFontConfig *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImFontConfig*) RING_API_GETCPOINTER(1,"ImFontConfig");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imfontglyph)
{
	ImFontGlyph *pMyPointer ;
	pMyPointer = (ImFontGlyph *) RING_API_MALLOC(sizeof(ImFontGlyph)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImFontGlyph");
}

RING_FUNC(ring_imgui_new_managed_imfontglyph)
{
	ImFontGlyph *pMyPointer ;
	pMyPointer = (ImFontGlyph *) RING_API_MALLOC(sizeof(ImFontGlyph)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImFontGlyph",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imfontglyph)
{
	ImFontGlyph *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImFontGlyph*) RING_API_GETCPOINTER(1,"ImFontGlyph");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imfontglyphrangesbuilder)
{
	ImFontGlyphRangesBuilder *pMyPointer ;
	pMyPointer = (ImFontGlyphRangesBuilder *) RING_API_MALLOC(sizeof(ImFontGlyphRangesBuilder)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImFontGlyphRangesBuilder");
}

RING_FUNC(ring_imgui_new_managed_imfontglyphrangesbuilder)
{
	ImFontGlyphRangesBuilder *pMyPointer ;
	pMyPointer = (ImFontGlyphRangesBuilder *) RING_API_MALLOC(sizeof(ImFontGlyphRangesBuilder)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImFontGlyphRangesBuilder",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imfontglyphrangesbuilder)
{
	ImFontGlyphRangesBuilder *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImFontGlyphRangesBuilder*) RING_API_GETCPOINTER(1,"ImFontGlyphRangesBuilder");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imfontatlascustomrect)
{
	ImFontAtlasCustomRect *pMyPointer ;
	pMyPointer = (ImFontAtlasCustomRect *) RING_API_MALLOC(sizeof(ImFontAtlasCustomRect)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImFontAtlasCustomRect");
}

RING_FUNC(ring_imgui_new_managed_imfontatlascustomrect)
{
	ImFontAtlasCustomRect *pMyPointer ;
	pMyPointer = (ImFontAtlasCustomRect *) RING_API_MALLOC(sizeof(ImFontAtlasCustomRect)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImFontAtlasCustomRect",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imfontatlascustomrect)
{
	ImFontAtlasCustomRect *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImFontAtlasCustomRect*) RING_API_GETCPOINTER(1,"ImFontAtlasCustomRect");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imfontatlas)
{
	ImFontAtlas *pMyPointer ;
	pMyPointer = (ImFontAtlas *) RING_API_MALLOC(sizeof(ImFontAtlas)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImFontAtlas");
}

RING_FUNC(ring_imgui_new_managed_imfontatlas)
{
	ImFontAtlas *pMyPointer ;
	pMyPointer = (ImFontAtlas *) RING_API_MALLOC(sizeof(ImFontAtlas)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImFontAtlas",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imfontatlas)
{
	ImFontAtlas *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImFontAtlas*) RING_API_GETCPOINTER(1,"ImFontAtlas");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imfont)
{
	ImFont *pMyPointer ;
	pMyPointer = (ImFont *) RING_API_MALLOC(sizeof(ImFont)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImFont");
}

RING_FUNC(ring_imgui_new_managed_imfont)
{
	ImFont *pMyPointer ;
	pMyPointer = (ImFont *) RING_API_MALLOC(sizeof(ImFont)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImFont",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imfont)
{
	ImFont *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImFont*) RING_API_GETCPOINTER(1,"ImFont");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguiviewport)
{
	ImGuiViewport *pMyPointer ;
	pMyPointer = (ImGuiViewport *) RING_API_MALLOC(sizeof(ImGuiViewport)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiViewport");
}

RING_FUNC(ring_imgui_new_managed_imguiviewport)
{
	ImGuiViewport *pMyPointer ;
	pMyPointer = (ImGuiViewport *) RING_API_MALLOC(sizeof(ImGuiViewport)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiViewport",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguiviewport)
{
	ImGuiViewport *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiViewport*) RING_API_GETCPOINTER(1,"ImGuiViewport");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguiplatformio)
{
	ImGuiPlatformIO *pMyPointer ;
	pMyPointer = (ImGuiPlatformIO *) RING_API_MALLOC(sizeof(ImGuiPlatformIO)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiPlatformIO");
}

RING_FUNC(ring_imgui_new_managed_imguiplatformio)
{
	ImGuiPlatformIO *pMyPointer ;
	pMyPointer = (ImGuiPlatformIO *) RING_API_MALLOC(sizeof(ImGuiPlatformIO)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiPlatformIO",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguiplatformio)
{
	ImGuiPlatformIO *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiPlatformIO*) RING_API_GETCPOINTER(1,"ImGuiPlatformIO");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguiplatformmonitor)
{
	ImGuiPlatformMonitor *pMyPointer ;
	pMyPointer = (ImGuiPlatformMonitor *) RING_API_MALLOC(sizeof(ImGuiPlatformMonitor)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiPlatformMonitor");
}

RING_FUNC(ring_imgui_new_managed_imguiplatformmonitor)
{
	ImGuiPlatformMonitor *pMyPointer ;
	pMyPointer = (ImGuiPlatformMonitor *) RING_API_MALLOC(sizeof(ImGuiPlatformMonitor)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiPlatformMonitor",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguiplatformmonitor)
{
	ImGuiPlatformMonitor *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiPlatformMonitor*) RING_API_GETCPOINTER(1,"ImGuiPlatformMonitor");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}

RING_FUNC(ring_imgui_new_imguiplatformimedata)
{
	ImGuiPlatformImeData *pMyPointer ;
	pMyPointer = (ImGuiPlatformImeData *) RING_API_MALLOC(sizeof(ImGuiPlatformImeData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETCPOINTER(pMyPointer,"ImGuiPlatformImeData");
}

RING_FUNC(ring_imgui_new_managed_imguiplatformimedata)
{
	ImGuiPlatformImeData *pMyPointer ;
	pMyPointer = (ImGuiPlatformImeData *) RING_API_MALLOC(sizeof(ImGuiPlatformImeData)) ;
	if (pMyPointer == NULL) 
	{
		RING_API_ERROR(RING_OOM);
		return ;
	}
	RING_API_RETMANAGEDCPOINTER(pMyPointer,"ImGuiPlatformImeData",RING_API_FREEFUNC);
}

RING_FUNC(ring_imgui_destroy_imguiplatformimedata)
{
	ImGuiPlatformImeData *pMyPointer ;
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA) ;
		return ;
	}
	if ( ! RING_API_ISCPOINTER(1) ) { 
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	pMyPointer = (ImGuiPlatformImeData*) RING_API_GETCPOINTER(1,"ImGuiPlatformImeData");
	if (pMyPointer != NULL) {
		RING_API_FREE(pMyPointer) ;
		RING_API_SETNULLPOINTER(1);
	}
}


RING_FUNC(ring_Imgui_GetVersion)
{
	if (RING_API_PARACOUNT != 0)
	{
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return;
	}
	char *cOut = (char *) ImGui::GetVersion();
	if (cOut == NULL)
	{
		RING_API_RETSTRING("");
	}
	else
	{
		RING_API_RETSTRING(cOut);
	}
}


RING_FUNC(ring_imgui_GetIO)
{
	if (RING_API_PARACOUNT != 0)
	{
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return;
	}

	ImGuiIO *pValue;
	pValue = &GetIO();
	RING_API_RETCPOINTER(& GetIO(), "ImGuiIO");
}

RING_FUNC(ring_imgui_GetStyle)
{
	if (RING_API_PARACOUNT != 0)
	{
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return;
	}

	ImGuiStyle *pValue;
	pValue = & GetStyle();
	RING_API_RETCPOINTER(& GetStyle(), "ImGuiStyle");
}

RING_FUNC(ring_GetStyleColorVec4)
{
	if (RING_API_PARACOUNT != 1)
	{
		RING_API_ERROR(RING_API_MISS1PARA);
		return;
	}
	if (!RING_API_ISNUMBER(1))
	{
		RING_API_ERROR(RING_API_BADPARATYPE);
		return;
	}
	RING_API_RETCPOINTER( & GetStyleColorVec4((ImGuiCol)RING_API_GETNUMBER(1)), "ImVec4");
}



RING_FUNC(ring_ImFontAtlas_GetTexDataAsRGBA32)
{
	if ( RING_API_PARACOUNT != 5 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}

	unsigned char *text_pixels = NULL;

	ImFontAtlas *self = (ImFontAtlas *)RING_API_GETCPOINTER(1, "ImFontAtlas");

	self->GetTexDataAsRGBA32((unsigned char **)RING_API_GETCPOINTER2POINTER(2, "unsigned char"), RING_API_GETINTPOINTER(3), RING_API_GETINTPOINTER(4), RING_API_GETINTPOINTER(5));

	RING_API_ACCEPTINTVALUE(3);
	RING_API_ACCEPTINTVALUE(4);
	RING_API_ACCEPTINTVALUE(5);


}


RING_FUNC(ring_imgui_Begin)
{

	bool *p1;


	if (RING_API_PARACOUNT != 3)
	{
		RING_API_ERROR(RING_API_MISS3PARA);
		return;
	}
	RING_API_IGNORECPOINTERTYPE;
	if (!RING_API_ISSTRING(1))
	{
		RING_API_ERROR(RING_API_BADPARATYPE);
		return;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if (!RING_API_ISNUMBER(3))
	{
		RING_API_ERROR(RING_API_BADPARATYPE);
		return;
	}

	p1 = (bool *)RING_API_GETINTPOINTER(2);

	RING_API_RETNUMBER(Begin(RING_API_GETSTRING(1), p1 , (ImGuiWindowFlags)RING_API_GETNUMBER(3)));

	RING_API_ACCEPTINTVALUE(2) ;
}


RING_FUNC(ring_imgui_End)
{
	if (RING_API_PARACOUNT != 0)
	{
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return;
	}
	RING_API_IGNORECPOINTERTYPE;
	End();
}

RING_FUNC(ring_EndMenu)
{
	if (RING_API_PARACOUNT != 0)
	{
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return;
	}
	ImGui::EndMenu();
}




RING_FUNC(ring_SliderInt)
{
	if ( RING_API_PARACOUNT != 6 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(SliderInt(RING_API_GETSTRING(1),RING_API_GETINTPOINTER(2), (int ) RING_API_GETNUMBER(3), (int ) RING_API_GETNUMBER(4),RING_API_GETSTRING(5), (ImGuiSliderFlags ) RING_API_GETNUMBER(6)));
	RING_API_ACCEPTINTVALUE(2) ;
}




bool SliderDouble(const char *label, double *v, double v_min, double v_max, const char *format, ImGuiSliderFlags flags)
{

	return SliderScalar(label, ImGuiDataType_Double, v, &v_min, &v_max, format, flags);
}

RING_FUNC(ring_SliderDouble)
{
	if ( RING_API_PARACOUNT != 6 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
/*
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}

*/	
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}

	double * d_ptr = (double *)RING_API_GETDOUBLEPOINTER(2);



	RING_API_RETNUMBER(SliderDouble(RING_API_GETSTRING(1), d_ptr  , (float ) RING_API_GETNUMBER(3), (float ) RING_API_GETNUMBER(4),RING_API_GETSTRING(5), (ImGuiSliderFlags ) RING_API_GETNUMBER(6)));

	// RING_API_ACCEPTINTVALUE(2);  //dont use this line with double ist will make value null
}



RING_FUNC(ring_CreateContext)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(CreateContext((ImFontAtlas *) RING_API_GETCPOINTER(1,"ImFontAtlas")),"ImGuiContext");
}


RING_FUNC(ring_DestroyContext)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	DestroyContext((ImGuiContext *) RING_API_GETCPOINTER(1,"ImGuiContext"));
}


RING_FUNC(ring_GetCurrentContext)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetCurrentContext(),"ImGuiContext");
}


RING_FUNC(ring_SetCurrentContext)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetCurrentContext((ImGuiContext *) RING_API_GETCPOINTER(1,"ImGuiContext"));
}


RING_FUNC(ring_NewFrame)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	NewFrame();
}


RING_FUNC(ring_EndFrame)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndFrame();
}


RING_FUNC(ring_Render)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	Render();
}


RING_FUNC(ring_GetDrawData)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetDrawData(),"ImDrawData");
}


RING_FUNC(ring_ShowDemoWindow)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ShowDemoWindow((bool *) RING_API_GETCPOINTER(1,"bool"));
}


RING_FUNC(ring_ShowMetricsWindow)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ShowMetricsWindow((bool *) RING_API_GETCPOINTER(1,"bool"));
}


RING_FUNC(ring_ShowDebugLogWindow)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ShowDebugLogWindow((bool *) RING_API_GETCPOINTER(1,"bool"));
}


RING_FUNC(ring_ShowStackToolWindow)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ShowStackToolWindow((bool *) RING_API_GETCPOINTER(1,"bool"));
}


RING_FUNC(ring_ShowAboutWindow)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ShowAboutWindow((bool *) RING_API_GETCPOINTER(1,"bool"));
}


RING_FUNC(ring_ShowStyleEditor)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ShowStyleEditor((ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle"));
}


RING_FUNC(ring_ShowStyleSelector)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ShowStyleSelector(RING_API_GETSTRING(1)));
}


RING_FUNC(ring_ShowFontSelector)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ShowFontSelector(RING_API_GETSTRING(1));
}


RING_FUNC(ring_ShowUserGuide)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	ShowUserGuide();
}


RING_FUNC(ring_StyleColorsDark)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	StyleColorsDark((ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle"));
}


RING_FUNC(ring_StyleColorsLight)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	StyleColorsLight((ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle"));
}


RING_FUNC(ring_StyleColorsClassic)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	StyleColorsClassic((ImGuiStyle *) RING_API_GETCPOINTER(1,"ImGuiStyle"));
}


RING_FUNC(ring_BeginChild)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginChild(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (bool ) RING_API_GETNUMBER(3), (ImGuiWindowFlags ) RING_API_GETNUMBER(4)));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_BeginChild_2)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginChild( (ImGuiID ) RING_API_GETNUMBER(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (bool ) RING_API_GETNUMBER(3), (ImGuiWindowFlags ) RING_API_GETNUMBER(4)));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_EndChild)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndChild();
}


RING_FUNC(ring_IsWindowAppearing)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsWindowAppearing());
}


RING_FUNC(ring_IsWindowCollapsed)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsWindowCollapsed());
}


RING_FUNC(ring_IsWindowFocused)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsWindowFocused( (ImGuiFocusedFlags ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_IsWindowHovered)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsWindowHovered( (ImGuiHoveredFlags ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetWindowDrawList)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetWindowDrawList(),"ImDrawList");
}


RING_FUNC(ring_GetWindowDpiScale)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetWindowDpiScale());
}


RING_FUNC(ring_GetWindowPos)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetWindowPos();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetWindowSize)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetWindowSize();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetWindowWidth)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetWindowWidth());
}


RING_FUNC(ring_GetWindowHeight)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetWindowHeight());
}


RING_FUNC(ring_GetWindowViewport)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetWindowViewport(),"ImGuiViewport");
}


RING_FUNC(ring_SetNextWindowPos)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowPos(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"), (ImGuiCond ) RING_API_GETNUMBER(2),* (const ImVec2  *) RING_API_GETCPOINTER(3,"const ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(3))
		RING_API_FREE(RING_API_GETCPOINTER(3,"ImVec2"));
}


RING_FUNC(ring_SetNextWindowSize)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowSize(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"), (ImGuiCond ) RING_API_GETNUMBER(2));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_SetNextWindowSizeConstraints)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowSizeConstraints(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"),* (ImGuiSizeCallback  *) RING_API_GETCPOINTER(3,"ImGuiSizeCallback"),(void *) RING_API_GETCPOINTER(4,"void"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(3))
		RING_API_FREE(RING_API_GETCPOINTER(3,"ImGuiSizeCallback"));
}


RING_FUNC(ring_SetNextWindowContentSize)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	SetNextWindowContentSize(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_SetNextWindowCollapsed)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowCollapsed( (bool ) RING_API_GETNUMBER(1), (ImGuiCond ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_SetNextWindowFocus)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	SetNextWindowFocus();
}


RING_FUNC(ring_SetNextWindowBgAlpha)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowBgAlpha( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetNextWindowViewport)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowViewport( (ImGuiID ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetWindowPos)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowPos(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"), (ImGuiCond ) RING_API_GETNUMBER(2));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_SetWindowSize)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowSize(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"), (ImGuiCond ) RING_API_GETNUMBER(2));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_SetWindowCollapsed)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowCollapsed( (bool ) RING_API_GETNUMBER(1), (ImGuiCond ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_SetWindowFocus)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	SetWindowFocus();
}


RING_FUNC(ring_SetWindowFontScale)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowFontScale( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetWindowPos_2)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowPos(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (ImGuiCond ) RING_API_GETNUMBER(3));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_SetWindowSize_3)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowSize(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (ImGuiCond ) RING_API_GETNUMBER(3));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_SetWindowCollapsed_3)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowCollapsed(RING_API_GETSTRING(1), (bool ) RING_API_GETNUMBER(2), (ImGuiCond ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_SetWindowFocus_1)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetWindowFocus(RING_API_GETSTRING(1));
}


RING_FUNC(ring_GetContentRegionAvail)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetContentRegionAvail();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetContentRegionMax)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetContentRegionMax();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetWindowContentRegionMin)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetWindowContentRegionMin();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetWindowContentRegionMax)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetWindowContentRegionMax();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetScrollX)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetScrollX());
}


RING_FUNC(ring_GetScrollY)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetScrollY());
}


RING_FUNC(ring_SetScrollX)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetScrollX( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetScrollY)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetScrollY( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_GetScrollMaxX)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetScrollMaxX());
}


RING_FUNC(ring_GetScrollMaxY)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetScrollMaxY());
}


RING_FUNC(ring_SetScrollHereX)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetScrollHereX( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetScrollHereY)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetScrollHereY( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetScrollFromPosX)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetScrollFromPosX( (float ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_SetScrollFromPosY)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetScrollFromPosY( (float ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_PushFont)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushFont((ImFont *) RING_API_GETCPOINTER(1,"ImFont"));
}


RING_FUNC(ring_PopFont)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	PopFont();
}


RING_FUNC(ring_PushStyleColor)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushStyleColor( (ImGuiCol ) RING_API_GETNUMBER(1), (ImU32 ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_PushStyleColor_2)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushStyleColor( (ImGuiCol ) RING_API_GETNUMBER(1),* (const ImVec4  *) RING_API_GETCPOINTER(2,"const ImVec4"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec4"));
}


RING_FUNC(ring_PopStyleColor)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PopStyleColor( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_PushStyleVar)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushStyleVar( (ImGuiStyleVar ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_PushStyleVar_2)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushStyleVar( (ImGuiStyleVar ) RING_API_GETNUMBER(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_PopStyleVar)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PopStyleVar( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_PushAllowKeyboardFocus)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushAllowKeyboardFocus( (bool ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_PopAllowKeyboardFocus)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	PopAllowKeyboardFocus();
}


RING_FUNC(ring_PushButtonRepeat)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushButtonRepeat( (bool ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_PopButtonRepeat)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	PopButtonRepeat();
}


RING_FUNC(ring_PushItemWidth)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushItemWidth( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_PopItemWidth)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	PopItemWidth();
}


RING_FUNC(ring_SetNextItemWidth)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextItemWidth( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_CalcItemWidth)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(CalcItemWidth());
}


RING_FUNC(ring_PushTextWrapPos)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushTextWrapPos( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_PopTextWrapPos)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	PopTextWrapPos();
}


RING_FUNC(ring_GetFont)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetFont(),"ImFont");
}


RING_FUNC(ring_GetFontSize)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetFontSize());
}


RING_FUNC(ring_GetFontTexUvWhitePixel)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetFontTexUvWhitePixel();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetColorU32)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetColorU32( (ImGuiCol ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_GetColorU32_2)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetColorU32(* (const ImVec4  *) RING_API_GETCPOINTER(1,"const ImVec4")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec4"));
}


RING_FUNC(ring_GetColorU32_3)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetColorU32( (ImU32 ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_Separator)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	Separator();
}


RING_FUNC(ring_SameLine)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SameLine( (float ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_NewLine)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	NewLine();
}


RING_FUNC(ring_Spacing)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	Spacing();
}


RING_FUNC(ring_Dummy)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	Dummy(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_Indent)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Indent( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_Unindent)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Unindent( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_BeginGroup)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	BeginGroup();
}


RING_FUNC(ring_EndGroup)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndGroup();
}


RING_FUNC(ring_GetCursorPos)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetCursorPos();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetCursorPosX)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetCursorPosX());
}


RING_FUNC(ring_GetCursorPosY)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetCursorPosY());
}


RING_FUNC(ring_SetCursorPos)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	SetCursorPos(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_SetCursorPosX)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetCursorPosX( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_SetCursorPosY)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetCursorPosY( (float ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_GetCursorStartPos)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetCursorStartPos();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetCursorScreenPos)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetCursorScreenPos();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_SetCursorScreenPos)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	SetCursorScreenPos(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_AlignTextToFramePadding)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	AlignTextToFramePadding();
}


RING_FUNC(ring_GetTextLineHeight)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetTextLineHeight());
}


RING_FUNC(ring_GetTextLineHeightWithSpacing)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetTextLineHeightWithSpacing());
}


RING_FUNC(ring_GetFrameHeight)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetFrameHeight());
}


RING_FUNC(ring_GetFrameHeightWithSpacing)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetFrameHeightWithSpacing());
}


RING_FUNC(ring_PushID)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushID(RING_API_GETSTRING(1));
}


RING_FUNC(ring_PushID_2)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushID(RING_API_GETSTRING(1),RING_API_GETSTRING(2));
}


RING_FUNC(ring_PushID_3)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushID((void *) RING_API_GETCPOINTER(1,"void"));
}


RING_FUNC(ring_PushID_4)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushID( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_PopID)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	PopID();
}


RING_FUNC(ring_GetID)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetID(RING_API_GETSTRING(1)));
}


RING_FUNC(ring_GetID_2)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetID(RING_API_GETSTRING(1),RING_API_GETSTRING(2)));
}


RING_FUNC(ring_GetID_3)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetID((void *) RING_API_GETCPOINTER(1,"void")));
}


RING_FUNC(ring_TextUnformatted)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TextUnformatted(RING_API_GETSTRING(1),RING_API_GETSTRING(2));
}


RING_FUNC(ring_Button)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(Button(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2")));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_SmallButton)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(SmallButton(RING_API_GETSTRING(1)));
}


RING_FUNC(ring_InvisibleButton)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InvisibleButton(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (ImGuiButtonFlags ) RING_API_GETNUMBER(3)));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_ArrowButton)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ArrowButton(RING_API_GETSTRING(1), (ImGuiDir ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_Image)
{
	if ( RING_API_PARACOUNT != 6 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	Image(* (ImTextureID  *) RING_API_GETCPOINTER(1,"ImTextureID"),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(3,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(4,"const ImVec2"),* (const ImVec4  *) RING_API_GETCPOINTER(5,"const ImVec4"),* (const ImVec4  *) RING_API_GETCPOINTER(6,"const ImVec4"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImTextureID"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(3))
		RING_API_FREE(RING_API_GETCPOINTER(3,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		RING_API_FREE(RING_API_GETCPOINTER(4,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(5))
		RING_API_FREE(RING_API_GETCPOINTER(5,"ImVec4"));
	if (RING_API_ISCPOINTERNOTASSIGNED(6))
		RING_API_FREE(RING_API_GETCPOINTER(6,"ImVec4"));
}


RING_FUNC(ring_ImageButton)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImageButton(* (ImTextureID  *) RING_API_GETCPOINTER(1,"ImTextureID"),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(3,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(4,"const ImVec2"), (int ) RING_API_GETNUMBER(5),* (const ImVec4  *) RING_API_GETCPOINTER(6,"const ImVec4"),* (const ImVec4  *) RING_API_GETCPOINTER(7,"const ImVec4")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImTextureID"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(3))
		RING_API_FREE(RING_API_GETCPOINTER(3,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		RING_API_FREE(RING_API_GETCPOINTER(4,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(6))
		RING_API_FREE(RING_API_GETCPOINTER(6,"ImVec4"));
	if (RING_API_ISCPOINTERNOTASSIGNED(7))
		RING_API_FREE(RING_API_GETCPOINTER(7,"ImVec4"));
}


RING_FUNC(ring_Checkbox)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(Checkbox(RING_API_GETSTRING(1),(bool *) RING_API_GETCPOINTER(2,"bool")));
}


RING_FUNC(ring_CheckboxFlags)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(CheckboxFlags(RING_API_GETSTRING(1),RING_API_GETINTPOINTER(2), (int ) RING_API_GETNUMBER(3)));
	RING_API_ACCEPTINTVALUE(2) ;
}


RING_FUNC(ring_CheckboxFlags_2)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(CheckboxFlags(RING_API_GETSTRING(1),(unsigned int *) RING_API_GETCPOINTER(2,"unsigned int"),* (unsigned int  *) RING_API_GETCPOINTER(3,"unsigned int")));
	if (RING_API_ISCPOINTERNOTASSIGNED(3))
		RING_API_FREE(RING_API_GETCPOINTER(3,"unsigned int"));
}


RING_FUNC(ring_RadioButton)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(RadioButton(RING_API_GETSTRING(1), (bool ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_RadioButton_2)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(RadioButton(RING_API_GETSTRING(1),RING_API_GETINTPOINTER(2), (int ) RING_API_GETNUMBER(3)));
	RING_API_ACCEPTINTVALUE(2) ;
}


RING_FUNC(ring_ProgressBar)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ProgressBar( (float ) RING_API_GETNUMBER(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"),RING_API_GETSTRING(3));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_Bullet)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	Bullet();
}


RING_FUNC(ring_BeginCombo)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginCombo(RING_API_GETSTRING(1),RING_API_GETSTRING(2), (ImGuiComboFlags ) RING_API_GETNUMBER(3)));
}


RING_FUNC(ring_EndCombo)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndCombo();
}


RING_FUNC(ring_Combo)
{
	if ( RING_API_PARACOUNT != 5 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(Combo(RING_API_GETSTRING(1),RING_API_GETINTPOINTER(2),(char **) RING_API_GETCPOINTER2POINTER(3,"char"), (int ) RING_API_GETNUMBER(4), (int ) RING_API_GETNUMBER(5)));
	RING_API_ACCEPTINTVALUE(2) ;
}


RING_FUNC(ring_SliderScalar)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(SliderScalar(RING_API_GETSTRING(1), (ImGuiDataType ) RING_API_GETNUMBER(2),(void *) RING_API_GETCPOINTER(3,"void"),(void *) RING_API_GETCPOINTER(4,"void"),(void *) RING_API_GETCPOINTER(5,"void"),RING_API_GETSTRING(6), (ImGuiSliderFlags ) RING_API_GETNUMBER(7)));
}


RING_FUNC(ring_SliderScalarN)
{
	if ( RING_API_PARACOUNT != 8 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(8) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(SliderScalarN(RING_API_GETSTRING(1), (ImGuiDataType ) RING_API_GETNUMBER(2),(void *) RING_API_GETCPOINTER(3,"void"), (int ) RING_API_GETNUMBER(4),(void *) RING_API_GETCPOINTER(5,"void"),(void *) RING_API_GETCPOINTER(6,"void"),RING_API_GETSTRING(7), (ImGuiSliderFlags ) RING_API_GETNUMBER(8)));
}


RING_FUNC(ring_VSliderInt)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(VSliderInt(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"),RING_API_GETINTPOINTER(3), (int ) RING_API_GETNUMBER(4), (int ) RING_API_GETNUMBER(5),RING_API_GETSTRING(6), (ImGuiSliderFlags ) RING_API_GETNUMBER(7)));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
	RING_API_ACCEPTINTVALUE(3) ;
}


RING_FUNC(ring_VSliderScalar)
{
	if ( RING_API_PARACOUNT != 8 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(8) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(VSliderScalar(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (ImGuiDataType ) RING_API_GETNUMBER(3),(void *) RING_API_GETCPOINTER(4,"void"),(void *) RING_API_GETCPOINTER(5,"void"),(void *) RING_API_GETCPOINTER(6,"void"),RING_API_GETSTRING(7), (ImGuiSliderFlags ) RING_API_GETNUMBER(8)));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_InputText)
{
	if ( RING_API_PARACOUNT != 6 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputText(RING_API_GETSTRING(1),RING_API_GETSTRING(2), (size_t ) RING_API_GETNUMBER(3), (ImGuiInputTextFlags ) RING_API_GETNUMBER(4),* (ImGuiInputTextCallback  *) RING_API_GETCPOINTER(5,"ImGuiInputTextCallback"),(void *) RING_API_GETCPOINTER(6,"void")));
	if (RING_API_ISCPOINTERNOTASSIGNED(5))
		RING_API_FREE(RING_API_GETCPOINTER(5,"ImGuiInputTextCallback"));
}


RING_FUNC(ring_InputTextMultiline)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputTextMultiline(RING_API_GETSTRING(1),RING_API_GETSTRING(2), (size_t ) RING_API_GETNUMBER(3),* (const ImVec2  *) RING_API_GETCPOINTER(4,"const ImVec2"), (ImGuiInputTextFlags ) RING_API_GETNUMBER(5),* (ImGuiInputTextCallback  *) RING_API_GETCPOINTER(6,"ImGuiInputTextCallback"),(void *) RING_API_GETCPOINTER(7,"void")));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		RING_API_FREE(RING_API_GETCPOINTER(4,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(6))
		RING_API_FREE(RING_API_GETCPOINTER(6,"ImGuiInputTextCallback"));
}


RING_FUNC(ring_InputTextWithHint)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputTextWithHint(RING_API_GETSTRING(1),RING_API_GETSTRING(2),RING_API_GETSTRING(3), (size_t ) RING_API_GETNUMBER(4), (ImGuiInputTextFlags ) RING_API_GETNUMBER(5),* (ImGuiInputTextCallback  *) RING_API_GETCPOINTER(6,"ImGuiInputTextCallback"),(void *) RING_API_GETCPOINTER(7,"void")));
	if (RING_API_ISCPOINTERNOTASSIGNED(6))
		RING_API_FREE(RING_API_GETCPOINTER(6,"ImGuiInputTextCallback"));
}


RING_FUNC(ring_InputFloat)
{
	if ( RING_API_PARACOUNT != 6 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputFloat(RING_API_GETSTRING(1),(float *) RING_API_GETCPOINTER(2,"float"), (float ) RING_API_GETNUMBER(3), (float ) RING_API_GETNUMBER(4),RING_API_GETSTRING(5), (ImGuiInputTextFlags ) RING_API_GETNUMBER(6)));
}


RING_FUNC(ring_InputInt)
{
	if ( RING_API_PARACOUNT != 5 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputInt(RING_API_GETSTRING(1),RING_API_GETINTPOINTER(2), (int ) RING_API_GETNUMBER(3), (int ) RING_API_GETNUMBER(4), (ImGuiInputTextFlags ) RING_API_GETNUMBER(5)));
	RING_API_ACCEPTINTVALUE(2) ;
}


RING_FUNC(ring_InputDouble)
{
	if ( RING_API_PARACOUNT != 6 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputDouble(RING_API_GETSTRING(1),(double *)RING_API_GETDOUBLEPOINTER(2), (double ) RING_API_GETNUMBER(3), (double ) RING_API_GETNUMBER(4),RING_API_GETSTRING(5), (ImGuiInputTextFlags ) RING_API_GETNUMBER(6)));
}


RING_FUNC(ring_InputScalar)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputScalar(RING_API_GETSTRING(1), (ImGuiDataType ) RING_API_GETNUMBER(2),(void *) RING_API_GETCPOINTER(3,"void"),(void *) RING_API_GETCPOINTER(4,"void"),(void *) RING_API_GETCPOINTER(5,"void"),RING_API_GETSTRING(6), (ImGuiInputTextFlags ) RING_API_GETNUMBER(7)));
}


RING_FUNC(ring_InputScalarN)
{
	if ( RING_API_PARACOUNT != 8 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(8) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(InputScalarN(RING_API_GETSTRING(1), (ImGuiDataType ) RING_API_GETNUMBER(2),(void *) RING_API_GETCPOINTER(3,"void"), (int ) RING_API_GETNUMBER(4),(void *) RING_API_GETCPOINTER(5,"void"),(void *) RING_API_GETCPOINTER(6,"void"),RING_API_GETSTRING(7), (ImGuiInputTextFlags ) RING_API_GETNUMBER(8)));
}


RING_FUNC(ring_ColorButton)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ColorButton(RING_API_GETSTRING(1),* (const ImVec4  *) RING_API_GETCPOINTER(2,"const ImVec4"), (ImGuiColorEditFlags ) RING_API_GETNUMBER(3),* (const ImVec2  *) RING_API_GETCPOINTER(4,"const ImVec2")));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec4"));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		RING_API_FREE(RING_API_GETCPOINTER(4,"ImVec2"));
}


RING_FUNC(ring_SetColorEditOptions)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetColorEditOptions( (ImGuiColorEditFlags ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_TreePush)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TreePush(RING_API_GETSTRING(1));
}


RING_FUNC(ring_TreePush_2)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TreePush((void *) RING_API_GETCPOINTER(1,"void"));
}


RING_FUNC(ring_TreePop)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TreePop();
}


RING_FUNC(ring_GetTreeNodeToLabelSpacing)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetTreeNodeToLabelSpacing());
}


RING_FUNC(ring_CollapsingHeader)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(CollapsingHeader(RING_API_GETSTRING(1), (ImGuiTreeNodeFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_CollapsingHeader_2)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(CollapsingHeader(RING_API_GETSTRING(1),(bool *) RING_API_GETCPOINTER(2,"bool"), (ImGuiTreeNodeFlags ) RING_API_GETNUMBER(3)));
}


RING_FUNC(ring_SetNextItemOpen)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextItemOpen( (bool ) RING_API_GETNUMBER(1), (ImGuiCond ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_Selectable)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(Selectable(RING_API_GETSTRING(1), (bool ) RING_API_GETNUMBER(2), (ImGuiSelectableFlags ) RING_API_GETNUMBER(3),* (const ImVec2  *) RING_API_GETCPOINTER(4,"const ImVec2")));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		RING_API_FREE(RING_API_GETCPOINTER(4,"ImVec2"));
}


RING_FUNC(ring_Selectable_2)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(Selectable(RING_API_GETSTRING(1),(bool *) RING_API_GETCPOINTER(2,"bool"), (ImGuiSelectableFlags ) RING_API_GETNUMBER(3),* (const ImVec2  *) RING_API_GETCPOINTER(4,"const ImVec2")));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		RING_API_FREE(RING_API_GETCPOINTER(4,"ImVec2"));
}


RING_FUNC(ring_BeginListBox)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginListBox(RING_API_GETSTRING(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2")));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_EndListBox)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndListBox();
}


RING_FUNC(ring_Value)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Value(RING_API_GETSTRING(1), (bool ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_Value_2)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Value(RING_API_GETSTRING(1), (int ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_Value_3)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Value(RING_API_GETSTRING(1),* (unsigned int  *) RING_API_GETCPOINTER(2,"unsigned int"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"unsigned int"));
}


RING_FUNC(ring_Value_4)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Value(RING_API_GETSTRING(1), (float ) RING_API_GETNUMBER(2),RING_API_GETSTRING(3));
}


RING_FUNC(ring_BeginMenuBar)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(BeginMenuBar());
}


RING_FUNC(ring_EndMenuBar)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndMenuBar();
}


RING_FUNC(ring_BeginMainMenuBar)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(BeginMainMenuBar());
}


RING_FUNC(ring_EndMainMenuBar)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndMainMenuBar();
}


RING_FUNC(ring_BeginMenu)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginMenu(RING_API_GETSTRING(1), (bool ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_MenuItem)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(MenuItem(RING_API_GETSTRING(1),RING_API_GETSTRING(2), (bool ) RING_API_GETNUMBER(3), (bool ) RING_API_GETNUMBER(4)));
}


RING_FUNC(ring_MenuItem_2)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(MenuItem(RING_API_GETSTRING(1),RING_API_GETSTRING(2),(bool *) RING_API_GETCPOINTER(3,"bool"), (bool ) RING_API_GETNUMBER(4)));
}


RING_FUNC(ring_BeginTooltip)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	BeginTooltip();
}


RING_FUNC(ring_EndTooltip)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndTooltip();
}


RING_FUNC(ring_BeginPopup)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginPopup(RING_API_GETSTRING(1), (ImGuiWindowFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_BeginPopupModal)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginPopupModal(RING_API_GETSTRING(1),(bool *) RING_API_GETCPOINTER(2,"bool"), (ImGuiWindowFlags ) RING_API_GETNUMBER(3)));
}


RING_FUNC(ring_EndPopup)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndPopup();
}


RING_FUNC(ring_OpenPopup)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	OpenPopup(RING_API_GETSTRING(1), (ImGuiPopupFlags ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_OpenPopup_2)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	OpenPopup( (ImGuiID ) RING_API_GETNUMBER(1), (ImGuiPopupFlags ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_OpenPopupOnItemClick)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	OpenPopupOnItemClick(RING_API_GETSTRING(1), (ImGuiPopupFlags ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_CloseCurrentPopup)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	CloseCurrentPopup();
}


RING_FUNC(ring_BeginPopupContextItem)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginPopupContextItem(RING_API_GETSTRING(1), (ImGuiPopupFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_BeginPopupContextWindow)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginPopupContextWindow(RING_API_GETSTRING(1), (ImGuiPopupFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_BeginPopupContextVoid)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginPopupContextVoid(RING_API_GETSTRING(1), (ImGuiPopupFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_IsPopupOpen)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsPopupOpen(RING_API_GETSTRING(1), (ImGuiPopupFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_BeginTable)
{
	if ( RING_API_PARACOUNT != 5 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginTable(RING_API_GETSTRING(1), (int ) RING_API_GETNUMBER(2), (ImGuiTableFlags ) RING_API_GETNUMBER(3),* (const ImVec2  *) RING_API_GETCPOINTER(4,"const ImVec2"), (float ) RING_API_GETNUMBER(5)));
	if (RING_API_ISCPOINTERNOTASSIGNED(4))
		RING_API_FREE(RING_API_GETCPOINTER(4,"ImVec2"));
}


RING_FUNC(ring_EndTable)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndTable();
}


RING_FUNC(ring_TableNextRow)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TableNextRow( (ImGuiTableRowFlags ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_TableNextColumn)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TableNextColumn());
}


RING_FUNC(ring_TableSetColumnIndex)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TableSetColumnIndex( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_TableSetupColumn)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TableSetupColumn(RING_API_GETSTRING(1), (ImGuiTableColumnFlags ) RING_API_GETNUMBER(2), (float ) RING_API_GETNUMBER(3), (ImGuiID ) RING_API_GETNUMBER(4));
}


RING_FUNC(ring_TableSetupScrollFreeze)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TableSetupScrollFreeze( (int ) RING_API_GETNUMBER(1), (int ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_TableHeadersRow)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	TableHeadersRow();
}


RING_FUNC(ring_TableHeader)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TableHeader(RING_API_GETSTRING(1));
}


RING_FUNC(ring_TableGetSortSpecs)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(TableGetSortSpecs(),"ImGuiTableSortSpecs");
}


RING_FUNC(ring_TableGetColumnCount)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TableGetColumnCount());
}


RING_FUNC(ring_TableGetColumnIndex)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TableGetColumnIndex());
}


RING_FUNC(ring_TableGetRowIndex)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(TableGetRowIndex());
}


RING_FUNC(ring_TableGetColumnName)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETSTRING(TableGetColumnName( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_TableGetColumnFlags)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TableGetColumnFlags( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_TableSetColumnEnabled)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TableSetColumnEnabled( (int ) RING_API_GETNUMBER(1), (bool ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_TableSetBgColor)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TableSetBgColor( (ImGuiTableBgTarget ) RING_API_GETNUMBER(1), (ImU32 ) RING_API_GETNUMBER(2), (int ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_Columns)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Columns( (int ) RING_API_GETNUMBER(1),RING_API_GETSTRING(2), (bool ) RING_API_GETNUMBER(3));
}


RING_FUNC(ring_NextColumn)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	NextColumn();
}


RING_FUNC(ring_GetColumnIndex)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetColumnIndex());
}


RING_FUNC(ring_GetColumnWidth)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetColumnWidth( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_SetColumnWidth)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetColumnWidth( (int ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_GetColumnOffset)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetColumnOffset( (int ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_SetColumnOffset)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetColumnOffset( (int ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_GetColumnsCount)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetColumnsCount());
}


RING_FUNC(ring_BeginTabBar)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginTabBar(RING_API_GETSTRING(1), (ImGuiTabBarFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_EndTabBar)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndTabBar();
}


RING_FUNC(ring_BeginTabItem)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginTabItem(RING_API_GETSTRING(1),(bool *) RING_API_GETCPOINTER(2,"bool"), (ImGuiTabItemFlags ) RING_API_GETNUMBER(3)));
}


RING_FUNC(ring_EndTabItem)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndTabItem();
}


RING_FUNC(ring_TabItemButton)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TabItemButton(RING_API_GETSTRING(1), (ImGuiTabItemFlags ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_SetTabItemClosed)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetTabItemClosed(RING_API_GETSTRING(1));
}


RING_FUNC(ring_DockSpace)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(DockSpace( (ImGuiID ) RING_API_GETNUMBER(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (ImGuiDockNodeFlags ) RING_API_GETNUMBER(3),(ImGuiWindowClass *) RING_API_GETCPOINTER(4,"ImGuiWindowClass")));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_DockSpaceOverViewport)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(DockSpaceOverViewport((ImGuiViewport *) RING_API_GETCPOINTER(1,"ImGuiViewport"), (ImGuiDockNodeFlags ) RING_API_GETNUMBER(2),(ImGuiWindowClass *) RING_API_GETCPOINTER(3,"ImGuiWindowClass")));
}


RING_FUNC(ring_SetNextWindowDockID)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowDockID( (ImGuiID ) RING_API_GETNUMBER(1), (ImGuiCond ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_SetNextWindowClass)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetNextWindowClass((ImGuiWindowClass *) RING_API_GETCPOINTER(1,"ImGuiWindowClass"));
}


RING_FUNC(ring_GetWindowDockID)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetWindowDockID());
}


RING_FUNC(ring_IsWindowDocked)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsWindowDocked());
}


RING_FUNC(ring_LogToTTY)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	LogToTTY( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_LogToFile)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	LogToFile( (int ) RING_API_GETNUMBER(1),RING_API_GETSTRING(2));
}


RING_FUNC(ring_LogToClipboard)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	LogToClipboard( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_LogFinish)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	LogFinish();
}


RING_FUNC(ring_LogButtons)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	LogButtons();
}


RING_FUNC(ring_BeginDragDropSource)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginDragDropSource( (ImGuiDragDropFlags ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_SetDragDropPayload)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(SetDragDropPayload(RING_API_GETSTRING(1),(void *) RING_API_GETCPOINTER(2,"void"), (size_t ) RING_API_GETNUMBER(3), (ImGuiCond ) RING_API_GETNUMBER(4)));
}


RING_FUNC(ring_EndDragDropSource)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndDragDropSource();
}


RING_FUNC(ring_BeginDragDropTarget)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(BeginDragDropTarget());
}


RING_FUNC(ring_AcceptDragDropPayload)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(AcceptDragDropPayload(RING_API_GETSTRING(1), (ImGuiDragDropFlags ) RING_API_GETNUMBER(2)),"ImGuiPayload");
}


RING_FUNC(ring_EndDragDropTarget)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndDragDropTarget();
}


RING_FUNC(ring_GetDragDropPayload)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetDragDropPayload(),"ImGuiPayload");
}


RING_FUNC(ring_BeginDisabled)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	BeginDisabled( (bool ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_EndDisabled)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndDisabled();
}


RING_FUNC(ring_PushClipRect)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	PushClipRect(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (bool ) RING_API_GETNUMBER(3));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_PopClipRect)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	PopClipRect();
}


RING_FUNC(ring_SetItemDefaultFocus)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	SetItemDefaultFocus();
}


RING_FUNC(ring_SetKeyboardFocusHere)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetKeyboardFocusHere( (int ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_IsItemHovered)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsItemHovered( (ImGuiHoveredFlags ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_IsItemActive)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemActive());
}


RING_FUNC(ring_IsItemFocused)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemFocused());
}


RING_FUNC(ring_IsItemClicked)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsItemClicked( (ImGuiMouseButton ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_IsItemVisible)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemVisible());
}


RING_FUNC(ring_IsItemEdited)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemEdited());
}


RING_FUNC(ring_IsItemActivated)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemActivated());
}


RING_FUNC(ring_IsItemDeactivated)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemDeactivated());
}


RING_FUNC(ring_IsItemDeactivatedAfterEdit)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemDeactivatedAfterEdit());
}


RING_FUNC(ring_IsItemToggledOpen)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsItemToggledOpen());
}


RING_FUNC(ring_IsAnyItemHovered)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsAnyItemHovered());
}


RING_FUNC(ring_IsAnyItemActive)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsAnyItemActive());
}


RING_FUNC(ring_IsAnyItemFocused)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsAnyItemFocused());
}


RING_FUNC(ring_GetItemRectMin)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetItemRectMin();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetItemRectMax)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetItemRectMax();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetItemRectSize)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetItemRectSize();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_SetItemAllowOverlap)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	SetItemAllowOverlap();
}


RING_FUNC(ring_GetMainViewport)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetMainViewport(),"ImGuiViewport");
}


RING_FUNC(ring_GetBackgroundDrawList)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetBackgroundDrawList(),"ImDrawList");
}


RING_FUNC(ring_GetForegroundDrawList)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetForegroundDrawList(),"ImDrawList");
}


RING_FUNC(ring_GetBackgroundDrawList_1)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(GetBackgroundDrawList((ImGuiViewport *) RING_API_GETCPOINTER(1,"ImGuiViewport")),"ImDrawList");
}


RING_FUNC(ring_GetForegroundDrawList_1)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(GetForegroundDrawList((ImGuiViewport *) RING_API_GETCPOINTER(1,"ImGuiViewport")),"ImDrawList");
}


RING_FUNC(ring_IsRectVisible)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsRectVisible(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
}


RING_FUNC(ring_IsRectVisible_1)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsRectVisible(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_GetTime)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetTime());
}


RING_FUNC(ring_GetFrameCount)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetFrameCount());
}


RING_FUNC(ring_GetDrawListSharedData)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetDrawListSharedData(),"ImDrawListSharedData");
}


RING_FUNC(ring_GetStyleColorName)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETSTRING(GetStyleColorName( (ImGuiCol ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_SetStateStorage)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetStateStorage((ImGuiStorage *) RING_API_GETCPOINTER(1,"ImGuiStorage"));
}


RING_FUNC(ring_GetStateStorage)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETCPOINTER(GetStateStorage(),"ImGuiStorage");
}


RING_FUNC(ring_BeginChildFrame)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(BeginChildFrame( (ImGuiID ) RING_API_GETNUMBER(1),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (ImGuiWindowFlags ) RING_API_GETNUMBER(3)));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_EndChildFrame)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	EndChildFrame();
}


RING_FUNC(ring_CalcTextSize)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = CalcTextSize(RING_API_GETSTRING(1),RING_API_GETSTRING(2), (bool ) RING_API_GETNUMBER(3), (float ) RING_API_GETNUMBER(4));
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_ColorConvertU32ToFloat4)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		ImVec4        *pValue ; 
		pValue = (ImVec4        *) RING_API_MALLOC(sizeof(ImVec4       )) ;
		*pValue = ColorConvertU32ToFloat4( (ImU32 ) RING_API_GETNUMBER(1));
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec4",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_ColorConvertFloat4ToU32)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(ColorConvertFloat4ToU32(* (const ImVec4  *) RING_API_GETCPOINTER(1,"const ImVec4")));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec4"));
}


RING_FUNC(ring_IsKeyDown)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsKeyDown( (ImGuiKey ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_IsKeyPressed)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsKeyPressed( (ImGuiKey ) RING_API_GETNUMBER(1), (bool ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_IsKeyReleased)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsKeyReleased( (ImGuiKey ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetKeyPressedAmount)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetKeyPressedAmount( (ImGuiKey ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2), (float ) RING_API_GETNUMBER(3)));
}


RING_FUNC(ring_GetKeyName)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETSTRING(GetKeyName( (ImGuiKey ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_CaptureKeyboardFromApp)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	CaptureKeyboardFromApp( (bool ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_IsMouseDown)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsMouseDown( (ImGuiMouseButton ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_IsMouseClicked)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsMouseClicked( (ImGuiMouseButton ) RING_API_GETNUMBER(1), (bool ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_IsMouseReleased)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsMouseReleased( (ImGuiMouseButton ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_IsMouseDoubleClicked)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsMouseDoubleClicked( (ImGuiMouseButton ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_GetMouseClickedCount)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(GetMouseClickedCount( (ImGuiMouseButton ) RING_API_GETNUMBER(1)));
}


RING_FUNC(ring_IsMouseHoveringRect)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsMouseHoveringRect(* (const ImVec2  *) RING_API_GETCPOINTER(1,"const ImVec2"),* (const ImVec2  *) RING_API_GETCPOINTER(2,"const ImVec2"), (bool ) RING_API_GETNUMBER(3)));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec2"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImVec2"));
}


RING_FUNC(ring_IsMousePosValid)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsMousePosValid((ImVec2 *) RING_API_GETCPOINTER(1,"ImVec2")));
}


RING_FUNC(ring_IsAnyMouseDown)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(IsAnyMouseDown());
}


RING_FUNC(ring_GetMousePos)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetMousePos();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_GetMousePosOnOpeningCurrentPopup)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetMousePosOnOpeningCurrentPopup();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_IsMouseDragging)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(IsMouseDragging( (ImGuiMouseButton ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2)));
}


RING_FUNC(ring_GetMouseDragDelta)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		ImVec2        *pValue ; 
		pValue = (ImVec2        *) RING_API_MALLOC(sizeof(ImVec2       )) ;
		*pValue = GetMouseDragDelta( (ImGuiMouseButton ) RING_API_GETNUMBER(1), (float ) RING_API_GETNUMBER(2));
		RING_API_RETMANAGEDCPOINTER(pValue,"ImVec2",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_ResetMouseDragDelta)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ResetMouseDragDelta( (ImGuiMouseButton ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_GetMouseCursor)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(GetMouseCursor());
}


RING_FUNC(ring_SetMouseCursor)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetMouseCursor( (ImGuiMouseCursor ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_CaptureMouseFromApp)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	CaptureMouseFromApp( (bool ) RING_API_GETNUMBER(1));
}


RING_FUNC(ring_GetClipboardText)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETSTRING(GetClipboardText());
}


RING_FUNC(ring_SetClipboardText)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetClipboardText(RING_API_GETSTRING(1));
}


RING_FUNC(ring_LoadIniSettingsFromDisk)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	LoadIniSettingsFromDisk(RING_API_GETSTRING(1));
}


RING_FUNC(ring_LoadIniSettingsFromMemory)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	LoadIniSettingsFromMemory(RING_API_GETSTRING(1), (size_t ) RING_API_GETNUMBER(2));
}


RING_FUNC(ring_SaveIniSettingsToDisk)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SaveIniSettingsToDisk(RING_API_GETSTRING(1));
}


RING_FUNC(ring_SaveIniSettingsToMemory)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETSTRING(SaveIniSettingsToMemory((size_t *) RING_API_GETCPOINTER(1,"size_t")));
}


RING_FUNC(ring_DebugCheckVersionAndDataLayout)
{
	if ( RING_API_PARACOUNT != 7 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(5) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(6) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(7) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(DebugCheckVersionAndDataLayout(RING_API_GETSTRING(1), (size_t ) RING_API_GETNUMBER(2), (size_t ) RING_API_GETNUMBER(3), (size_t ) RING_API_GETNUMBER(4), (size_t ) RING_API_GETNUMBER(5), (size_t ) RING_API_GETNUMBER(6), (size_t ) RING_API_GETNUMBER(7)));
}


RING_FUNC(ring_SetAllocatorFunctions)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetAllocatorFunctions(* (ImGuiMemAllocFunc  *) RING_API_GETCPOINTER(1,"ImGuiMemAllocFunc"),* (ImGuiMemFreeFunc  *) RING_API_GETCPOINTER(2,"ImGuiMemFreeFunc"),(void *) RING_API_GETCPOINTER(3,"void"));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImGuiMemAllocFunc"));
	if (RING_API_ISCPOINTERNOTASSIGNED(2))
		RING_API_FREE(RING_API_GETCPOINTER(2,"ImGuiMemFreeFunc"));
}


RING_FUNC(ring_GetAllocatorFunctions)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	GetAllocatorFunctions((ImGuiMemAllocFunc *) RING_API_GETCPOINTER(1,"ImGuiMemAllocFunc"),(ImGuiMemFreeFunc *) RING_API_GETCPOINTER(2,"ImGuiMemFreeFunc"),(void **) RING_API_GETCPOINTER2POINTER(3,"void"));
}


RING_FUNC(ring_MemAlloc)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(MemAlloc( (size_t ) RING_API_GETNUMBER(1)),"void");
}


RING_FUNC(ring_MemFree)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	MemFree((void *) RING_API_GETCPOINTER(1,"void"));
}


RING_FUNC(ring_GetPlatformIO)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	{
		ImGuiPlatformIO  *pValue ; 
		pValue = (ImGuiPlatformIO  *) RING_API_MALLOC(sizeof(ImGuiPlatformIO )) ;
		*pValue = GetPlatformIO();
		RING_API_RETMANAGEDCPOINTER(pValue,"ImGuiPlatformIO",RING_API_FREEFUNC);
	}
}


RING_FUNC(ring_UpdatePlatformWindows)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	UpdatePlatformWindows();
}


RING_FUNC(ring_RenderPlatformWindowsDefault)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RenderPlatformWindowsDefault((void *) RING_API_GETCPOINTER(1,"void"),(void *) RING_API_GETCPOINTER(2,"void"));
}


RING_FUNC(ring_DestroyPlatformWindows)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	DestroyPlatformWindows();
}


RING_FUNC(ring_FindViewportByID)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISNUMBER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(FindViewportByID( (ImGuiID ) RING_API_GETNUMBER(1)),"ImGuiViewport");
}


RING_FUNC(ring_FindViewportByPlatformHandle)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(FindViewportByPlatformHandle((void *) RING_API_GETCPOINTER(1,"void")),"ImGuiViewport");
}


RING_FUNC(ring_Text)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	Text(RING_API_GETSTRING(1));
}


RING_FUNC(ring_TextColored)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TextColored(* (const ImVec4  *) RING_API_GETCPOINTER(1,"const ImVec4"),RING_API_GETSTRING(2));
	if (RING_API_ISCPOINTERNOTASSIGNED(1))
		RING_API_FREE(RING_API_GETCPOINTER(1,"ImVec4"));
}


RING_FUNC(ring_TextDisabled)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TextDisabled(RING_API_GETSTRING(1));
}


RING_FUNC(ring_TextWrapped)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	TextWrapped(RING_API_GETSTRING(1));
}


RING_FUNC(ring_LabelText)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	LabelText(RING_API_GETSTRING(1),RING_API_GETSTRING(2));
}


RING_FUNC(ring_BulletText)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	BulletText(RING_API_GETSTRING(1));
}


RING_FUNC(ring_LogText)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	LogText(RING_API_GETSTRING(1));
}


RING_FUNC(ring_SetTooltip)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	SetTooltip(RING_API_GETSTRING(1));
}


RING_FUNC(ring_TreeNode)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TreeNode(RING_API_GETSTRING(1),RING_API_GETSTRING(2)));
}


RING_FUNC(ring_TreeNode_2)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TreeNode((void *) RING_API_GETCPOINTER(1,"void"),RING_API_GETSTRING(2)));
}


RING_FUNC(ring_TreeNodeEx)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TreeNodeEx(RING_API_GETSTRING(1), (ImGuiTreeNodeFlags ) RING_API_GETNUMBER(2),RING_API_GETSTRING(3)));
}


RING_FUNC(ring_TreeNodeEx_2)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(TreeNodeEx((void *) RING_API_GETCPOINTER(1,"void"), (ImGuiTreeNodeFlags ) RING_API_GETNUMBER(2),RING_API_GETSTRING(3)));
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_Init)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImGui_ImplSDLRenderer_Init((SDL_Renderer *) RING_API_GETCPOINTER(1,"SDL_Renderer")));
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_Shutdown)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	ImGui_ImplSDLRenderer_Shutdown();
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_NewFrame)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	ImGui_ImplSDLRenderer_NewFrame();
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_RenderDrawData)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	ImGui_ImplSDLRenderer_RenderDrawData((ImDrawData *) RING_API_GETCPOINTER(1,"ImDrawData"));
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_CreateFontsTexture)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(ImGui_ImplSDLRenderer_CreateFontsTexture());
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_DestroyFontsTexture)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	ImGui_ImplSDLRenderer_DestroyFontsTexture();
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_CreateDeviceObjects)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	RING_API_RETNUMBER(ImGui_ImplSDLRenderer_CreateDeviceObjects());
}


RING_FUNC(ring_ImGui_ImplSDLRenderer_DestroyDeviceObjects)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	ImGui_ImplSDLRenderer_DestroyDeviceObjects();
}


RING_FUNC(ring_ImGui_ImplSDL2_InitForOpenGL)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImGui_ImplSDL2_InitForOpenGL((SDL_Window *) RING_API_GETCPOINTER(1,"SDL_Window"),(void *) RING_API_GETCPOINTER(2,"void")));
}


RING_FUNC(ring_ImGui_ImplSDL2_InitForVulkan)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImGui_ImplSDL2_InitForVulkan((SDL_Window *) RING_API_GETCPOINTER(1,"SDL_Window")));
}


RING_FUNC(ring_ImGui_ImplSDL2_InitForD3D)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImGui_ImplSDL2_InitForD3D((SDL_Window *) RING_API_GETCPOINTER(1,"SDL_Window")));
}


RING_FUNC(ring_ImGui_ImplSDL2_InitForMetal)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImGui_ImplSDL2_InitForMetal((SDL_Window *) RING_API_GETCPOINTER(1,"SDL_Window")));
}


RING_FUNC(ring_ImGui_ImplSDL2_InitForSDLRenderer)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISCPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImGui_ImplSDL2_InitForSDLRenderer((SDL_Window *) RING_API_GETCPOINTER(1,"SDL_Window"),(SDL_Renderer *) RING_API_GETCPOINTER(2,"SDL_Renderer")));
}


RING_FUNC(ring_ImGui_ImplSDL2_Shutdown)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	ImGui_ImplSDL2_Shutdown();
}


RING_FUNC(ring_ImGui_ImplSDL2_NewFrame)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	ImGui_ImplSDL2_NewFrame();
}


RING_FUNC(ring_ImGui_ImplSDL2_ProcessEvent)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	RING_API_IGNORECPOINTERTYPE ;
	if ( ! RING_API_ISCPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETNUMBER(ImGui_ImplSDL2_ProcessEvent((SDL_Event *) RING_API_GETCPOINTER(1,"SDL_Event")));
}

RING_LIBINIT
{
	RING_API_REGISTER("imgui_getversion",ring_Imgui_GetVersion);
	RING_API_REGISTER("imgui_getio",ring_imgui_GetIO);
	RING_API_REGISTER("imgui_getstyle",ring_imgui_GetStyle);
	RING_API_REGISTER("imgui_getstylecolorvec4",ring_GetStyleColorVec4);
	RING_API_REGISTER("imgui_imfontatlas_gettexdataasrgba32",ring_ImFontAtlas_GetTexDataAsRGBA32);
	RING_API_REGISTER("imgui_begin",ring_imgui_Begin);
	RING_API_REGISTER("imgui_end",ring_imgui_End);
	RING_API_REGISTER("imgui_endmenu",ring_EndMenu);
	RING_API_REGISTER("imgui_sliderint",ring_SliderInt);
	RING_API_REGISTER("imgui_sliderdouble",ring_SliderDouble);
	RING_API_REGISTER("imgui_createcontext",ring_CreateContext);
	RING_API_REGISTER("imgui_destroycontext",ring_DestroyContext);
	RING_API_REGISTER("imgui_getcurrentcontext",ring_GetCurrentContext);
	RING_API_REGISTER("imgui_setcurrentcontext",ring_SetCurrentContext);
	RING_API_REGISTER("imgui_newframe",ring_NewFrame);
	RING_API_REGISTER("imgui_endframe",ring_EndFrame);
	RING_API_REGISTER("imgui_render",ring_Render);
	RING_API_REGISTER("imgui_getdrawdata",ring_GetDrawData);
	RING_API_REGISTER("imgui_showdemowindow",ring_ShowDemoWindow);
	RING_API_REGISTER("imgui_showmetricswindow",ring_ShowMetricsWindow);
	RING_API_REGISTER("imgui_showdebuglogwindow",ring_ShowDebugLogWindow);
	RING_API_REGISTER("imgui_showstacktoolwindow",ring_ShowStackToolWindow);
	RING_API_REGISTER("imgui_showaboutwindow",ring_ShowAboutWindow);
	RING_API_REGISTER("imgui_showstyleeditor",ring_ShowStyleEditor);
	RING_API_REGISTER("imgui_showstyleselector",ring_ShowStyleSelector);
	RING_API_REGISTER("imgui_showfontselector",ring_ShowFontSelector);
	RING_API_REGISTER("imgui_showuserguide",ring_ShowUserGuide);
	RING_API_REGISTER("imgui_stylecolorsdark",ring_StyleColorsDark);
	RING_API_REGISTER("imgui_stylecolorslight",ring_StyleColorsLight);
	RING_API_REGISTER("imgui_stylecolorsclassic",ring_StyleColorsClassic);
	RING_API_REGISTER("imgui_beginchild",ring_BeginChild);
	RING_API_REGISTER("imgui_beginchild_2",ring_BeginChild_2);
	RING_API_REGISTER("imgui_endchild",ring_EndChild);
	RING_API_REGISTER("imgui_iswindowappearing",ring_IsWindowAppearing);
	RING_API_REGISTER("imgui_iswindowcollapsed",ring_IsWindowCollapsed);
	RING_API_REGISTER("imgui_iswindowfocused",ring_IsWindowFocused);
	RING_API_REGISTER("imgui_iswindowhovered",ring_IsWindowHovered);
	RING_API_REGISTER("imgui_getwindowdrawlist",ring_GetWindowDrawList);
	RING_API_REGISTER("imgui_getwindowdpiscale",ring_GetWindowDpiScale);
	RING_API_REGISTER("imgui_getwindowpos",ring_GetWindowPos);
	RING_API_REGISTER("imgui_getwindowsize",ring_GetWindowSize);
	RING_API_REGISTER("imgui_getwindowwidth",ring_GetWindowWidth);
	RING_API_REGISTER("imgui_getwindowheight",ring_GetWindowHeight);
	RING_API_REGISTER("imgui_getwindowviewport",ring_GetWindowViewport);
	RING_API_REGISTER("imgui_setnextwindowpos",ring_SetNextWindowPos);
	RING_API_REGISTER("imgui_setnextwindowsize",ring_SetNextWindowSize);
	RING_API_REGISTER("imgui_setnextwindowsizeconstraints",ring_SetNextWindowSizeConstraints);
	RING_API_REGISTER("imgui_setnextwindowcontentsize",ring_SetNextWindowContentSize);
	RING_API_REGISTER("imgui_setnextwindowcollapsed",ring_SetNextWindowCollapsed);
	RING_API_REGISTER("imgui_setnextwindowfocus",ring_SetNextWindowFocus);
	RING_API_REGISTER("imgui_setnextwindowbgalpha",ring_SetNextWindowBgAlpha);
	RING_API_REGISTER("imgui_setnextwindowviewport",ring_SetNextWindowViewport);
	RING_API_REGISTER("imgui_setwindowpos",ring_SetWindowPos);
	RING_API_REGISTER("imgui_setwindowsize",ring_SetWindowSize);
	RING_API_REGISTER("imgui_setwindowcollapsed",ring_SetWindowCollapsed);
	RING_API_REGISTER("imgui_setwindowfocus",ring_SetWindowFocus);
	RING_API_REGISTER("imgui_setwindowfontscale",ring_SetWindowFontScale);
	RING_API_REGISTER("imgui_setwindowpos_2",ring_SetWindowPos_2);
	RING_API_REGISTER("imgui_setwindowsize_3",ring_SetWindowSize_3);
	RING_API_REGISTER("imgui_setwindowcollapsed_3",ring_SetWindowCollapsed_3);
	RING_API_REGISTER("imgui_setwindowfocus_1",ring_SetWindowFocus_1);
	RING_API_REGISTER("imgui_getcontentregionavail",ring_GetContentRegionAvail);
	RING_API_REGISTER("imgui_getcontentregionmax",ring_GetContentRegionMax);
	RING_API_REGISTER("imgui_getwindowcontentregionmin",ring_GetWindowContentRegionMin);
	RING_API_REGISTER("imgui_getwindowcontentregionmax",ring_GetWindowContentRegionMax);
	RING_API_REGISTER("imgui_getscrollx",ring_GetScrollX);
	RING_API_REGISTER("imgui_getscrolly",ring_GetScrollY);
	RING_API_REGISTER("imgui_setscrollx",ring_SetScrollX);
	RING_API_REGISTER("imgui_setscrolly",ring_SetScrollY);
	RING_API_REGISTER("imgui_getscrollmaxx",ring_GetScrollMaxX);
	RING_API_REGISTER("imgui_getscrollmaxy",ring_GetScrollMaxY);
	RING_API_REGISTER("imgui_setscrollherex",ring_SetScrollHereX);
	RING_API_REGISTER("imgui_setscrollherey",ring_SetScrollHereY);
	RING_API_REGISTER("imgui_setscrollfromposx",ring_SetScrollFromPosX);
	RING_API_REGISTER("imgui_setscrollfromposy",ring_SetScrollFromPosY);
	RING_API_REGISTER("imgui_pushfont",ring_PushFont);
	RING_API_REGISTER("imgui_popfont",ring_PopFont);
	RING_API_REGISTER("imgui_pushstylecolor",ring_PushStyleColor);
	RING_API_REGISTER("imgui_pushstylecolor_2",ring_PushStyleColor_2);
	RING_API_REGISTER("imgui_popstylecolor",ring_PopStyleColor);
	RING_API_REGISTER("imgui_pushstylevar",ring_PushStyleVar);
	RING_API_REGISTER("imgui_pushstylevar_2",ring_PushStyleVar_2);
	RING_API_REGISTER("imgui_popstylevar",ring_PopStyleVar);
	RING_API_REGISTER("imgui_pushallowkeyboardfocus",ring_PushAllowKeyboardFocus);
	RING_API_REGISTER("imgui_popallowkeyboardfocus",ring_PopAllowKeyboardFocus);
	RING_API_REGISTER("imgui_pushbuttonrepeat",ring_PushButtonRepeat);
	RING_API_REGISTER("imgui_popbuttonrepeat",ring_PopButtonRepeat);
	RING_API_REGISTER("imgui_pushitemwidth",ring_PushItemWidth);
	RING_API_REGISTER("imgui_popitemwidth",ring_PopItemWidth);
	RING_API_REGISTER("imgui_setnextitemwidth",ring_SetNextItemWidth);
	RING_API_REGISTER("imgui_calcitemwidth",ring_CalcItemWidth);
	RING_API_REGISTER("imgui_pushtextwrappos",ring_PushTextWrapPos);
	RING_API_REGISTER("imgui_poptextwrappos",ring_PopTextWrapPos);
	RING_API_REGISTER("imgui_getfont",ring_GetFont);
	RING_API_REGISTER("imgui_getfontsize",ring_GetFontSize);
	RING_API_REGISTER("imgui_getfonttexuvwhitepixel",ring_GetFontTexUvWhitePixel);
	RING_API_REGISTER("imgui_getcoloru32",ring_GetColorU32);
	RING_API_REGISTER("imgui_getcoloru32_2",ring_GetColorU32_2);
	RING_API_REGISTER("imgui_getcoloru32_3",ring_GetColorU32_3);
	RING_API_REGISTER("imgui_separator",ring_Separator);
	RING_API_REGISTER("imgui_sameline",ring_SameLine);
	RING_API_REGISTER("imgui_newline",ring_NewLine);
	RING_API_REGISTER("imgui_spacing",ring_Spacing);
	RING_API_REGISTER("imgui_dummy",ring_Dummy);
	RING_API_REGISTER("imgui_indent",ring_Indent);
	RING_API_REGISTER("imgui_unindent",ring_Unindent);
	RING_API_REGISTER("imgui_begingroup",ring_BeginGroup);
	RING_API_REGISTER("imgui_endgroup",ring_EndGroup);
	RING_API_REGISTER("imgui_getcursorpos",ring_GetCursorPos);
	RING_API_REGISTER("imgui_getcursorposx",ring_GetCursorPosX);
	RING_API_REGISTER("imgui_getcursorposy",ring_GetCursorPosY);
	RING_API_REGISTER("imgui_setcursorpos",ring_SetCursorPos);
	RING_API_REGISTER("imgui_setcursorposx",ring_SetCursorPosX);
	RING_API_REGISTER("imgui_setcursorposy",ring_SetCursorPosY);
	RING_API_REGISTER("imgui_getcursorstartpos",ring_GetCursorStartPos);
	RING_API_REGISTER("imgui_getcursorscreenpos",ring_GetCursorScreenPos);
	RING_API_REGISTER("imgui_setcursorscreenpos",ring_SetCursorScreenPos);
	RING_API_REGISTER("imgui_aligntexttoframepadding",ring_AlignTextToFramePadding);
	RING_API_REGISTER("imgui_gettextlineheight",ring_GetTextLineHeight);
	RING_API_REGISTER("imgui_gettextlineheightwithspacing",ring_GetTextLineHeightWithSpacing);
	RING_API_REGISTER("imgui_getframeheight",ring_GetFrameHeight);
	RING_API_REGISTER("imgui_getframeheightwithspacing",ring_GetFrameHeightWithSpacing);
	RING_API_REGISTER("imgui_pushid",ring_PushID);
	RING_API_REGISTER("imgui_pushid_2",ring_PushID_2);
	RING_API_REGISTER("imgui_pushid_3",ring_PushID_3);
	RING_API_REGISTER("imgui_pushid_4",ring_PushID_4);
	RING_API_REGISTER("imgui_popid",ring_PopID);
	RING_API_REGISTER("imgui_getid",ring_GetID);
	RING_API_REGISTER("imgui_getid_2",ring_GetID_2);
	RING_API_REGISTER("imgui_getid_3",ring_GetID_3);
	RING_API_REGISTER("imgui_textunformatted",ring_TextUnformatted);
	RING_API_REGISTER("imgui_button",ring_Button);
	RING_API_REGISTER("imgui_smallbutton",ring_SmallButton);
	RING_API_REGISTER("imgui_invisiblebutton",ring_InvisibleButton);
	RING_API_REGISTER("imgui_arrowbutton",ring_ArrowButton);
	RING_API_REGISTER("imgui_image",ring_Image);
	RING_API_REGISTER("imgui_imagebutton",ring_ImageButton);
	RING_API_REGISTER("imgui_checkbox",ring_Checkbox);
	RING_API_REGISTER("imgui_checkboxflags",ring_CheckboxFlags);
	RING_API_REGISTER("imgui_checkboxflags_2",ring_CheckboxFlags_2);
	RING_API_REGISTER("imgui_radiobutton",ring_RadioButton);
	RING_API_REGISTER("imgui_radiobutton_2",ring_RadioButton_2);
	RING_API_REGISTER("imgui_progressbar",ring_ProgressBar);
	RING_API_REGISTER("imgui_bullet",ring_Bullet);
	RING_API_REGISTER("imgui_begincombo",ring_BeginCombo);
	RING_API_REGISTER("imgui_endcombo",ring_EndCombo);
	RING_API_REGISTER("imgui_combo",ring_Combo);
	RING_API_REGISTER("imgui_sliderscalar",ring_SliderScalar);
	RING_API_REGISTER("imgui_sliderscalarn",ring_SliderScalarN);
	RING_API_REGISTER("imgui_vsliderint",ring_VSliderInt);
	RING_API_REGISTER("imgui_vsliderscalar",ring_VSliderScalar);
	RING_API_REGISTER("imgui_inputtext",ring_InputText);
	RING_API_REGISTER("imgui_inputtextmultiline",ring_InputTextMultiline);
	RING_API_REGISTER("imgui_inputtextwithhint",ring_InputTextWithHint);
	RING_API_REGISTER("imgui_inputfloat",ring_InputFloat);
	RING_API_REGISTER("imgui_inputint",ring_InputInt);
	RING_API_REGISTER("imgui_inputdouble",ring_InputDouble);
	RING_API_REGISTER("imgui_inputscalar",ring_InputScalar);
	RING_API_REGISTER("imgui_inputscalarn",ring_InputScalarN);
	RING_API_REGISTER("imgui_colorbutton",ring_ColorButton);
	RING_API_REGISTER("imgui_setcoloreditoptions",ring_SetColorEditOptions);
	RING_API_REGISTER("imgui_treepush",ring_TreePush);
	RING_API_REGISTER("imgui_treepush_2",ring_TreePush_2);
	RING_API_REGISTER("imgui_treepop",ring_TreePop);
	RING_API_REGISTER("imgui_gettreenodetolabelspacing",ring_GetTreeNodeToLabelSpacing);
	RING_API_REGISTER("imgui_collapsingheader",ring_CollapsingHeader);
	RING_API_REGISTER("imgui_collapsingheader_2",ring_CollapsingHeader_2);
	RING_API_REGISTER("imgui_setnextitemopen",ring_SetNextItemOpen);
	RING_API_REGISTER("imgui_selectable",ring_Selectable);
	RING_API_REGISTER("imgui_selectable_2",ring_Selectable_2);
	RING_API_REGISTER("imgui_beginlistbox",ring_BeginListBox);
	RING_API_REGISTER("imgui_endlistbox",ring_EndListBox);
	RING_API_REGISTER("imgui_value",ring_Value);
	RING_API_REGISTER("imgui_value_2",ring_Value_2);
	RING_API_REGISTER("imgui_value_3",ring_Value_3);
	RING_API_REGISTER("imgui_value_4",ring_Value_4);
	RING_API_REGISTER("imgui_beginmenubar",ring_BeginMenuBar);
	RING_API_REGISTER("imgui_endmenubar",ring_EndMenuBar);
	RING_API_REGISTER("imgui_beginmainmenubar",ring_BeginMainMenuBar);
	RING_API_REGISTER("imgui_endmainmenubar",ring_EndMainMenuBar);
	RING_API_REGISTER("imgui_beginmenu",ring_BeginMenu);
	RING_API_REGISTER("imgui_menuitem",ring_MenuItem);
	RING_API_REGISTER("imgui_menuitem_2",ring_MenuItem_2);
	RING_API_REGISTER("imgui_begintooltip",ring_BeginTooltip);
	RING_API_REGISTER("imgui_endtooltip",ring_EndTooltip);
	RING_API_REGISTER("imgui_beginpopup",ring_BeginPopup);
	RING_API_REGISTER("imgui_beginpopupmodal",ring_BeginPopupModal);
	RING_API_REGISTER("imgui_endpopup",ring_EndPopup);
	RING_API_REGISTER("imgui_openpopup",ring_OpenPopup);
	RING_API_REGISTER("imgui_openpopup_2",ring_OpenPopup_2);
	RING_API_REGISTER("imgui_openpopuponitemclick",ring_OpenPopupOnItemClick);
	RING_API_REGISTER("imgui_closecurrentpopup",ring_CloseCurrentPopup);
	RING_API_REGISTER("imgui_beginpopupcontextitem",ring_BeginPopupContextItem);
	RING_API_REGISTER("imgui_beginpopupcontextwindow",ring_BeginPopupContextWindow);
	RING_API_REGISTER("imgui_beginpopupcontextvoid",ring_BeginPopupContextVoid);
	RING_API_REGISTER("imgui_ispopupopen",ring_IsPopupOpen);
	RING_API_REGISTER("imgui_begintable",ring_BeginTable);
	RING_API_REGISTER("imgui_endtable",ring_EndTable);
	RING_API_REGISTER("imgui_tablenextrow",ring_TableNextRow);
	RING_API_REGISTER("imgui_tablenextcolumn",ring_TableNextColumn);
	RING_API_REGISTER("imgui_tablesetcolumnindex",ring_TableSetColumnIndex);
	RING_API_REGISTER("imgui_tablesetupcolumn",ring_TableSetupColumn);
	RING_API_REGISTER("imgui_tablesetupscrollfreeze",ring_TableSetupScrollFreeze);
	RING_API_REGISTER("imgui_tableheadersrow",ring_TableHeadersRow);
	RING_API_REGISTER("imgui_tableheader",ring_TableHeader);
	RING_API_REGISTER("imgui_tablegetsortspecs",ring_TableGetSortSpecs);
	RING_API_REGISTER("imgui_tablegetcolumncount",ring_TableGetColumnCount);
	RING_API_REGISTER("imgui_tablegetcolumnindex",ring_TableGetColumnIndex);
	RING_API_REGISTER("imgui_tablegetrowindex",ring_TableGetRowIndex);
	RING_API_REGISTER("imgui_tablegetcolumnname",ring_TableGetColumnName);
	RING_API_REGISTER("imgui_tablegetcolumnflags",ring_TableGetColumnFlags);
	RING_API_REGISTER("imgui_tablesetcolumnenabled",ring_TableSetColumnEnabled);
	RING_API_REGISTER("imgui_tablesetbgcolor",ring_TableSetBgColor);
	RING_API_REGISTER("imgui_columns",ring_Columns);
	RING_API_REGISTER("imgui_nextcolumn",ring_NextColumn);
	RING_API_REGISTER("imgui_getcolumnindex",ring_GetColumnIndex);
	RING_API_REGISTER("imgui_getcolumnwidth",ring_GetColumnWidth);
	RING_API_REGISTER("imgui_setcolumnwidth",ring_SetColumnWidth);
	RING_API_REGISTER("imgui_getcolumnoffset",ring_GetColumnOffset);
	RING_API_REGISTER("imgui_setcolumnoffset",ring_SetColumnOffset);
	RING_API_REGISTER("imgui_getcolumnscount",ring_GetColumnsCount);
	RING_API_REGISTER("imgui_begintabbar",ring_BeginTabBar);
	RING_API_REGISTER("imgui_endtabbar",ring_EndTabBar);
	RING_API_REGISTER("imgui_begintabitem",ring_BeginTabItem);
	RING_API_REGISTER("imgui_endtabitem",ring_EndTabItem);
	RING_API_REGISTER("imgui_tabitembutton",ring_TabItemButton);
	RING_API_REGISTER("imgui_settabitemclosed",ring_SetTabItemClosed);
	RING_API_REGISTER("imgui_dockspace",ring_DockSpace);
	RING_API_REGISTER("imgui_dockspaceoverviewport",ring_DockSpaceOverViewport);
	RING_API_REGISTER("imgui_setnextwindowdockid",ring_SetNextWindowDockID);
	RING_API_REGISTER("imgui_setnextwindowclass",ring_SetNextWindowClass);
	RING_API_REGISTER("imgui_getwindowdockid",ring_GetWindowDockID);
	RING_API_REGISTER("imgui_iswindowdocked",ring_IsWindowDocked);
	RING_API_REGISTER("imgui_logtotty",ring_LogToTTY);
	RING_API_REGISTER("imgui_logtofile",ring_LogToFile);
	RING_API_REGISTER("imgui_logtoclipboard",ring_LogToClipboard);
	RING_API_REGISTER("imgui_logfinish",ring_LogFinish);
	RING_API_REGISTER("imgui_logbuttons",ring_LogButtons);
	RING_API_REGISTER("imgui_begindragdropsource",ring_BeginDragDropSource);
	RING_API_REGISTER("imgui_setdragdroppayload",ring_SetDragDropPayload);
	RING_API_REGISTER("imgui_enddragdropsource",ring_EndDragDropSource);
	RING_API_REGISTER("imgui_begindragdroptarget",ring_BeginDragDropTarget);
	RING_API_REGISTER("imgui_acceptdragdroppayload",ring_AcceptDragDropPayload);
	RING_API_REGISTER("imgui_enddragdroptarget",ring_EndDragDropTarget);
	RING_API_REGISTER("imgui_getdragdroppayload",ring_GetDragDropPayload);
	RING_API_REGISTER("imgui_begindisabled",ring_BeginDisabled);
	RING_API_REGISTER("imgui_enddisabled",ring_EndDisabled);
	RING_API_REGISTER("imgui_pushcliprect",ring_PushClipRect);
	RING_API_REGISTER("imgui_popcliprect",ring_PopClipRect);
	RING_API_REGISTER("imgui_setitemdefaultfocus",ring_SetItemDefaultFocus);
	RING_API_REGISTER("imgui_setkeyboardfocushere",ring_SetKeyboardFocusHere);
	RING_API_REGISTER("imgui_isitemhovered",ring_IsItemHovered);
	RING_API_REGISTER("imgui_isitemactive",ring_IsItemActive);
	RING_API_REGISTER("imgui_isitemfocused",ring_IsItemFocused);
	RING_API_REGISTER("imgui_isitemclicked",ring_IsItemClicked);
	RING_API_REGISTER("imgui_isitemvisible",ring_IsItemVisible);
	RING_API_REGISTER("imgui_isitemedited",ring_IsItemEdited);
	RING_API_REGISTER("imgui_isitemactivated",ring_IsItemActivated);
	RING_API_REGISTER("imgui_isitemdeactivated",ring_IsItemDeactivated);
	RING_API_REGISTER("imgui_isitemdeactivatedafteredit",ring_IsItemDeactivatedAfterEdit);
	RING_API_REGISTER("imgui_isitemtoggledopen",ring_IsItemToggledOpen);
	RING_API_REGISTER("imgui_isanyitemhovered",ring_IsAnyItemHovered);
	RING_API_REGISTER("imgui_isanyitemactive",ring_IsAnyItemActive);
	RING_API_REGISTER("imgui_isanyitemfocused",ring_IsAnyItemFocused);
	RING_API_REGISTER("imgui_getitemrectmin",ring_GetItemRectMin);
	RING_API_REGISTER("imgui_getitemrectmax",ring_GetItemRectMax);
	RING_API_REGISTER("imgui_getitemrectsize",ring_GetItemRectSize);
	RING_API_REGISTER("imgui_setitemallowoverlap",ring_SetItemAllowOverlap);
	RING_API_REGISTER("imgui_getmainviewport",ring_GetMainViewport);
	RING_API_REGISTER("imgui_getbackgrounddrawlist",ring_GetBackgroundDrawList);
	RING_API_REGISTER("imgui_getforegrounddrawlist",ring_GetForegroundDrawList);
	RING_API_REGISTER("imgui_getbackgrounddrawlist_1",ring_GetBackgroundDrawList_1);
	RING_API_REGISTER("imgui_getforegrounddrawlist_1",ring_GetForegroundDrawList_1);
	RING_API_REGISTER("imgui_isrectvisible",ring_IsRectVisible);
	RING_API_REGISTER("imgui_isrectvisible_1",ring_IsRectVisible_1);
	RING_API_REGISTER("imgui_gettime",ring_GetTime);
	RING_API_REGISTER("imgui_getframecount",ring_GetFrameCount);
	RING_API_REGISTER("imgui_getdrawlistshareddata",ring_GetDrawListSharedData);
	RING_API_REGISTER("imgui_getstylecolorname",ring_GetStyleColorName);
	RING_API_REGISTER("imgui_setstatestorage",ring_SetStateStorage);
	RING_API_REGISTER("imgui_getstatestorage",ring_GetStateStorage);
	RING_API_REGISTER("imgui_beginchildframe",ring_BeginChildFrame);
	RING_API_REGISTER("imgui_endchildframe",ring_EndChildFrame);
	RING_API_REGISTER("imgui_calctextsize",ring_CalcTextSize);
	RING_API_REGISTER("imgui_colorconvertu32tofloat4",ring_ColorConvertU32ToFloat4);
	RING_API_REGISTER("imgui_colorconvertfloat4tou32",ring_ColorConvertFloat4ToU32);
	RING_API_REGISTER("imgui_iskeydown",ring_IsKeyDown);
	RING_API_REGISTER("imgui_iskeypressed",ring_IsKeyPressed);
	RING_API_REGISTER("imgui_iskeyreleased",ring_IsKeyReleased);
	RING_API_REGISTER("imgui_getkeypressedamount",ring_GetKeyPressedAmount);
	RING_API_REGISTER("imgui_getkeyname",ring_GetKeyName);
	RING_API_REGISTER("imgui_capturekeyboardfromapp",ring_CaptureKeyboardFromApp);
	RING_API_REGISTER("imgui_ismousedown",ring_IsMouseDown);
	RING_API_REGISTER("imgui_ismouseclicked",ring_IsMouseClicked);
	RING_API_REGISTER("imgui_ismousereleased",ring_IsMouseReleased);
	RING_API_REGISTER("imgui_ismousedoubleclicked",ring_IsMouseDoubleClicked);
	RING_API_REGISTER("imgui_getmouseclickedcount",ring_GetMouseClickedCount);
	RING_API_REGISTER("imgui_ismousehoveringrect",ring_IsMouseHoveringRect);
	RING_API_REGISTER("imgui_ismouseposvalid",ring_IsMousePosValid);
	RING_API_REGISTER("imgui_isanymousedown",ring_IsAnyMouseDown);
	RING_API_REGISTER("imgui_getmousepos",ring_GetMousePos);
	RING_API_REGISTER("imgui_getmouseposonopeningcurrentpopup",ring_GetMousePosOnOpeningCurrentPopup);
	RING_API_REGISTER("imgui_ismousedragging",ring_IsMouseDragging);
	RING_API_REGISTER("imgui_getmousedragdelta",ring_GetMouseDragDelta);
	RING_API_REGISTER("imgui_resetmousedragdelta",ring_ResetMouseDragDelta);
	RING_API_REGISTER("imgui_getmousecursor",ring_GetMouseCursor);
	RING_API_REGISTER("imgui_setmousecursor",ring_SetMouseCursor);
	RING_API_REGISTER("imgui_capturemousefromapp",ring_CaptureMouseFromApp);
	RING_API_REGISTER("imgui_getclipboardtext",ring_GetClipboardText);
	RING_API_REGISTER("imgui_setclipboardtext",ring_SetClipboardText);
	RING_API_REGISTER("imgui_loadinisettingsfromdisk",ring_LoadIniSettingsFromDisk);
	RING_API_REGISTER("imgui_loadinisettingsfrommemory",ring_LoadIniSettingsFromMemory);
	RING_API_REGISTER("imgui_saveinisettingstodisk",ring_SaveIniSettingsToDisk);
	RING_API_REGISTER("imgui_saveinisettingstomemory",ring_SaveIniSettingsToMemory);
	RING_API_REGISTER("imgui_debugcheckversionanddatalayout",ring_DebugCheckVersionAndDataLayout);
	RING_API_REGISTER("imgui_setallocatorfunctions",ring_SetAllocatorFunctions);
	RING_API_REGISTER("imgui_getallocatorfunctions",ring_GetAllocatorFunctions);
	RING_API_REGISTER("imgui_memalloc",ring_MemAlloc);
	RING_API_REGISTER("imgui_memfree",ring_MemFree);
	RING_API_REGISTER("imgui_getplatformio",ring_GetPlatformIO);
	RING_API_REGISTER("imgui_updateplatformwindows",ring_UpdatePlatformWindows);
	RING_API_REGISTER("imgui_renderplatformwindowsdefault",ring_RenderPlatformWindowsDefault);
	RING_API_REGISTER("imgui_destroyplatformwindows",ring_DestroyPlatformWindows);
	RING_API_REGISTER("imgui_findviewportbyid",ring_FindViewportByID);
	RING_API_REGISTER("imgui_findviewportbyplatformhandle",ring_FindViewportByPlatformHandle);
	RING_API_REGISTER("imgui_text",ring_Text);
	RING_API_REGISTER("imgui_textcolored",ring_TextColored);
	RING_API_REGISTER("imgui_textdisabled",ring_TextDisabled);
	RING_API_REGISTER("imgui_textwrapped",ring_TextWrapped);
	RING_API_REGISTER("imgui_labeltext",ring_LabelText);
	RING_API_REGISTER("imgui_bullettext",ring_BulletText);
	RING_API_REGISTER("imgui_logtext",ring_LogText);
	RING_API_REGISTER("imgui_settooltip",ring_SetTooltip);
	RING_API_REGISTER("imgui_treenode",ring_TreeNode);
	RING_API_REGISTER("imgui_treenode_2",ring_TreeNode_2);
	RING_API_REGISTER("imgui_treenodeex",ring_TreeNodeEx);
	RING_API_REGISTER("imgui_treenodeex_2",ring_TreeNodeEx_2);
	RING_API_REGISTER("imgui_implsdlrenderer_init",ring_ImGui_ImplSDLRenderer_Init);
	RING_API_REGISTER("imgui_implsdlrenderer_shutdown",ring_ImGui_ImplSDLRenderer_Shutdown);
	RING_API_REGISTER("imgui_implsdlrenderer_newframe",ring_ImGui_ImplSDLRenderer_NewFrame);
	RING_API_REGISTER("imgui_implsdlrenderer_renderdrawdata",ring_ImGui_ImplSDLRenderer_RenderDrawData);
	RING_API_REGISTER("imgui_implsdlrenderer_createfontstexture",ring_ImGui_ImplSDLRenderer_CreateFontsTexture);
	RING_API_REGISTER("imgui_implsdlrenderer_destroyfontstexture",ring_ImGui_ImplSDLRenderer_DestroyFontsTexture);
	RING_API_REGISTER("imgui_implsdlrenderer_createdeviceobjects",ring_ImGui_ImplSDLRenderer_CreateDeviceObjects);
	RING_API_REGISTER("imgui_implsdlrenderer_destroydeviceobjects",ring_ImGui_ImplSDLRenderer_DestroyDeviceObjects);
	RING_API_REGISTER("imgui_implsdl2_initforopengl",ring_ImGui_ImplSDL2_InitForOpenGL);
	RING_API_REGISTER("imgui_implsdl2_initforvulkan",ring_ImGui_ImplSDL2_InitForVulkan);
	RING_API_REGISTER("imgui_implsdl2_initford3d",ring_ImGui_ImplSDL2_InitForD3D);
	RING_API_REGISTER("imgui_implsdl2_initformetal",ring_ImGui_ImplSDL2_InitForMetal);
	RING_API_REGISTER("imgui_implsdl2_initforsdlrenderer",ring_ImGui_ImplSDL2_InitForSDLRenderer);
	RING_API_REGISTER("imgui_implsdl2_shutdown",ring_ImGui_ImplSDL2_Shutdown);
	RING_API_REGISTER("imgui_implsdl2_newframe",ring_ImGui_ImplSDL2_NewFrame);
	RING_API_REGISTER("imgui_implsdl2_processevent",ring_ImGui_ImplSDL2_ProcessEvent);
	RING_API_REGISTER("imgui_new_imvec2",ring_imgui_new_imvec2);
	RING_API_REGISTER("imgui_new_managed_imvec2",ring_imgui_new_managed_imvec2);
	RING_API_REGISTER("imgui_destroy_imvec2",ring_imgui_destroy_imvec2);
	RING_API_REGISTER("imgui_get_imvec2_x",ring_imgui_get_imvec2_x);
	RING_API_REGISTER("imgui_set_imvec2_x",ring_imgui_set_imvec2_x);
	RING_API_REGISTER("imgui_get_imvec2_y",ring_imgui_get_imvec2_y);
	RING_API_REGISTER("imgui_set_imvec2_y",ring_imgui_set_imvec2_y);
	RING_API_REGISTER("imgui_new_imvec4",ring_imgui_new_imvec4);
	RING_API_REGISTER("imgui_new_managed_imvec4",ring_imgui_new_managed_imvec4);
	RING_API_REGISTER("imgui_destroy_imvec4",ring_imgui_destroy_imvec4);
	RING_API_REGISTER("imgui_get_imvec4_x",ring_imgui_get_imvec4_x);
	RING_API_REGISTER("imgui_set_imvec4_x",ring_imgui_set_imvec4_x);
	RING_API_REGISTER("imgui_get_imvec4_y",ring_imgui_get_imvec4_y);
	RING_API_REGISTER("imgui_set_imvec4_y",ring_imgui_set_imvec4_y);
	RING_API_REGISTER("imgui_get_imvec4_z",ring_imgui_get_imvec4_z);
	RING_API_REGISTER("imgui_set_imvec4_z",ring_imgui_set_imvec4_z);
	RING_API_REGISTER("imgui_get_imvec4_w",ring_imgui_get_imvec4_w);
	RING_API_REGISTER("imgui_set_imvec4_w",ring_imgui_set_imvec4_w);
	RING_API_REGISTER("imgui_new_imguistyle",ring_imgui_new_imguistyle);
	RING_API_REGISTER("imgui_new_managed_imguistyle",ring_imgui_new_managed_imguistyle);
	RING_API_REGISTER("imgui_destroy_imguistyle",ring_imgui_destroy_imguistyle);
	RING_API_REGISTER("imgui_get_imguistyle_alpha",ring_imgui_get_imguistyle_Alpha);
	RING_API_REGISTER("imgui_set_imguistyle_alpha",ring_imgui_set_imguistyle_Alpha);
	RING_API_REGISTER("imgui_get_imguistyle_disabledalpha",ring_imgui_get_imguistyle_DisabledAlpha);
	RING_API_REGISTER("imgui_set_imguistyle_disabledalpha",ring_imgui_set_imguistyle_DisabledAlpha);
	RING_API_REGISTER("imgui_get_imguistyle_windowpadding_x",ring_imgui_get_imguistyle_WindowPadding_x);
	RING_API_REGISTER("imgui_set_imguistyle_windowpadding_x",ring_imgui_set_imguistyle_WindowPadding_x);
	RING_API_REGISTER("imgui_get_imguistyle_windowpadding_y",ring_imgui_get_imguistyle_WindowPadding_y);
	RING_API_REGISTER("imgui_set_imguistyle_windowpadding_y",ring_imgui_set_imguistyle_WindowPadding_y);
	RING_API_REGISTER("imgui_get_imguistyle_windowrounding",ring_imgui_get_imguistyle_WindowRounding);
	RING_API_REGISTER("imgui_set_imguistyle_windowrounding",ring_imgui_set_imguistyle_WindowRounding);
	RING_API_REGISTER("imgui_get_imguistyle_windowbordersize",ring_imgui_get_imguistyle_WindowBorderSize);
	RING_API_REGISTER("imgui_set_imguistyle_windowbordersize",ring_imgui_set_imguistyle_WindowBorderSize);
	RING_API_REGISTER("imgui_get_imguistyle_windowminsize_x",ring_imgui_get_imguistyle_WindowMinSize_x);
	RING_API_REGISTER("imgui_set_imguistyle_windowminsize_x",ring_imgui_set_imguistyle_WindowMinSize_x);
	RING_API_REGISTER("imgui_get_imguistyle_windowminsize_y",ring_imgui_get_imguistyle_WindowMinSize_y);
	RING_API_REGISTER("imgui_set_imguistyle_windowminsize_y",ring_imgui_set_imguistyle_WindowMinSize_y);
	RING_API_REGISTER("imgui_get_imguistyle_windowtitlealign_x",ring_imgui_get_imguistyle_WindowTitleAlign_x);
	RING_API_REGISTER("imgui_set_imguistyle_windowtitlealign_x",ring_imgui_set_imguistyle_WindowTitleAlign_x);
	RING_API_REGISTER("imgui_get_imguistyle_windowtitlealign_y",ring_imgui_get_imguistyle_WindowTitleAlign_y);
	RING_API_REGISTER("imgui_set_imguistyle_windowtitlealign_y",ring_imgui_set_imguistyle_WindowTitleAlign_y);
	RING_API_REGISTER("imgui_get_imguistyle_windowmenubuttonposition",ring_imgui_get_imguistyle_WindowMenuButtonPosition);
	RING_API_REGISTER("imgui_set_imguistyle_windowmenubuttonposition",ring_imgui_set_imguistyle_WindowMenuButtonPosition);
	RING_API_REGISTER("imgui_get_imguistyle_childrounding",ring_imgui_get_imguistyle_ChildRounding);
	RING_API_REGISTER("imgui_set_imguistyle_childrounding",ring_imgui_set_imguistyle_ChildRounding);
	RING_API_REGISTER("imgui_get_imguistyle_childbordersize",ring_imgui_get_imguistyle_ChildBorderSize);
	RING_API_REGISTER("imgui_set_imguistyle_childbordersize",ring_imgui_set_imguistyle_ChildBorderSize);
	RING_API_REGISTER("imgui_get_imguistyle_popuprounding",ring_imgui_get_imguistyle_PopupRounding);
	RING_API_REGISTER("imgui_set_imguistyle_popuprounding",ring_imgui_set_imguistyle_PopupRounding);
	RING_API_REGISTER("imgui_get_imguistyle_popupbordersize",ring_imgui_get_imguistyle_PopupBorderSize);
	RING_API_REGISTER("imgui_set_imguistyle_popupbordersize",ring_imgui_set_imguistyle_PopupBorderSize);
	RING_API_REGISTER("imgui_get_imguistyle_framepadding_x",ring_imgui_get_imguistyle_FramePadding_x);
	RING_API_REGISTER("imgui_set_imguistyle_framepadding_x",ring_imgui_set_imguistyle_FramePadding_x);
	RING_API_REGISTER("imgui_get_imguistyle_framepadding_y",ring_imgui_get_imguistyle_FramePadding_y);
	RING_API_REGISTER("imgui_set_imguistyle_framepadding_y",ring_imgui_set_imguistyle_FramePadding_y);
	RING_API_REGISTER("imgui_get_imguistyle_framerounding",ring_imgui_get_imguistyle_FrameRounding);
	RING_API_REGISTER("imgui_set_imguistyle_framerounding",ring_imgui_set_imguistyle_FrameRounding);
	RING_API_REGISTER("imgui_get_imguistyle_framebordersize",ring_imgui_get_imguistyle_FrameBorderSize);
	RING_API_REGISTER("imgui_set_imguistyle_framebordersize",ring_imgui_set_imguistyle_FrameBorderSize);
	RING_API_REGISTER("imgui_get_imguistyle_itemspacing_x",ring_imgui_get_imguistyle_ItemSpacing_x);
	RING_API_REGISTER("imgui_set_imguistyle_itemspacing_x",ring_imgui_set_imguistyle_ItemSpacing_x);
	RING_API_REGISTER("imgui_get_imguistyle_itemspacing_y",ring_imgui_get_imguistyle_ItemSpacing_y);
	RING_API_REGISTER("imgui_set_imguistyle_itemspacing_y",ring_imgui_set_imguistyle_ItemSpacing_y);
	RING_API_REGISTER("imgui_get_imguistyle_iteminnerspacing_x",ring_imgui_get_imguistyle_ItemInnerSpacing_x);
	RING_API_REGISTER("imgui_set_imguistyle_iteminnerspacing_x",ring_imgui_set_imguistyle_ItemInnerSpacing_x);
	RING_API_REGISTER("imgui_get_imguistyle_iteminnerspacing_y",ring_imgui_get_imguistyle_ItemInnerSpacing_y);
	RING_API_REGISTER("imgui_set_imguistyle_iteminnerspacing_y",ring_imgui_set_imguistyle_ItemInnerSpacing_y);
	RING_API_REGISTER("imgui_get_imguistyle_cellpadding_x",ring_imgui_get_imguistyle_CellPadding_x);
	RING_API_REGISTER("imgui_set_imguistyle_cellpadding_x",ring_imgui_set_imguistyle_CellPadding_x);
	RING_API_REGISTER("imgui_get_imguistyle_cellpadding_y",ring_imgui_get_imguistyle_CellPadding_y);
	RING_API_REGISTER("imgui_set_imguistyle_cellpadding_y",ring_imgui_set_imguistyle_CellPadding_y);
	RING_API_REGISTER("imgui_get_imguistyle_touchextrapadding_x",ring_imgui_get_imguistyle_TouchExtraPadding_x);
	RING_API_REGISTER("imgui_set_imguistyle_touchextrapadding_x",ring_imgui_set_imguistyle_TouchExtraPadding_x);
	RING_API_REGISTER("imgui_get_imguistyle_touchextrapadding_y",ring_imgui_get_imguistyle_TouchExtraPadding_y);
	RING_API_REGISTER("imgui_set_imguistyle_touchextrapadding_y",ring_imgui_set_imguistyle_TouchExtraPadding_y);
	RING_API_REGISTER("imgui_get_imguistyle_indentspacing",ring_imgui_get_imguistyle_IndentSpacing);
	RING_API_REGISTER("imgui_set_imguistyle_indentspacing",ring_imgui_set_imguistyle_IndentSpacing);
	RING_API_REGISTER("imgui_get_imguistyle_columnsminspacing",ring_imgui_get_imguistyle_ColumnsMinSpacing);
	RING_API_REGISTER("imgui_set_imguistyle_columnsminspacing",ring_imgui_set_imguistyle_ColumnsMinSpacing);
	RING_API_REGISTER("imgui_get_imguistyle_scrollbarsize",ring_imgui_get_imguistyle_ScrollbarSize);
	RING_API_REGISTER("imgui_set_imguistyle_scrollbarsize",ring_imgui_set_imguistyle_ScrollbarSize);
	RING_API_REGISTER("imgui_get_imguistyle_scrollbarrounding",ring_imgui_get_imguistyle_ScrollbarRounding);
	RING_API_REGISTER("imgui_set_imguistyle_scrollbarrounding",ring_imgui_set_imguistyle_ScrollbarRounding);
	RING_API_REGISTER("imgui_get_imguistyle_grabminsize",ring_imgui_get_imguistyle_GrabMinSize);
	RING_API_REGISTER("imgui_set_imguistyle_grabminsize",ring_imgui_set_imguistyle_GrabMinSize);
	RING_API_REGISTER("imgui_get_imguistyle_grabrounding",ring_imgui_get_imguistyle_GrabRounding);
	RING_API_REGISTER("imgui_set_imguistyle_grabrounding",ring_imgui_set_imguistyle_GrabRounding);
	RING_API_REGISTER("imgui_get_imguistyle_logsliderdeadzone",ring_imgui_get_imguistyle_LogSliderDeadzone);
	RING_API_REGISTER("imgui_set_imguistyle_logsliderdeadzone",ring_imgui_set_imguistyle_LogSliderDeadzone);
	RING_API_REGISTER("imgui_get_imguistyle_tabrounding",ring_imgui_get_imguistyle_TabRounding);
	RING_API_REGISTER("imgui_set_imguistyle_tabrounding",ring_imgui_set_imguistyle_TabRounding);
	RING_API_REGISTER("imgui_get_imguistyle_tabbordersize",ring_imgui_get_imguistyle_TabBorderSize);
	RING_API_REGISTER("imgui_set_imguistyle_tabbordersize",ring_imgui_set_imguistyle_TabBorderSize);
	RING_API_REGISTER("imgui_get_imguistyle_tabminwidthforclosebutton",ring_imgui_get_imguistyle_TabMinWidthForCloseButton);
	RING_API_REGISTER("imgui_set_imguistyle_tabminwidthforclosebutton",ring_imgui_set_imguistyle_TabMinWidthForCloseButton);
	RING_API_REGISTER("imgui_get_imguistyle_colorbuttonposition",ring_imgui_get_imguistyle_ColorButtonPosition);
	RING_API_REGISTER("imgui_set_imguistyle_colorbuttonposition",ring_imgui_set_imguistyle_ColorButtonPosition);
	RING_API_REGISTER("imgui_get_imguistyle_buttontextalign_x",ring_imgui_get_imguistyle_ButtonTextAlign_x);
	RING_API_REGISTER("imgui_set_imguistyle_buttontextalign_x",ring_imgui_set_imguistyle_ButtonTextAlign_x);
	RING_API_REGISTER("imgui_get_imguistyle_buttontextalign_y",ring_imgui_get_imguistyle_ButtonTextAlign_y);
	RING_API_REGISTER("imgui_set_imguistyle_buttontextalign_y",ring_imgui_set_imguistyle_ButtonTextAlign_y);
	RING_API_REGISTER("imgui_get_imguistyle_selectabletextalign_x",ring_imgui_get_imguistyle_SelectableTextAlign_x);
	RING_API_REGISTER("imgui_set_imguistyle_selectabletextalign_x",ring_imgui_set_imguistyle_SelectableTextAlign_x);
	RING_API_REGISTER("imgui_get_imguistyle_selectabletextalign_y",ring_imgui_get_imguistyle_SelectableTextAlign_y);
	RING_API_REGISTER("imgui_set_imguistyle_selectabletextalign_y",ring_imgui_set_imguistyle_SelectableTextAlign_y);
	RING_API_REGISTER("imgui_get_imguistyle_displaywindowpadding_x",ring_imgui_get_imguistyle_DisplayWindowPadding_x);
	RING_API_REGISTER("imgui_set_imguistyle_displaywindowpadding_x",ring_imgui_set_imguistyle_DisplayWindowPadding_x);
	RING_API_REGISTER("imgui_get_imguistyle_displaywindowpadding_y",ring_imgui_get_imguistyle_DisplayWindowPadding_y);
	RING_API_REGISTER("imgui_set_imguistyle_displaywindowpadding_y",ring_imgui_set_imguistyle_DisplayWindowPadding_y);
	RING_API_REGISTER("imgui_get_imguistyle_displaysafeareapadding_x",ring_imgui_get_imguistyle_DisplaySafeAreaPadding_x);
	RING_API_REGISTER("imgui_set_imguistyle_displaysafeareapadding_x",ring_imgui_set_imguistyle_DisplaySafeAreaPadding_x);
	RING_API_REGISTER("imgui_get_imguistyle_displaysafeareapadding_y",ring_imgui_get_imguistyle_DisplaySafeAreaPadding_y);
	RING_API_REGISTER("imgui_set_imguistyle_displaysafeareapadding_y",ring_imgui_set_imguistyle_DisplaySafeAreaPadding_y);
	RING_API_REGISTER("imgui_get_imguistyle_mousecursorscale",ring_imgui_get_imguistyle_MouseCursorScale);
	RING_API_REGISTER("imgui_set_imguistyle_mousecursorscale",ring_imgui_set_imguistyle_MouseCursorScale);
	RING_API_REGISTER("imgui_get_imguistyle_antialiasedlines",ring_imgui_get_imguistyle_AntiAliasedLines);
	RING_API_REGISTER("imgui_set_imguistyle_antialiasedlines",ring_imgui_set_imguistyle_AntiAliasedLines);
	RING_API_REGISTER("imgui_get_imguistyle_antialiasedlinesusetex",ring_imgui_get_imguistyle_AntiAliasedLinesUseTex);
	RING_API_REGISTER("imgui_set_imguistyle_antialiasedlinesusetex",ring_imgui_set_imguistyle_AntiAliasedLinesUseTex);
	RING_API_REGISTER("imgui_get_imguistyle_antialiasedfill",ring_imgui_get_imguistyle_AntiAliasedFill);
	RING_API_REGISTER("imgui_set_imguistyle_antialiasedfill",ring_imgui_set_imguistyle_AntiAliasedFill);
	RING_API_REGISTER("imgui_get_imguistyle_curvetessellationtol",ring_imgui_get_imguistyle_CurveTessellationTol);
	RING_API_REGISTER("imgui_set_imguistyle_curvetessellationtol",ring_imgui_set_imguistyle_CurveTessellationTol);
	RING_API_REGISTER("imgui_get_imguistyle_circletessellationmaxerror",ring_imgui_get_imguistyle_CircleTessellationMaxError);
	RING_API_REGISTER("imgui_set_imguistyle_circletessellationmaxerror",ring_imgui_set_imguistyle_CircleTessellationMaxError);
	RING_API_REGISTER("imgui_new_imguikeydata",ring_imgui_new_imguikeydata);
	RING_API_REGISTER("imgui_new_managed_imguikeydata",ring_imgui_new_managed_imguikeydata);
	RING_API_REGISTER("imgui_destroy_imguikeydata",ring_imgui_destroy_imguikeydata);
	RING_API_REGISTER("imgui_get_imguikeydata_down",ring_imgui_get_imguikeydata_Down);
	RING_API_REGISTER("imgui_set_imguikeydata_down",ring_imgui_set_imguikeydata_Down);
	RING_API_REGISTER("imgui_get_imguikeydata_downduration",ring_imgui_get_imguikeydata_DownDuration);
	RING_API_REGISTER("imgui_set_imguikeydata_downduration",ring_imgui_set_imguikeydata_DownDuration);
	RING_API_REGISTER("imgui_get_imguikeydata_downdurationprev",ring_imgui_get_imguikeydata_DownDurationPrev);
	RING_API_REGISTER("imgui_set_imguikeydata_downdurationprev",ring_imgui_set_imguikeydata_DownDurationPrev);
	RING_API_REGISTER("imgui_get_imguikeydata_analogvalue",ring_imgui_get_imguikeydata_AnalogValue);
	RING_API_REGISTER("imgui_set_imguikeydata_analogvalue",ring_imgui_set_imguikeydata_AnalogValue);
	RING_API_REGISTER("imgui_new_imguiio",ring_imgui_new_imguiio);
	RING_API_REGISTER("imgui_new_managed_imguiio",ring_imgui_new_managed_imguiio);
	RING_API_REGISTER("imgui_destroy_imguiio",ring_imgui_destroy_imguiio);
	RING_API_REGISTER("imgui_get_imguiio_configflags",ring_imgui_get_imguiio_ConfigFlags);
	RING_API_REGISTER("imgui_set_imguiio_configflags",ring_imgui_set_imguiio_ConfigFlags);
	RING_API_REGISTER("imgui_get_imguiio_backendflags",ring_imgui_get_imguiio_BackendFlags);
	RING_API_REGISTER("imgui_set_imguiio_backendflags",ring_imgui_set_imguiio_BackendFlags);
	RING_API_REGISTER("imgui_get_imguiio_displaysize_x",ring_imgui_get_imguiio_DisplaySize_x);
	RING_API_REGISTER("imgui_set_imguiio_displaysize_x",ring_imgui_set_imguiio_DisplaySize_x);
	RING_API_REGISTER("imgui_get_imguiio_displaysize_y",ring_imgui_get_imguiio_DisplaySize_y);
	RING_API_REGISTER("imgui_set_imguiio_displaysize_y",ring_imgui_set_imguiio_DisplaySize_y);
	RING_API_REGISTER("imgui_get_imguiio_deltatime",ring_imgui_get_imguiio_DeltaTime);
	RING_API_REGISTER("imgui_set_imguiio_deltatime",ring_imgui_set_imguiio_DeltaTime);
	RING_API_REGISTER("imgui_get_imguiio_inisavingrate",ring_imgui_get_imguiio_IniSavingRate);
	RING_API_REGISTER("imgui_set_imguiio_inisavingrate",ring_imgui_set_imguiio_IniSavingRate);
	RING_API_REGISTER("imgui_get_imguiio_inifilename",ring_imgui_get_imguiio_IniFilename);
	RING_API_REGISTER("imgui_set_imguiio_inifilename",ring_imgui_set_imguiio_IniFilename);
	RING_API_REGISTER("imgui_get_imguiio_logfilename",ring_imgui_get_imguiio_LogFilename);
	RING_API_REGISTER("imgui_set_imguiio_logfilename",ring_imgui_set_imguiio_LogFilename);
	RING_API_REGISTER("imgui_get_imguiio_mousedoubleclicktime",ring_imgui_get_imguiio_MouseDoubleClickTime);
	RING_API_REGISTER("imgui_set_imguiio_mousedoubleclicktime",ring_imgui_set_imguiio_MouseDoubleClickTime);
	RING_API_REGISTER("imgui_get_imguiio_mousedoubleclickmaxdist",ring_imgui_get_imguiio_MouseDoubleClickMaxDist);
	RING_API_REGISTER("imgui_set_imguiio_mousedoubleclickmaxdist",ring_imgui_set_imguiio_MouseDoubleClickMaxDist);
	RING_API_REGISTER("imgui_get_imguiio_mousedragthreshold",ring_imgui_get_imguiio_MouseDragThreshold);
	RING_API_REGISTER("imgui_set_imguiio_mousedragthreshold",ring_imgui_set_imguiio_MouseDragThreshold);
	RING_API_REGISTER("imgui_get_imguiio_keyrepeatdelay",ring_imgui_get_imguiio_KeyRepeatDelay);
	RING_API_REGISTER("imgui_set_imguiio_keyrepeatdelay",ring_imgui_set_imguiio_KeyRepeatDelay);
	RING_API_REGISTER("imgui_get_imguiio_keyrepeatrate",ring_imgui_get_imguiio_KeyRepeatRate);
	RING_API_REGISTER("imgui_set_imguiio_keyrepeatrate",ring_imgui_set_imguiio_KeyRepeatRate);
	RING_API_REGISTER("imgui_get_imguiio_userdata",ring_imgui_get_imguiio_UserData);
	RING_API_REGISTER("imgui_set_imguiio_userdata",ring_imgui_set_imguiio_UserData);
	RING_API_REGISTER("imgui_get_imguiio_fonts",ring_imgui_get_imguiio_Fonts);
	RING_API_REGISTER("imgui_set_imguiio_fonts",ring_imgui_set_imguiio_Fonts);
	RING_API_REGISTER("imgui_get_imguiio_fontglobalscale",ring_imgui_get_imguiio_FontGlobalScale);
	RING_API_REGISTER("imgui_set_imguiio_fontglobalscale",ring_imgui_set_imguiio_FontGlobalScale);
	RING_API_REGISTER("imgui_get_imguiio_fontallowuserscaling",ring_imgui_get_imguiio_FontAllowUserScaling);
	RING_API_REGISTER("imgui_set_imguiio_fontallowuserscaling",ring_imgui_set_imguiio_FontAllowUserScaling);
	RING_API_REGISTER("imgui_get_imguiio_fontdefault",ring_imgui_get_imguiio_FontDefault);
	RING_API_REGISTER("imgui_set_imguiio_fontdefault",ring_imgui_set_imguiio_FontDefault);
	RING_API_REGISTER("imgui_get_imguiio_displayframebufferscale_x",ring_imgui_get_imguiio_DisplayFramebufferScale_x);
	RING_API_REGISTER("imgui_set_imguiio_displayframebufferscale_x",ring_imgui_set_imguiio_DisplayFramebufferScale_x);
	RING_API_REGISTER("imgui_get_imguiio_displayframebufferscale_y",ring_imgui_get_imguiio_DisplayFramebufferScale_y);
	RING_API_REGISTER("imgui_set_imguiio_displayframebufferscale_y",ring_imgui_set_imguiio_DisplayFramebufferScale_y);
	RING_API_REGISTER("imgui_get_imguiio_configdockingnosplit",ring_imgui_get_imguiio_ConfigDockingNoSplit);
	RING_API_REGISTER("imgui_set_imguiio_configdockingnosplit",ring_imgui_set_imguiio_ConfigDockingNoSplit);
	RING_API_REGISTER("imgui_get_imguiio_configdockingwithshift",ring_imgui_get_imguiio_ConfigDockingWithShift);
	RING_API_REGISTER("imgui_set_imguiio_configdockingwithshift",ring_imgui_set_imguiio_ConfigDockingWithShift);
	RING_API_REGISTER("imgui_get_imguiio_configdockingalwaystabbar",ring_imgui_get_imguiio_ConfigDockingAlwaysTabBar);
	RING_API_REGISTER("imgui_set_imguiio_configdockingalwaystabbar",ring_imgui_set_imguiio_ConfigDockingAlwaysTabBar);
	RING_API_REGISTER("imgui_get_imguiio_configdockingtransparentpayload",ring_imgui_get_imguiio_ConfigDockingTransparentPayload);
	RING_API_REGISTER("imgui_set_imguiio_configdockingtransparentpayload",ring_imgui_set_imguiio_ConfigDockingTransparentPayload);
	RING_API_REGISTER("imgui_get_imguiio_configviewportsnoautomerge",ring_imgui_get_imguiio_ConfigViewportsNoAutoMerge);
	RING_API_REGISTER("imgui_set_imguiio_configviewportsnoautomerge",ring_imgui_set_imguiio_ConfigViewportsNoAutoMerge);
	RING_API_REGISTER("imgui_get_imguiio_configviewportsnotaskbaricon",ring_imgui_get_imguiio_ConfigViewportsNoTaskBarIcon);
	RING_API_REGISTER("imgui_set_imguiio_configviewportsnotaskbaricon",ring_imgui_set_imguiio_ConfigViewportsNoTaskBarIcon);
	RING_API_REGISTER("imgui_get_imguiio_configviewportsnodecoration",ring_imgui_get_imguiio_ConfigViewportsNoDecoration);
	RING_API_REGISTER("imgui_set_imguiio_configviewportsnodecoration",ring_imgui_set_imguiio_ConfigViewportsNoDecoration);
	RING_API_REGISTER("imgui_get_imguiio_configviewportsnodefaultparent",ring_imgui_get_imguiio_ConfigViewportsNoDefaultParent);
	RING_API_REGISTER("imgui_set_imguiio_configviewportsnodefaultparent",ring_imgui_set_imguiio_ConfigViewportsNoDefaultParent);
	RING_API_REGISTER("imgui_get_imguiio_mousedrawcursor",ring_imgui_get_imguiio_MouseDrawCursor);
	RING_API_REGISTER("imgui_set_imguiio_mousedrawcursor",ring_imgui_set_imguiio_MouseDrawCursor);
	RING_API_REGISTER("imgui_get_imguiio_configmacosxbehaviors",ring_imgui_get_imguiio_ConfigMacOSXBehaviors);
	RING_API_REGISTER("imgui_set_imguiio_configmacosxbehaviors",ring_imgui_set_imguiio_ConfigMacOSXBehaviors);
	RING_API_REGISTER("imgui_get_imguiio_configinputtrickleeventqueue",ring_imgui_get_imguiio_ConfigInputTrickleEventQueue);
	RING_API_REGISTER("imgui_set_imguiio_configinputtrickleeventqueue",ring_imgui_set_imguiio_ConfigInputTrickleEventQueue);
	RING_API_REGISTER("imgui_get_imguiio_configinputtextcursorblink",ring_imgui_get_imguiio_ConfigInputTextCursorBlink);
	RING_API_REGISTER("imgui_set_imguiio_configinputtextcursorblink",ring_imgui_set_imguiio_ConfigInputTextCursorBlink);
	RING_API_REGISTER("imgui_get_imguiio_configdragclicktoinputtext",ring_imgui_get_imguiio_ConfigDragClickToInputText);
	RING_API_REGISTER("imgui_set_imguiio_configdragclicktoinputtext",ring_imgui_set_imguiio_ConfigDragClickToInputText);
	RING_API_REGISTER("imgui_get_imguiio_configwindowsresizefromedges",ring_imgui_get_imguiio_ConfigWindowsResizeFromEdges);
	RING_API_REGISTER("imgui_set_imguiio_configwindowsresizefromedges",ring_imgui_set_imguiio_ConfigWindowsResizeFromEdges);
	RING_API_REGISTER("imgui_get_imguiio_configwindowsmovefromtitlebaronly",ring_imgui_get_imguiio_ConfigWindowsMoveFromTitleBarOnly);
	RING_API_REGISTER("imgui_set_imguiio_configwindowsmovefromtitlebaronly",ring_imgui_set_imguiio_ConfigWindowsMoveFromTitleBarOnly);
	RING_API_REGISTER("imgui_get_imguiio_configmemorycompacttimer",ring_imgui_get_imguiio_ConfigMemoryCompactTimer);
	RING_API_REGISTER("imgui_set_imguiio_configmemorycompacttimer",ring_imgui_set_imguiio_ConfigMemoryCompactTimer);
	RING_API_REGISTER("imgui_get_imguiio_backendplatformname",ring_imgui_get_imguiio_BackendPlatformName);
	RING_API_REGISTER("imgui_set_imguiio_backendplatformname",ring_imgui_set_imguiio_BackendPlatformName);
	RING_API_REGISTER("imgui_get_imguiio_backendrenderername",ring_imgui_get_imguiio_BackendRendererName);
	RING_API_REGISTER("imgui_set_imguiio_backendrenderername",ring_imgui_set_imguiio_BackendRendererName);
	RING_API_REGISTER("imgui_get_imguiio_backendplatformuserdata",ring_imgui_get_imguiio_BackendPlatformUserData);
	RING_API_REGISTER("imgui_set_imguiio_backendplatformuserdata",ring_imgui_set_imguiio_BackendPlatformUserData);
	RING_API_REGISTER("imgui_get_imguiio_backendrendereruserdata",ring_imgui_get_imguiio_BackendRendererUserData);
	RING_API_REGISTER("imgui_set_imguiio_backendrendereruserdata",ring_imgui_set_imguiio_BackendRendererUserData);
	RING_API_REGISTER("imgui_get_imguiio_backendlanguageuserdata",ring_imgui_get_imguiio_BackendLanguageUserData);
	RING_API_REGISTER("imgui_set_imguiio_backendlanguageuserdata",ring_imgui_set_imguiio_BackendLanguageUserData);
	RING_API_REGISTER("imgui_new_imguiinputtextcallbackdata",ring_imgui_new_imguiinputtextcallbackdata);
	RING_API_REGISTER("imgui_new_managed_imguiinputtextcallbackdata",ring_imgui_new_managed_imguiinputtextcallbackdata);
	RING_API_REGISTER("imgui_destroy_imguiinputtextcallbackdata",ring_imgui_destroy_imguiinputtextcallbackdata);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_eventflag",ring_imgui_get_imguiinputtextcallbackdata_EventFlag);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_eventflag",ring_imgui_set_imguiinputtextcallbackdata_EventFlag);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_flags",ring_imgui_get_imguiinputtextcallbackdata_Flags);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_flags",ring_imgui_set_imguiinputtextcallbackdata_Flags);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_userdata",ring_imgui_get_imguiinputtextcallbackdata_UserData);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_userdata",ring_imgui_set_imguiinputtextcallbackdata_UserData);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_eventchar",ring_imgui_get_imguiinputtextcallbackdata_EventChar);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_eventchar",ring_imgui_set_imguiinputtextcallbackdata_EventChar);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_eventkey",ring_imgui_get_imguiinputtextcallbackdata_EventKey);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_eventkey",ring_imgui_set_imguiinputtextcallbackdata_EventKey);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_buf",ring_imgui_get_imguiinputtextcallbackdata_Buf);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_buf",ring_imgui_set_imguiinputtextcallbackdata_Buf);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_buftextlen",ring_imgui_get_imguiinputtextcallbackdata_BufTextLen);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_buftextlen",ring_imgui_set_imguiinputtextcallbackdata_BufTextLen);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_bufsize",ring_imgui_get_imguiinputtextcallbackdata_BufSize);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_bufsize",ring_imgui_set_imguiinputtextcallbackdata_BufSize);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_bufdirty",ring_imgui_get_imguiinputtextcallbackdata_BufDirty);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_bufdirty",ring_imgui_set_imguiinputtextcallbackdata_BufDirty);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_cursorpos",ring_imgui_get_imguiinputtextcallbackdata_CursorPos);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_cursorpos",ring_imgui_set_imguiinputtextcallbackdata_CursorPos);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_selectionstart",ring_imgui_get_imguiinputtextcallbackdata_SelectionStart);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_selectionstart",ring_imgui_set_imguiinputtextcallbackdata_SelectionStart);
	RING_API_REGISTER("imgui_get_imguiinputtextcallbackdata_selectionend",ring_imgui_get_imguiinputtextcallbackdata_SelectionEnd);
	RING_API_REGISTER("imgui_set_imguiinputtextcallbackdata_selectionend",ring_imgui_set_imguiinputtextcallbackdata_SelectionEnd);
	RING_API_REGISTER("imgui_new_imguisizecallbackdata",ring_imgui_new_imguisizecallbackdata);
	RING_API_REGISTER("imgui_new_managed_imguisizecallbackdata",ring_imgui_new_managed_imguisizecallbackdata);
	RING_API_REGISTER("imgui_destroy_imguisizecallbackdata",ring_imgui_destroy_imguisizecallbackdata);
	RING_API_REGISTER("imgui_get_imguisizecallbackdata_userdata",ring_imgui_get_imguisizecallbackdata_UserData);
	RING_API_REGISTER("imgui_set_imguisizecallbackdata_userdata",ring_imgui_set_imguisizecallbackdata_UserData);
	RING_API_REGISTER("imgui_get_imguisizecallbackdata_pos_x",ring_imgui_get_imguisizecallbackdata_Pos_x);
	RING_API_REGISTER("imgui_set_imguisizecallbackdata_pos_x",ring_imgui_set_imguisizecallbackdata_Pos_x);
	RING_API_REGISTER("imgui_get_imguisizecallbackdata_pos_y",ring_imgui_get_imguisizecallbackdata_Pos_y);
	RING_API_REGISTER("imgui_set_imguisizecallbackdata_pos_y",ring_imgui_set_imguisizecallbackdata_Pos_y);
	RING_API_REGISTER("imgui_get_imguisizecallbackdata_currentsize_x",ring_imgui_get_imguisizecallbackdata_CurrentSize_x);
	RING_API_REGISTER("imgui_set_imguisizecallbackdata_currentsize_x",ring_imgui_set_imguisizecallbackdata_CurrentSize_x);
	RING_API_REGISTER("imgui_get_imguisizecallbackdata_currentsize_y",ring_imgui_get_imguisizecallbackdata_CurrentSize_y);
	RING_API_REGISTER("imgui_set_imguisizecallbackdata_currentsize_y",ring_imgui_set_imguisizecallbackdata_CurrentSize_y);
	RING_API_REGISTER("imgui_get_imguisizecallbackdata_desiredsize_x",ring_imgui_get_imguisizecallbackdata_DesiredSize_x);
	RING_API_REGISTER("imgui_set_imguisizecallbackdata_desiredsize_x",ring_imgui_set_imguisizecallbackdata_DesiredSize_x);
	RING_API_REGISTER("imgui_get_imguisizecallbackdata_desiredsize_y",ring_imgui_get_imguisizecallbackdata_DesiredSize_y);
	RING_API_REGISTER("imgui_set_imguisizecallbackdata_desiredsize_y",ring_imgui_set_imguisizecallbackdata_DesiredSize_y);
	RING_API_REGISTER("imgui_new_imguiwindowclass",ring_imgui_new_imguiwindowclass);
	RING_API_REGISTER("imgui_new_managed_imguiwindowclass",ring_imgui_new_managed_imguiwindowclass);
	RING_API_REGISTER("imgui_destroy_imguiwindowclass",ring_imgui_destroy_imguiwindowclass);
	RING_API_REGISTER("imgui_get_imguiwindowclass_classid",ring_imgui_get_imguiwindowclass_ClassId);
	RING_API_REGISTER("imgui_set_imguiwindowclass_classid",ring_imgui_set_imguiwindowclass_ClassId);
	RING_API_REGISTER("imgui_get_imguiwindowclass_parentviewportid",ring_imgui_get_imguiwindowclass_ParentViewportId);
	RING_API_REGISTER("imgui_set_imguiwindowclass_parentviewportid",ring_imgui_set_imguiwindowclass_ParentViewportId);
	RING_API_REGISTER("imgui_get_imguiwindowclass_viewportflagsoverrideset",ring_imgui_get_imguiwindowclass_ViewportFlagsOverrideSet);
	RING_API_REGISTER("imgui_set_imguiwindowclass_viewportflagsoverrideset",ring_imgui_set_imguiwindowclass_ViewportFlagsOverrideSet);
	RING_API_REGISTER("imgui_get_imguiwindowclass_viewportflagsoverrideclear",ring_imgui_get_imguiwindowclass_ViewportFlagsOverrideClear);
	RING_API_REGISTER("imgui_set_imguiwindowclass_viewportflagsoverrideclear",ring_imgui_set_imguiwindowclass_ViewportFlagsOverrideClear);
	RING_API_REGISTER("imgui_get_imguiwindowclass_tabitemflagsoverrideset",ring_imgui_get_imguiwindowclass_TabItemFlagsOverrideSet);
	RING_API_REGISTER("imgui_set_imguiwindowclass_tabitemflagsoverrideset",ring_imgui_set_imguiwindowclass_TabItemFlagsOverrideSet);
	RING_API_REGISTER("imgui_get_imguiwindowclass_docknodeflagsoverrideset",ring_imgui_get_imguiwindowclass_DockNodeFlagsOverrideSet);
	RING_API_REGISTER("imgui_set_imguiwindowclass_docknodeflagsoverrideset",ring_imgui_set_imguiwindowclass_DockNodeFlagsOverrideSet);
	RING_API_REGISTER("imgui_get_imguiwindowclass_dockingalwaystabbar",ring_imgui_get_imguiwindowclass_DockingAlwaysTabBar);
	RING_API_REGISTER("imgui_set_imguiwindowclass_dockingalwaystabbar",ring_imgui_set_imguiwindowclass_DockingAlwaysTabBar);
	RING_API_REGISTER("imgui_get_imguiwindowclass_dockingallowunclassed",ring_imgui_get_imguiwindowclass_DockingAllowUnclassed);
	RING_API_REGISTER("imgui_set_imguiwindowclass_dockingallowunclassed",ring_imgui_set_imguiwindowclass_DockingAllowUnclassed);
	RING_API_REGISTER("imgui_new_imguipayload",ring_imgui_new_imguipayload);
	RING_API_REGISTER("imgui_new_managed_imguipayload",ring_imgui_new_managed_imguipayload);
	RING_API_REGISTER("imgui_destroy_imguipayload",ring_imgui_destroy_imguipayload);
	RING_API_REGISTER("imgui_new_imguitablecolumnsortspecs",ring_imgui_new_imguitablecolumnsortspecs);
	RING_API_REGISTER("imgui_new_managed_imguitablecolumnsortspecs",ring_imgui_new_managed_imguitablecolumnsortspecs);
	RING_API_REGISTER("imgui_destroy_imguitablecolumnsortspecs",ring_imgui_destroy_imguitablecolumnsortspecs);
	RING_API_REGISTER("imgui_new_imguitablesortspecs",ring_imgui_new_imguitablesortspecs);
	RING_API_REGISTER("imgui_new_managed_imguitablesortspecs",ring_imgui_new_managed_imguitablesortspecs);
	RING_API_REGISTER("imgui_destroy_imguitablesortspecs",ring_imgui_destroy_imguitablesortspecs);
	RING_API_REGISTER("imgui_get_imguitablesortspecs_specs",ring_imgui_get_imguitablesortspecs_Specs);
	RING_API_REGISTER("imgui_set_imguitablesortspecs_specs",ring_imgui_set_imguitablesortspecs_Specs);
	RING_API_REGISTER("imgui_get_imguitablesortspecs_specscount",ring_imgui_get_imguitablesortspecs_SpecsCount);
	RING_API_REGISTER("imgui_set_imguitablesortspecs_specscount",ring_imgui_set_imguitablesortspecs_SpecsCount);
	RING_API_REGISTER("imgui_get_imguitablesortspecs_specsdirty",ring_imgui_get_imguitablesortspecs_SpecsDirty);
	RING_API_REGISTER("imgui_set_imguitablesortspecs_specsdirty",ring_imgui_set_imguitablesortspecs_SpecsDirty);
	RING_API_REGISTER("imgui_new_imguionceuponaframe",ring_imgui_new_imguionceuponaframe);
	RING_API_REGISTER("imgui_new_managed_imguionceuponaframe",ring_imgui_new_managed_imguionceuponaframe);
	RING_API_REGISTER("imgui_destroy_imguionceuponaframe",ring_imgui_destroy_imguionceuponaframe);
	RING_API_REGISTER("imgui_new_imguitextfilter",ring_imgui_new_imguitextfilter);
	RING_API_REGISTER("imgui_new_managed_imguitextfilter",ring_imgui_new_managed_imguitextfilter);
	RING_API_REGISTER("imgui_destroy_imguitextfilter",ring_imgui_destroy_imguitextfilter);
	RING_API_REGISTER("imgui_new_imguitextbuffer",ring_imgui_new_imguitextbuffer);
	RING_API_REGISTER("imgui_new_managed_imguitextbuffer",ring_imgui_new_managed_imguitextbuffer);
	RING_API_REGISTER("imgui_destroy_imguitextbuffer",ring_imgui_destroy_imguitextbuffer);
	RING_API_REGISTER("imgui_new_imguistorage",ring_imgui_new_imguistorage);
	RING_API_REGISTER("imgui_new_managed_imguistorage",ring_imgui_new_managed_imguistorage);
	RING_API_REGISTER("imgui_destroy_imguistorage",ring_imgui_destroy_imguistorage);
	RING_API_REGISTER("imgui_new_imguilistclipper",ring_imgui_new_imguilistclipper);
	RING_API_REGISTER("imgui_new_managed_imguilistclipper",ring_imgui_new_managed_imguilistclipper);
	RING_API_REGISTER("imgui_destroy_imguilistclipper",ring_imgui_destroy_imguilistclipper);
	RING_API_REGISTER("imgui_new_imcolor",ring_imgui_new_imcolor);
	RING_API_REGISTER("imgui_new_managed_imcolor",ring_imgui_new_managed_imcolor);
	RING_API_REGISTER("imgui_destroy_imcolor",ring_imgui_destroy_imcolor);
	RING_API_REGISTER("imgui_new_imdrawcmd",ring_imgui_new_imdrawcmd);
	RING_API_REGISTER("imgui_new_managed_imdrawcmd",ring_imgui_new_managed_imdrawcmd);
	RING_API_REGISTER("imgui_destroy_imdrawcmd",ring_imgui_destroy_imdrawcmd);
	RING_API_REGISTER("imgui_new_imdrawvert",ring_imgui_new_imdrawvert);
	RING_API_REGISTER("imgui_new_managed_imdrawvert",ring_imgui_new_managed_imdrawvert);
	RING_API_REGISTER("imgui_destroy_imdrawvert",ring_imgui_destroy_imdrawvert);
	RING_API_REGISTER("imgui_new_imdrawcmdheader",ring_imgui_new_imdrawcmdheader);
	RING_API_REGISTER("imgui_new_managed_imdrawcmdheader",ring_imgui_new_managed_imdrawcmdheader);
	RING_API_REGISTER("imgui_destroy_imdrawcmdheader",ring_imgui_destroy_imdrawcmdheader);
	RING_API_REGISTER("imgui_new_imdrawchannel",ring_imgui_new_imdrawchannel);
	RING_API_REGISTER("imgui_new_managed_imdrawchannel",ring_imgui_new_managed_imdrawchannel);
	RING_API_REGISTER("imgui_destroy_imdrawchannel",ring_imgui_destroy_imdrawchannel);
	RING_API_REGISTER("imgui_new_imdrawlistsplitter",ring_imgui_new_imdrawlistsplitter);
	RING_API_REGISTER("imgui_new_managed_imdrawlistsplitter",ring_imgui_new_managed_imdrawlistsplitter);
	RING_API_REGISTER("imgui_destroy_imdrawlistsplitter",ring_imgui_destroy_imdrawlistsplitter);
	RING_API_REGISTER("imgui_new_imdrawlist",ring_imgui_new_imdrawlist);
	RING_API_REGISTER("imgui_new_managed_imdrawlist",ring_imgui_new_managed_imdrawlist);
	RING_API_REGISTER("imgui_destroy_imdrawlist",ring_imgui_destroy_imdrawlist);
	RING_API_REGISTER("imgui_new_imdrawdata",ring_imgui_new_imdrawdata);
	RING_API_REGISTER("imgui_new_managed_imdrawdata",ring_imgui_new_managed_imdrawdata);
	RING_API_REGISTER("imgui_destroy_imdrawdata",ring_imgui_destroy_imdrawdata);
	RING_API_REGISTER("imgui_new_imfontconfig",ring_imgui_new_imfontconfig);
	RING_API_REGISTER("imgui_new_managed_imfontconfig",ring_imgui_new_managed_imfontconfig);
	RING_API_REGISTER("imgui_destroy_imfontconfig",ring_imgui_destroy_imfontconfig);
	RING_API_REGISTER("imgui_new_imfontglyph",ring_imgui_new_imfontglyph);
	RING_API_REGISTER("imgui_new_managed_imfontglyph",ring_imgui_new_managed_imfontglyph);
	RING_API_REGISTER("imgui_destroy_imfontglyph",ring_imgui_destroy_imfontglyph);
	RING_API_REGISTER("imgui_new_imfontglyphrangesbuilder",ring_imgui_new_imfontglyphrangesbuilder);
	RING_API_REGISTER("imgui_new_managed_imfontglyphrangesbuilder",ring_imgui_new_managed_imfontglyphrangesbuilder);
	RING_API_REGISTER("imgui_destroy_imfontglyphrangesbuilder",ring_imgui_destroy_imfontglyphrangesbuilder);
	RING_API_REGISTER("imgui_new_imfontatlascustomrect",ring_imgui_new_imfontatlascustomrect);
	RING_API_REGISTER("imgui_new_managed_imfontatlascustomrect",ring_imgui_new_managed_imfontatlascustomrect);
	RING_API_REGISTER("imgui_destroy_imfontatlascustomrect",ring_imgui_destroy_imfontatlascustomrect);
	RING_API_REGISTER("imgui_new_imfontatlas",ring_imgui_new_imfontatlas);
	RING_API_REGISTER("imgui_new_managed_imfontatlas",ring_imgui_new_managed_imfontatlas);
	RING_API_REGISTER("imgui_destroy_imfontatlas",ring_imgui_destroy_imfontatlas);
	RING_API_REGISTER("imgui_new_imfont",ring_imgui_new_imfont);
	RING_API_REGISTER("imgui_new_managed_imfont",ring_imgui_new_managed_imfont);
	RING_API_REGISTER("imgui_destroy_imfont",ring_imgui_destroy_imfont);
	RING_API_REGISTER("imgui_new_imguiviewport",ring_imgui_new_imguiviewport);
	RING_API_REGISTER("imgui_new_managed_imguiviewport",ring_imgui_new_managed_imguiviewport);
	RING_API_REGISTER("imgui_destroy_imguiviewport",ring_imgui_destroy_imguiviewport);
	RING_API_REGISTER("imgui_new_imguiplatformio",ring_imgui_new_imguiplatformio);
	RING_API_REGISTER("imgui_new_managed_imguiplatformio",ring_imgui_new_managed_imguiplatformio);
	RING_API_REGISTER("imgui_destroy_imguiplatformio",ring_imgui_destroy_imguiplatformio);
	RING_API_REGISTER("imgui_new_imguiplatformmonitor",ring_imgui_new_imguiplatformmonitor);
	RING_API_REGISTER("imgui_new_managed_imguiplatformmonitor",ring_imgui_new_managed_imguiplatformmonitor);
	RING_API_REGISTER("imgui_destroy_imguiplatformmonitor",ring_imgui_destroy_imguiplatformmonitor);
	RING_API_REGISTER("imgui_new_imguiplatformimedata",ring_imgui_new_imguiplatformimedata);
	RING_API_REGISTER("imgui_new_managed_imguiplatformimedata",ring_imgui_new_managed_imguiplatformimedata);
	RING_API_REGISTER("imgui_destroy_imguiplatformimedata",ring_imgui_destroy_imguiplatformimedata);
}

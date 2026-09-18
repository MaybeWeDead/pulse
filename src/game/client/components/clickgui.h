/* Pulse ClickGUI component */
#ifndef GAME_CLIENT_COMPONENTS_CLICKGUI_H
#define GAME_CLIENT_COMPONENTS_CLICKGUI_H

#include <atomic>

#include <game/client/component.h>

class CClickGui : public CComponent
{
public:
	int Sizeof() const override { return sizeof(*this); }
	bool OnInput(const IInput::CEvent &Event) override;

	// Thread-safe: read from the render thread (Cmd_Swap), written from the game thread (OnInput)
	static std::atomic<bool> ms_IsOpen;
};

#endif

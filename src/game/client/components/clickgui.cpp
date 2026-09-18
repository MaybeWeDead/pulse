#include "clickgui.h"

#include <engine/keys.h>

std::atomic<bool> CClickGui::ms_IsOpen{false};

bool CClickGui::OnInput(const IInput::CEvent &Event)
{
	if(Event.m_Flags & IInput::FLAG_PRESS && Event.m_Key == KEY_RSHIFT)
	{
		ms_IsOpen = !ms_IsOpen;
		return true;
	}
	return false;
}

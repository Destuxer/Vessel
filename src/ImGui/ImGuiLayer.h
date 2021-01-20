#pragma once

#include "Core/Layer.h"
#include "Events/MouseEvent.h"
namespace Vessel {

    class VSL_API ImGuiLayer : public Layer{
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach();
        void OnDetach();
        void OnUpdate();
        void OnEvent(Event& event);
    private:
        void OnMouseButtonPressedEvent(MouseButtonPressedEvent& e);
        void OnMouseButtonReleasedEvent(MouseButtonReleasedEvent& e);
        void OnMouseMovedEvent(MouseMovedEvent& e);
        void OnMouseScrolledEvent(MouseScrolledEvent& e);

    private:
        float m_Time = 0.0f;
    };
}
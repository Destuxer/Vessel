#pragma once

#include "Events/Event.h"
#include "Events/ApplicationEvent.h"
#include "Base.h"
#include "Window.h"
#include "LayerStack.h"

namespace Vessel {
    class VSL_API Application {
    public:
        Application();
        virtual ~Application();

        void Run();

        void OnEvent(Event& e);

        void PushLayer(Layer* layer);
        void PushOverlay(Layer* overlay);

    private:
        bool OnWindowClose(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
        LayerStack m_LayerStack;
    };
    //To be defined in client
    Application* CreateApplication();
}
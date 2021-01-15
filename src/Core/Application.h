#pragma once

#include "Base.h"
#include "Events/Event.h"
#include "Window.h"

namespace Vessel {
    class VSL_API Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };
    //To be defined in client
    Application* CreateApplication();
}
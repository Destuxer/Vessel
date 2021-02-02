#include "Core/Application.h"
#include "pch.h"
#include "PlatformInput.h"

#include <GLFW/glfw3.h>

namespace Vessel {

    Input* Input::s_Instance = new PlatformInput;

    bool PlatformInput::IsKeyPressedImpl(int keycode){
        auto window = static_cast<GLFWwindow*>(Application::Get().GetWindow().GetNativeWindow());

        auto state = glfwGetKey(window,keycode);
        return state == GLFW_PRESS || state == GLFW_REPEAT;
    }
    bool PlatformInput::IsMouseButtonPressedImpl(int button) {
        auto window = static_cast<GLFWwindow*>(Application::Get().GetWindow().GetNativeWindow());
        auto state = glfwGetMouseButton(window,button);
        return state == GLFW_PRESS;
    }
    std::pair<float,float>PlatformInput::GetMousePositionImpl(){
        auto window = static_cast<GLFWwindow*>(Application::Get().GetWindow().GetNativeWindow());
        double xpos,ypos;
        glfwGetCursorPos(window,&xpos,&ypos);
        return {(float)xpos,(float)ypos};
    }

    float PlatformInput::GetMouseXImpl() {
        auto[x,y] = GetMousePositionImpl();
        return x;
    }
    float PlatformInput::GetMouseYImpl() {
        auto[x,y] = GetMousePositionImpl();
        return x;
    }
}


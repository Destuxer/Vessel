#include "glad/glad.h"
#include "Core/Base.h"
#include "pch.h"
#include "OpenGLContext.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Vessel {
    OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
        :m_WindowHandle(windowHandle){
        VSL_CORE_ASSERT(windowHandle,"Window handle is null!")
    }
    void OpenGLContext::Init(){
        glfwMakeContextCurrent(m_WindowHandle);
        int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    }

    void OpenGLContext::SwapBuffers(){
        glfwSwapBuffers(m_WindowHandle);
    }
}
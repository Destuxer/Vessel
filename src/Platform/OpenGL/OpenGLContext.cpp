#include "Vessel.h"
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
        VSL_CORE_ASSERT(status,"Failed to initialize Glad!")

        VSL_CORE_INFO("OpenGL Info:");
		VSL_CORE_INFO("  Vendor: {0}", glGetString(GL_VENDOR));
		VSL_CORE_INFO("  Renderer: {0}", glGetString(GL_RENDERER));
		VSL_CORE_INFO("  Version: {0}", glGetString(GL_VERSION));
    }

    void OpenGLContext::SwapBuffers(){
        glfwSwapBuffers(m_WindowHandle);
    }
}
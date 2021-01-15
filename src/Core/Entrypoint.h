#pragma once

#include "Core/Application.h"
#include "Core/Log.h"

extern Vessel::Application* Vessel::CreateApplication();

int main(int argc,const char** argv) {
    
    Vessel::Log::Init();
    Vessel::Log::GetCoreLogger()->warn("Initialized Log!");
    Vessel::Log::GetClientLogger()->info("Hello!");

    auto app = Vessel::CreateApplication();

    app->Run();
    delete app;
}
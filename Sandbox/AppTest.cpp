#include "imgui.h"
#include <Vessel.h>

class ExampleLayer : public Vessel::Layer{
public:
    ExampleLayer()
        : Layer("Example") {}
    
    void OnUpdate() override {
        if (Vessel::Input::IsKeyPressed(VSL_KEY_TAB))
            VSL_TRACE("Tab key is pressed.");
    }

    void OnEvent(Vessel::Event& event) override {
        VSL_TRACE("0",event);
    }

    virtual void OnImGuiRender() override {
        ImGui::Begin("Test");
        ImGui::Text("Hello!");
        ImGui::End();
    }
};

class Sandbox : public Vessel::Application {
public:
    Sandbox() {
        PushLayer(new ExampleLayer());
        PushOverlay(new Vessel::ImGuiLayer());
    }
    ~Sandbox() {

    }
};

Vessel::Application* Vessel::CreateApplication() {
    return new Sandbox();
}
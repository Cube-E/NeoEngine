#include "neopch.h"
#include "Application.h"
#include "ApplicationEvent.h"
#include "Log.h"

namespace Neo {

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {

	}

	void Application::Run() {

		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}
}
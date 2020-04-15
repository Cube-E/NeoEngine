#include "Application.h"

#include "Event/ApplicationEvent.h"
#include "Log.h"

namespace Neo {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1200, 720);
		NEO_CLIENT_TRACE(e);
		while (true);
	}
}
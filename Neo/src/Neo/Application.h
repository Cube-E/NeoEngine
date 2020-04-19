#pragma once

#include "Core.h"
#include "Window.h"

namespace Neo {

	class NEO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//To be defined in CLIENT
	Application* CreateApplication();
		//Extra notes: Defined outside of class in order to call/implement without having to create object.
}

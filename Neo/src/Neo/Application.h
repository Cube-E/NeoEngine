#pragma once

#include "Core.h"

namespace Neo {

	class NEO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
		//Extra notes: Defined outside of class in order to call/implement without having to create object.
}

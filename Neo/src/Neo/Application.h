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

}

#pragma once

#include "core.h"

namespace Chisel {

	class CH_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

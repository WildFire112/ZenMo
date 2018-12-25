#pragma once

#include "Core.h"

namespace zm {

	class _declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	Application* CreateApplication();
}


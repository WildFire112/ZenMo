#pragma once

#ifdef ZM_PLATFORM_WINDOWS

extern zm::Application* zm::CreateApplication();

int main(int args, char** argv) 
{

	printf("Run\n");
	auto app = zm::CreateApplication();
	app->Run();
	delete app;

}

#endif
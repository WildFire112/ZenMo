#include <ZenMo.h>

class Sandbox : public zm::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox() 
	{

	}
};

zm::Application* zm::CreateApplication() 
{
	return new Sandbox();
}
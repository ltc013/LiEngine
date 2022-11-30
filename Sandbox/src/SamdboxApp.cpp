#include <LiEngine.h>

class Sandbox : public LiEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

LiEngine::Application* LiEngine::CreateApplication()
{
	return new Sandbox();
}
#pragma once

#ifdef LE_PLATFORM_WINDOWS

extern LiEngine::Application* LiEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = LiEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif